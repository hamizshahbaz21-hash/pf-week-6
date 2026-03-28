#include<iostream>
using namespace std;
int findLargestNumber(int arr[], int size)
{
    int max = arr[0];
    for(int i = 1; i < size; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}
int main()
{
    int n;
    cout << "Enter how many numbers: ";
    cin >> n;
    int arr[n];
    cout << "Enter numbers:\n";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int largest = findLargestNumber(arr, n);
    cout << "Largest number is: " << largest;
}