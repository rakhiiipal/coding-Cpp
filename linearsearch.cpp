#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[10] = {5, -7, 10, -2, 10, 22, -2, 5, 0, 22};
    cout << "Enter the element to search for" << endl;
    int key;
    cin >> key;

    bool found = search(arr, 10, key);

    if (found)
    {
        cout << "Key is present." << endl;
    }
    else
    {
        cout << "Key is not present." << endl;
    }
    // whether 1 is present in it or not ?

    return 0;
}