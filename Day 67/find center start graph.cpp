// Find Center of Star Graph

// There is an undirected star graph consisting of n nodes labeled from 1 to n. A star graph is a graph where 
// there is one center node and exactly n - 1 edges that connect the center node with every other node.

// You are given a 2D integer array edges where each edges[i] = [ui, vi] indicates that there is an edge between 
// the nodes ui and vi. Return the center of the given star graph.


class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int, bool> ump;
        for(auto v : edges){
            if(ump[v[0]])return v[0];
            ump[v[0]]=true;
            if(ump[v[1]])return v[1];
            ump[v[1]]=true;
        }
        return -1;
    }
};