// Creating an array, traversing, searching, inserting
#include <iostream>
using namespace std;
int insert(int arr[], int n, int cap, int x, int pos)
{
    if (n == cap)
    {
        return n;
    }
    int idx = pos - 1;
    for (int i = n - 1; i >= idx; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[idx] = x;
    return n + 1;
}
bool search(int arr[], int n, int el)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == el)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int arr[6] = {1, 2, 3, 5, 6};
    int size = 5;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    if (search(arr, 5, 3))
    {
        cout << "Element Found";
    }
    else
    {
        cout << "Element Not Found";
    }
    insert(arr, 5, 6, 4, 4);
    return 0;
}