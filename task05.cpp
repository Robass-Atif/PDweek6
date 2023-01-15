#include <iostream>
using namespace std;
float prices(string,string,float);


main()
{
    string fruit,time;
     float result;
     float quan;
     cout << "fruit: ";
     cin>> fruit;
     cout << "day: ";
     cin>> time;
     cout << "quantity: ";
     cin>> quan;
     result=prices(fruit,time,quan);
     cout << "result: "<< result;
}




float prices(string fruit,string time,float quan)
{float amount;
    if(time =="saturday"||time=="sunday")
    {
        if(fruit=="banana")
        {
            amount=quan*2.70;
        }
        else if(fruit=="apple")
        {
            amount=quan*1.25;
        }
        else if(fruit=="orange")
        {
            amount=quan*0.9;
        }
        else if(fruit=="grapefruit")
        {
            amount=quan*1.6;
        }
        else if(fruit=="kiwi")
        {
            amount=quan*3;
        }
        else if(fruit=="pineapple")
        {
            amount=quan*5.6;
        }
        else if(fruit=="grapes")
        {
            amount=quan*4.2;
        }
    }
    else
    {

 if(fruit=="banana")
        {
            amount=quan*2.5;
        }
        else if(fruit=="apple")
        {
            amount=quan*1.2;
        }
        else if(fruit=="orange")
        {
            amount=quan*0.85;
        }
        else if(fruit=="grapefruit")
        {
            amount=quan*1.45;
        }
        else if(fruit=="kiwi")
        {
            amount=quan*2.7;
        }
        else if(fruit=="pineapple")
        {
            amount=quan*5.5;
        }
        else if(fruit=="grapes")
        {
            amount=quan*3.85;
        }

    }
    return amount;
}