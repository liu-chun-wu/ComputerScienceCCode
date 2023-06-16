#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
int main()
{
    node *first = new node();
    node *cur = new node();
    node *rear = new node();
    node *temp;

    first->data = 10;
    first->next = cur;

    cur->data = 20;
    cur->next = rear;

    rear->data = 30;
    rear->next = NULL;

    temp = first;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    free(first);
    cout << cur->data;
}
