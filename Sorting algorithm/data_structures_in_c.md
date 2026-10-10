# Data Structures Implementation in C++

This document contains C++ source codes for various fundamental data structures including Linked Lists, Queues, and Stacks implemented using arrays and pointers.

---

## 1. Circular Linked List

```cpp
#include<iostream>
using namespace std;
struct Node
{
    int data ;
    Node *next;

    Node (int value)
    {
        data=value;
        next= NULL;
    }
};

void Display( Node *head)
{
    Node *temp=head;

    do
    {
        cout <<temp->data << "->";
        temp=temp->next;
    }
    while (temp !=head);
    cout << temp->data;
}

int main ()
{
    int a,b,c,d;

    cout << "Enter Four values:";
    cin >> a>> b>> c>>d;

    Node*head=new Node (a);
    Node *second=new Node (b);
    Node *third =new Node (c);
    Node *forth = new Node (d);

    head->next=second;
    second->next=third;
    third->next=forth;
    forth->next=head;

    cout << "Circular Linked List is:";
    Display(head);
    return 0;
}
```

---

## 2. Doubly Linked List

```cpp
#include<iostream>
using namespace std;
struct Node
{
    int data ;
    Node *next;
    Node *Prev;

    Node(int value)
    {
        data=value;
        Prev=NULL;
        next=NULL;
    }
};

void Display (Node * head)
{
    Node* temp=head;

    while (temp !=NULL)
    {
     cout <<temp->data << "<->";
     temp=temp->next;
    }
}

int main ()
{
    int a,b,c,d;

    cout << "Enter 4 values:";
    cin>> a >>b >>c >>d;

    Node*head=new Node (a);
    Node*second= new Node (b);
    Node * third = new Node (c);
    Node * forth = new Node (d);

    head->next=second;
    second->next=third;
    third->next=forth;
    forth->next=NULL;

    second->Prev=head;
    third->Prev=second;
    forth->Prev=third;

    cout << "Doubly linked list is:";
    Display(head);
    return 0;
}
```

---

## 3. Queue Operations (Array Implementation)

### Queue Display
```cpp
#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout <<"Enter the size of array:";
    cin>>n;
    cout << "Enter " <<n << " Number of element:";
    int front=0;
    int rear=-1;
    int queue[n];

    for (int i=0; i<n; i++)
    {
        cin>>queue[i];
        rear++;
    }
    cout<<"Queue is:" <<endl;

    for (int i=front; i<=rear; i++)
    {
        cout <<queue[i] << " " <<endl;
    }
    return 0;
}
```

### Queue Enqueue Operation
```cpp
#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout <<"Enter the size of array:";
    cin>>n;
    cout << "Enter " <<n << " Number of element:";

    int queue[n];
    int front=0;
    int rear=-1;

    for (int i=0; i<n; i++)
    {
        cin>> queue[i];
        rear++;
    }

    int value;
    cout<< "Enter a number:";
    cin>>value;

    rear++;
    queue[rear]=value;

    cout << "Queue after Enqueqe operation:" <<endl;

    for (int i=front; i<=rear ; i++)
    {
        cout<< queue[i] << " " << endl;
    }

    return 0;
}
```

### Queue Dequeue Operation
```cpp
#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout <<"Enter the size of array:";
    cin>>n;
    cout << "Enter " <<n << " Number of element:";
    int front=0;
    int rear=-1;
    int queue[n];

    for (int i=0; i<n; i++)
    {
        cin>>queue[i];
        rear++;
    }

    cout<<"Delete element:" << queue[front] <<endl;
    front++;

    cout<<"Queue after Dequeue:" <<endl;

    for (int i=front; i<=rear; i++)
    {
        cout <<queue[i] << " " <<endl;
    }
    return 0;
}
```

---

## 4. Stack Operations (Array Implementation)

### Stack Display
```cpp
#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout << "Enter the size of array:";
    cin>>n;
    cout<< "Enter " << n << " Number of element:";

    int top=-1;
    int stack[n];

    for (int i=0 ; i<n; i++)
    {
        cin>>stack[i];
        top++;
    }
    cout <<endl;
    for (int i=top ; i>=0; i--)
    {
        cout << stack[i] << " " <<endl;
    }

    return 0;
}
```

### Stack Pop Operation
```cpp
#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout <<"Enter the size of array:";
    cin>>n;
    cout << "Enter " <<n << " Number of element:";

    int stack[n];
    int top=-1;

    for (int i=0; i<n; i++)
    {
        cin>> stack[i];
        top++;
    }

    cout << "Popped:" << stack[top] << endl;
    top--;

    cout << "Stack after pop:" <<endl;

    for (int i=top; i>=0 ; i--)
    {
        cout<< stack[i] << " " << endl;
    }

    return 0;
}
```

### Stack Push Operation
```cpp
#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout <<"Enter the size of array:";
    cin>>n;
    cout << "Enter " <<n << " Number of element:";

    int stack[n];
    int top=-1;

    for (int i=0; i<n; i++)
    {
        cin>> stack[i];
        top++;
    }

    int value;
    cout<< "Enter a number:";
    cin>>value;

    top++;
    stack[top]=value;

    cout << "Stack after push:" <<endl;

    for (int i=top; i>=0 ; i--)
    {
        cout<< stack[i] << " " << endl;
    }

    return 0;
}
```