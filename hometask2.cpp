#include <iostream>
using namespace std;
main(){
    int n ;
    int even=0;
    cout<<"enter element you want";
    cin>>n;
    int number[n];
    for(int i=0; i<n; i=i+1)
    {
        cout<<"enter number";
        cin>> number[n];
        if( number[n]%2==0)
        {
            even++;

        }
    }
    cout<<" total even number in array is:"<<even<<endl;
}