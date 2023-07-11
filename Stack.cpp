#include <iostream>
#define SIZE 10
using namespace std;

class Stack
{
  int data[SIZE];
  int top;
public:
    Stack ()
  {
    top = -1;
  }
  void push (int element)
  {
    if (isFull () == 1)
      cout << "Stack is Full...";
    else
      data[++top] = element;
  }
  int pop ()
  {
    if (isEmpty () == 1)
      return -1;
    else
      return data[top--];
  }
  int isEmpty ()
  {
    if (top == -1)
      return 1;
    else
      return 0;
  }
  int isFull ()
  {
    if (top == SIZE - 1)
      return 1;
    else
      return 0;
  }
  int peak ()
  {
    if (isEmpty () == 1)
      return -1;
    else
      return data[top];
  }
};

int main ()
{
  cout << "Static Implementation of Stack";
  Stack st;
  st.push (10);
  st.push (20);
  cout << "\n Stack is Empty?" << st.isEmpty ();
  cout << "\n Stack is Full?" << st.isFull ();
  cout << "\n Element is at top position :" << st.peak ();
  cout << "\n Element removed from Stack :  " << st.pop ();
  cout << "\n Element removed from Stack :  " << st.pop ();
  cout << "\n Element removed from Stack :  " << st.pop ();

  return 0;

}
