#include <iostream>
using namespace std;

main()
{
    string temp,humid,activity;
    cout<< "temperature: ";
    cin>> temp;
    cout<<"humidity : ";
    cin>>humid;
    if(temp=="warm" && humid=="dry")
    {
        activity="play tennis.";
    }
    else if(temp=="warm" && humid=="humid")
    {
        activity="swim.";

    }
    else if(temp=="cold" && humid=="dry")
    {
        activity="play basketball.";
    }
    else
    {
        activity="watch tv."; 
    }
    cout << activity;
}