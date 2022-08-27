#include <iostream>
using namespace std;

int binarySearch(int arr[], int s, int e, int key)
{
    int start = s;
    int end = e;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int pivotArr(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (arr[mid] <= arr[0])
    {
        if (arr[mid] < arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int findPosition(int arr[], int n, int k)
{

    int pivot = pivotArr(arr, n);
    if (k >= arr[pivot] && k <= arr[n - 1])
    {
        return binarySearch(arr, pivot, n - 1, k);
    }
    else
    {
        return binarySearch(arr, 0, pivot - 1, k);
    }
}

int main()
{
    int pos[7] = {2, 4, 5, 6, 8, 9, 1};
    cout << "The Index is : " << findPosition(pos, 7, 8);

    return 0;
}