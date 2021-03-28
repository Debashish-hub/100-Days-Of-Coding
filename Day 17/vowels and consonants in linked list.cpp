// Vowel and Consonants
// You are given a linked list consisting of vowels and consonants. The vowels and consonants are 
// arranged in random order. You have to rearrange the array such that all the vowel's nodes come before 
// the consonants and make sure that their order of appearance should match with that of the original list.

// Complete the arrangeVowCon function below.

/*
For your reference:

SinglyLinkedListNode {
char data;
SinglyLinkedListNode* next;
};
To create a new node below constructor is provided
SinglyLinkedListNode(char node_data)
*/


bool isVowel(char x){
    return (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u');
}
 
SinglyLinkedListNode *arrangeVowCon(SinglyLinkedListNode *head){
    SinglyLinkedListNode *newHead = head;
    SinglyLinkedListNode *latestVowel;
    SinglyLinkedListNode *curr = head;
    if (head == NULL)
        return NULL;
    if (isVowel(head->data))
        latestVowel = head;
    else{
        while (curr->next != NULL && !isVowel(curr->next->data))
            curr = curr->next;
        if (curr->next == NULL)
            return head;
        latestVowel = newHead = curr->next;
        curr->next = curr->next->next;
        latestVowel->next = head;
    }
    while (curr != NULL && curr->next != NULL){
        if (isVowel(curr->next->data)){
            if (curr == latestVowel){
                latestVowel = curr = curr->next;
            }
            else{
                SinglyLinkedListNode *temp = latestVowel->next;
                latestVowel->next = curr->next;
                latestVowel = latestVowel->next;
                curr->next = curr->next->next;
                latestVowel->next = temp;
            }
        }
        else{
            curr = curr->next;
        }
    }
    return newHead;
}
