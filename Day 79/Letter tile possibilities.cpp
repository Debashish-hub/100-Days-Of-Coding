//  Letter Tile Possibilities

// You have n  tiles, where each tile has one letter tiles[i] printed on it.
// Return the number of possible non-empty sequences of letters you can make using the letters printed on those tiles.


class Solution {
public:
    void find_all(string &tiles,string &curr,vector<bool> &visited, unordered_set<string> &s)
    {
        for(int i=0;i<tiles.size();i++)
        {
            if(visited[i]==false)
            {
                curr.push_back(tiles[i]);
                visited[i]=true;
                s.insert(curr);
                find_all(tiles,curr,visited,s);
                visited[i]=false;
                curr.pop_back();
            }
        }
    }
    int numTilePossibilities(string tiles) {
        vector<bool> visited(tiles.size());
        unordered_set<string> s;
        string curr;
        find_all(tiles,curr,visited,s);
        return s.size();
    }
};