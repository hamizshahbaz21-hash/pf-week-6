#include<iostream>
#include<string>
using namespace std;
string removeVowels(string str)
{
    string result = "";
    for(int i = 0; i < str.length(); i++)
    {
        char ch = str[i];

        if(ch!='a' && ch!='e' && ch!='i' && ch!='o' && ch!='u' &&
           ch!='A' && ch!='E' && ch!='I' && ch!='O' && ch!='U')
        {
            result = result + ch;
        }
    }
    return result;
}
int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    string output = removeVowels(str);
    cout << "Output: " << output;
}