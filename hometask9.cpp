#include<iostream>
using namespace std;

int main()
{
    string books[100];
    int totalBooks = 0;
    int choice;
    for(;;)
    {
        cout<<"\n===== Library Menu =====\n";
        cout<<"1. Add Books\n";
        cout<<"2. View Books\n";
        cout<<"3. Borrow Book\n";
        cout<<"4. View Books\n";
        cout<<"5. Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;
        if(choice==5)
        {
            break;
        }
        if(choice==1)
        {
            int n;
            cout<<"How many books: ";
            cin>>n;
            for(int i=0;i<n;i++)
            {
                cout<<"Enter book name: ";
                cin>>books[totalBooks];
                totalBooks++;
            }
        }
        else if(choice==2)
        {
            if(totalBooks==0)
            {
                cout<<"No books available\n";
            }
            else
            {
                for(int i=0;i<totalBooks;i++)
                {
                    cout<<i+1<<". "<<books[i]<<endl;
                }
            }
        }
        else if(choice==3)
        {
            int num;
            cout<<"Enter book number: ";
            cin>>num;
            if(num>0 && num<=totalBooks)
            {
                cout<<"You borrowed: "<<books[num-1]<<endl;
                for(int i=num-1;i<totalBooks-1;i++)
                {
                    books[i]=books[i+1];
                }
                totalBooks--;
            }
            else
            {
                cout<<"Invalid number!\n";
            }
        }
        else if(choice==4)
        {
            for(int i=0;i<totalBooks;i++)
            {
                cout<<books[i]<<endl;
            }
        }
        else
        {
            cout<<"Invalid choice!\n";
        }
    }
    cout<<"Program Ended";
}