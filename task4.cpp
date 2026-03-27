#include<iostream>
using namespace std;
main(){
    int number[5];
    for(int num=0; num<5;num=num+1)
    {
        cout<<"enter number:";
    cin>>number[num];

    }
    cout<<"the 1st element in array is"<<number[0]<<endl;
    cout<<"the last element of array is:"<<number[4]<<endl;
    
}