#include <iostream>
using namespace std;
struct node
{
	int data;
	node *next;
};
int main()
{
	node *head = new node();
	head->next = NULL;
	node *cur = head;
	for (int i = 0; i < 10; i++)
	{
		cur->next = new node();
		cur = cur->next;
		cur->data = i;
		cur->next = NULL;
	}
	cur = head;
	while (cur != NULL)
	{
		cout << cur->data << " ";
		cur = cur->next;
	}
}
