// Stone Number

// PrepBuddy gave Tina a pile of N stones. Each stone has a number written on it from 1 to N. Pile is ordered according to 
// the number written on the stone, i.e, stone with the number 1 is at the top of the pile and stone with the number N
// is at the bottom of the pile.
// Tina needs to perform tasks in given sequence,
//     Take the topmost stone and insert it at the bottom.
//     Remove the current topmost stone from the pile.
// These operations need to be performed until a single stone remains. Tina has to print the number that is written on 
// the last stone remaining in the pile.



#include <bits/stdc++.h>
  using namespace std;
  
  class Queue {
  public:
      int front, rear, size;
      unsigned capacity;
      int* array;
  };
   
  Queue* createQueue(unsigned capacity)
  {
      Queue* queue = new Queue();
      queue->capacity = capacity;
      queue->front = queue->size = 0;
   
      queue->rear = capacity - 1;
      queue->array = new int[queue->capacity];
      return queue;
  }
  int isFull(Queue* queue)
  {
      return (queue->size == queue->capacity);
  }
   
  int isEmpty(Queue* queue)
  {
      return (queue->size == 0);
  }
   
  void enqueue(Queue* queue, int item)
  {
      if (isFull(queue))
          return;
      queue->rear = (queue->rear + 1) % queue->capacity;
      queue->array[queue->rear] = item;
      queue->size = queue->size + 1;
  }
   
  void dequeue(Queue* queue)
  {
      if (isEmpty(queue))
          return ;
      int item = queue->array[queue->front];
      queue->front = (queue->front + 1) % queue->capacity;
      queue->size = queue->size - 1;
  }
   
  int front(Queue* queue)
  {
      if (isEmpty(queue))
          return INT_MIN;
      return queue->array[queue->front];
  }
   
  int rear(Queue* queue)
  {
      if (isEmpty(queue))
          return INT_MIN;
      return queue->array[queue->rear];
  }
 
  
  int main()
  {
    //write your code here
    int t; cin>>t;
    while(t--){
      Queue* queue = createQueue(100);
      int n; cin>>n;
      for(int i=1; i<=n; i++){
        enqueue(queue, i);
      }
        while(front(queue) != rear(queue)){
          int t, i=1;
          if(i % 2 != 0){
            t = front(queue);
            dequeue(queue);
            enqueue(queue, t);
            i++;
          }
          if(i % 2 == 0){
            dequeue(queue);
            i++;
          }
        }
      
      cout<<front(queue)<<endl;
    }
    return 0;
  }