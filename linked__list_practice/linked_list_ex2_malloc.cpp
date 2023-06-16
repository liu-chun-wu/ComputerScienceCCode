#include <iostream>
#include <cstdlib>
// using malloc requires to include<stdlib>
using namespace std;
struct node
{
	int data;
	struct node *next;
};
typedef struct node Node;
int main()
{
	Node *first, *cur, *rear, *ptr;
	first = (Node *)malloc(sizeof(Node));
	cur = (Node *)malloc(sizeof(Node));
	rear = (Node *)malloc(sizeof(Node));
	first->data = 10;
	first->next = cur;
	cur->data = 20;
	cur->next = rear;
	rear->data = 30;
	rear->next = NULL;
	ptr = first;
	while (ptr != NULL)
	{
		cout << ptr->data << " ";
		ptr = ptr->next;
	}
	free(first);
	cout << cur->data;
}
