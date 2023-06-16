/*
Practice 13
Name: 劉俊吾
Student Number: 111502522
Course 2022-CE1003-A
*/
#include <iostream>
#include <vector>
using namespace std;
int *mergearray(int *ar1, int *ar2, int n1, int n2)
{
    int *ar3 = new int[n1 + n2];
    for (int i = 0; i < n1; i++)
    {
        ar3[i] = ar1[i];
    }
    for (int i = n1; i < n1 + n2; i++)
    {
        ar3[i] = ar2[i - n1];
    }
    int temp;
    for (int i = 0; i < n1 + n2 - 1; i++)
    {
        for (int i = 0; i < n1 + n2 - 1; i++)
        {
            if (ar3[i] > ar3[i + 1])
            {
                temp = ar3[i];
                ar3[i] = ar3[i + 1];
                ar3[i + 1] = temp;
            }
        }
    }
    return ar3;
}
int main()
{
    int n1;
    cin >> n1;
    int *ar1 = new int[n1];
    for (int i = 0; i < n1; i++)
    {
        cin >> ar1[i];
    }
    int n2;
    cin >> n2;
    int *ar2 = new int[n2];
    for (int i = 0; i < n2; i++)
    {
        cin >> ar2[i];
    }
    int *ar3;
    ar3 = mergearray(ar1, ar2, n1, n2);
    for (int i = 0; i < n1 + n2; i++)
    {
        cout << ar3[i];
        cout << " ";
    }
    cout << endl;
}