#include <bits/stdc++.h>
using namespace std;
void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
void duplicate(int arr1[], int arr2[], int n, int m)
{
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] == arr2[j])
        {
            cout << arr1[i] << endl;
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
}
int main()
{
    int n = 4;
    int arr1[n] = {2, 2, 4, 5};
    int m = 3;
    int arr2[m] = {2, 4, 6};
    printArr(arr1, n);
    cout << endl;
    printArr(arr2, m);
    cout << endl;
    duplicate(arr1, arr2, n, m);
}