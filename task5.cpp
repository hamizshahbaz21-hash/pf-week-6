#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "How many numbers do you want to enter? ";
    cin >> n;
    int arr[n];   
    for(int i = 0; i < n; i++)
    {
        cout << "Enter number ";
        cin >> arr[i];
    }
    cout << "\nYou entered:\n";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}