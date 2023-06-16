// 20230418_linked_list_ex1
#include <iostream>
using namespace std;
struct node
{
	int data;
	struct node *next;
};
int main()
{
	struct node a, b, c;
	struct node *ptr = &a;
	a.data = 12;
	a.next = &b;
	b.data = 30;
	b.next = &c;
	c.data = 64;
	c.next = NULL;
	while (ptr != NULL)
	{
		cout << "address = " << ptr << " ";
		cout << "data = " << ptr->data << " ";
		cout << "next = " << ptr->next << endl;
		ptr = ptr->next;
	}
}
