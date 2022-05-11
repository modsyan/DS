#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next = NULL;
};

node* rear = NULL;
node* front = NULL;

void enqueue(int val)
{
    node *tmp = new node;
    tmp->data = val;

    if (front != NULL && rear != NULL)
    {
        front->next = tmp;
        front = front->next;
    }
    else
    {
        rear = tmp;
        front = tmp;
    }
}
void print ()
{
    node* tmp = rear;
    while(tmp != NULL)
    {
        cout << tmp->data << endl;
        tmp = tmp->next;
    }
};


int dequeue()
{
}

int main()
{
    enqueue(2);
    cout << front->data << endl;
    enqueue(3);
    cout << front->data << endl;
    enqueue(3);
    cout << front->data << endl;


    print();
}