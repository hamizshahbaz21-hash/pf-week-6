#include<iostream>
using namespace std;
main(){
    int sum=0;
    float average=0;
    int number[5]={12,21,3,11,54};
    for( int num=0; num<5; num=num+1)
    {
        sum=sum+number[num];
        average=sum/5;
    }
    cout<<"sum is:"<<sum<<endl;
    cout<<"average is:"<<average<<endl;
}