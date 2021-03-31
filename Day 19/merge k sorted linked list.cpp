// Merge K sorted linked lists
// Yor are given K sorted linked lists. You have to merge K sorted linked lists into one sorted list. 
// The size of the linked list maybe different.

// Complete the mergeKLists() function below.

/*
For your reference:

SinglyLinkedListNode {
int data;
SinglyLinkedListNode* next;
};
To create a new node use below constructor
SinglyLinkedListNode(int node_data)
*/
void copyListToArray(SinglyLinkedListNode* list, vector<int>& array){
        while(list != nullptr){
            array.push_back(list->data);
            list=list->next;
        }
        //cout<<"\n Array Size:"<<array.size();
    }
SinglyLinkedListNode * mergeKLists(vector<SinglyLinkedListNode *>& headLists){
    //write your code here
        std::vector<int> array;
        auto itr=headLists.begin();
        while(itr!=headLists.end()){
            copyListToArray(*itr,array);
            itr++;
        }
        sort(array.begin(), array.end());
        SinglyLinkedListNode* result=nullptr;
        SinglyLinkedListNode* temp=nullptr;
        for(int i=0;i<array.size();i++){
            if(result == nullptr){
                result=new SinglyLinkedListNode(array[i]);
                temp=result;
                continue;
            }
            temp->next=new SinglyLinkedListNode(array[i]);
            temp=temp->next;
        }
        
        return result;
    
}

