#include <iostream>
using namespace std;
 float studio(string,int);
float apartment(string,int);

 main()
 {
    int stays;
    float result1,result2;
    string month;
    cout << "month: ";
    cin>> month;
    cout << "stays : ";
    cin>> stays;
    result1 = studio (month,stays);
    result2=apartment(month,stays);
    cout << "studio: "<<result1<<endl;
    cout << "apartment "<<result2<<endl;
 }

float studio(string month,int stays)
{
    float total;
    if ((month=="may"|| month=="october"))
    {
        if (stays>7 && stays<=14)
        {
            total=50*stays;
            total=total*0.95;
        }

        else if (stays>14)
        {
            cout<<"bisma";
            total=50*stays;
            total=total-(total*0.30);
        }

        else 
        {
            total=50*stays;
        }
    
    }
   else  if((month=="june") || (month=="september"))
    {
        if(stays>14)
        {
            total=75.2*stays;
            total=total*0.80;
        }
        else 
        {
            total=75.2*stays;

        }

    }

    else 
    {
        total= stays*76;
    }
    return total;
}




float apartment(string month,int stays)
{
float total;
if ((month=="may"|| month=="october"))
{
    if (stays>14)
    {
        total=65*stays;
        total=total*0.9;
    }
    else
    {
        total=65*stays;
    }
}



else if ((month=="june"|| month=="september"))
{
    if (stays>14)
    {
        total=68.7*stays;
        total=total*0.9;
    }
    else
    {
        total=68.7*stays;
    }
}


else
{
    if (stays>14)
    {
        total=77*stays;
        total=total*0.9;
    }
    else
    {
        total=77*stays;
    }
}

return total;









}
