#include<iostream>
using namespace std;
void reversePrint(int arr[], int n)
{
    cout << "Numbers in reverse order: ";
    for(int i = n - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n;
    cout << "Enter how many numbers: ";
    cin >> n;
    int arr[n];   
    cout << "Enter " << n << " numbers:\n";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    reversePrint(arr, n);
}