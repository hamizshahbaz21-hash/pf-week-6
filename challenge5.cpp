#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter how many numbers: ";
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        int num;
        cout << "Enter number: ";
        cin >> num;
        bool found = false;
        for(int j = 0; j < i; j++)
        {
            if(arr[j] == num)
            {
                found = true;
                break;
            }
        }
        if(found)
        {
            cout << "Already Entered\n";
            i--;
        }
        else
        {
            arr[i] = num;
        }
    }
    cout << "\nFinal Numbers:\n";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}