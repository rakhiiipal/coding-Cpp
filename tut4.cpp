#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    cout << "Printing the array" << endl;
    // print the array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << "Printing done" << endl;
}

int main()
{
    int num[15];

    cout << "Value at 15 index" << num[14] << endl;

    cout << "Value at 20 index" << num[20] << endl;

    int second[3] = {5, 7, 11};
    cout << "Value at second index is:" << second[2] << endl;

    int third[15] = {2, 7};
    // printArray(third, 15);

    int thirdSize = sizeof(third) / sizeof(int);
    cout << "Size of third  is : " << thirdSize << endl;

    int fourth[10] = {0};
    // printArray(fourth, 10);

    int fourthSize = sizeof(fourth) / sizeof(int);
    // cout << "Size of Fourth is : " << fourthSize << endl;

    char ch[5] = {'a', 'b', 'c', 'd', 'e'};

    cout << endl
         << "Everything is fine" << endl;

    return 0;
}
