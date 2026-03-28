#include<iostream>
#include<string> 
using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;
    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] == 'z')
        {
            str[i] = 'a';
        }
        else
        {
            str[i] = str[i] + 1;
        }
    }
    cout << "Output: " << str;
}