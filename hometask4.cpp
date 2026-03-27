#include<iostream>
using namespace std;
main(){
    string student[5];
    for(int i=0; i<5; i++)
    {
        cout<<"enter student name"<<i+1<<":"<<endl;
        cin>>student[i];
    }
    cout<<"........student list......."<<endl;
    for(int i=0;i<5; i++){
    cout<<student[i]<<endl;
    }
}
