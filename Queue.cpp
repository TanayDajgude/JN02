#include <iostream>
#define SIZE 2
using namespace std;

class Queue
{
  int data[SIZE];
  int rear,front;
public:
    Queue ()
  {
    front = rear = -1;
  }
  void insert (int element)
  {
    if (isFull () == 1)
      cout << "Queue is Full...";
    else
      {
          data[++rear]=element;
          if(front==-1)
            front=0;
      }
  }
  int remove ()
  {
    if (isEmpty () == 1)
      return -1;
    else
      return data[front++];
  }
  int isEmpty ()
  {
    if (rear == front==-1)
    {
        cout<<"Queue is Empty..";
        return 1;
    }
     
    else
      return 0;
  }
  int isFull ()
  {
    if (rear == SIZE - 1)
      return 1;
    else
      return 0;
  }
  int peak ()
  {
    if (isEmpty () == 1)
      return -1;
    else
      return data[front];
  }
};

int main ()
{
  cout << "Static Implementation of Queue";
  Queue q;
  q.insert (10);
  q.insert (20);
  q.insert (30);
  cout << "\n Queue is Empty?" << q.isEmpty ();
  cout << "\n Queue is Full?" << q.isFull ();
  cout << "\n Element is at top position :" << q.peak ();
  cout << "\n Element removed from Queue :  " << q.remove ();
  cout << "\n Element removed from Queue :  " << q.remove ();
  cout << "\n Element removed from Queue :  " << q.remove ();

  return 0;

}
