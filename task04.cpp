#include <iostream>
using namespace std;

main()
{
    char type;
    string time;
    float min;
    float result;
    cout << "type: ";
    cin >> type;
    cout << "time: ";
    cin>>time;
    cout << " minutes: ";
    cin>> min;
    

    if(type=='r' || type=='R')
    {
        result=min-50;
        if(result<0){result=10;}
        else{
        result =(result*0.2)+10;
        cout << "result: "<<result;}
    }
    else if (type=='p'|| type=='P')
        {
                if (time=="day")
                {
                    result=min-75;
                    if (result<0){result=25;}
                    else
                    {
                    result=(result*0.1)+25;}
                }
                else 
                {

                    result=min-100;
                    if(result<0){result=25;}
                    else
                    {
                    result=(result*0.05)+25;
                    }
                    
                }
                cout << "result: "<<result;
        }

        else
        {
            cout << "error.";
        }

        
}
