#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int sum = 0;

    int arr[100];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }
    cout << "The sum of the array is " << sum << endl;
    return 0;
}