#include<iostream>
using namespace std;
main(){
    int n;
    cout<<"enter number of elements";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i=i+1)
    {
        cout<<"enter numbers"<<i+1<<":";
        cin>>arr[i];
    }
   int  largest = arr[0];
   int  smallest = arr[0];
   for(int i=0; i<n; i++)
    {
        if(arr[i]>largest){
        largest=arr[i];
    if (arr[i]<smallest){
        smallest = arr[i];
    }

    }
}
cout<<"largest number is"<<largest<<endl;
cout<<"smallest number is"<<smallest<<endl;
}
