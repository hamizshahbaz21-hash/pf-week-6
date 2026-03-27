#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements you want: ";
    cin >> n;
    int number[n];  
    int sum = 0;
    for(int i = 0; i < n; i++){
        cout << "Enter element:";
        cin >> number[i];
        sum = sum + number[i]; 
    }

    cout << "Sum of all elements is: " << sum;
}