#include <bits/stdc++.h>
using namespace std;
int getMax(int arr[], int size)
{
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int getMin(int arr[], int size)


{
    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}
int main()
{
    int size;
    cin >> size;
    int number[100];
    for (int i = 0; i < size; i++)
    {
        cin >> number[i];
    }
    cout << "The Maximum value is : " << getMax(number, size);
    cout << "The Minimum value is : " << getMin(number, size);
}
