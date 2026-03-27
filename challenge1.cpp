#include<iostream>
using namespace std;

int main()
{
    char word[50];
    cout<<"Enter a word: ";
    cin>>word;

    int i=0;
    while(word[i] != '\0')
    {
        cout<<word[i]<<" is at index "<<i<<endl;
        i++;
    }

    return 0;
}