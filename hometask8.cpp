#include<iostream>
using namespace std;

main()
{
    int flight_number[4] = { 221, 32, 321, 2432 };
    string destination[4] = { " lahore ", " pishawer ", " islamabad ", " sawat " };
    int seats_avialable[4] = { 3, 7, 1, 6 };

    int num;
    cout<<" Enter number of flights : ";
    cin>>num;
    cout<<endl;

    for( int i =0; i < num; i++ )
    {
        cout<<" Enter flight number for flight " << i+1;
        cin>>flight_number[i];
        cout<<" Enter destination for flight " <<flight_number[i];
        cin>>destination[i];
        cout<<" Enter seats available for flight " <<flight_number[i];
        cin>>seats_avialable[i];
        cout<<endl;
    }
    cout<<endl;

    cout<<"         Flight Information      "<<endl;
    cout<<"---------------------------------"<<endl;

    for( int i =0; i < num; i++ )
    {
        cout<<" flight "<<flight_number[i] <<" to "<<destination[i] <<" has "<<seats_avialable[i] <<" seats avialable ";
        cout<<endl;
    }

    cout<<"    Flights with less than five seats    "<<endl;
    cout<<"-----------------------------------------"<<endl;
    bool found = false;
    for( int i =0; i < num; i++ )
    {
       if( seats_avialable[i] < 5 )
       {
          cout<<" flight "<<flight_number[i] <<" to "<<destination[i] <<" has only "<<seats_avialable[i] <<" left ";
          cout<<endl;
          found = true;
       }
    }
   if( found == false)
       {
         cout<<" No flight with leass than 5 seat available "<<endl;
       }
}   