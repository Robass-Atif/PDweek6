#include <iostream>
using namespace std;
string star( int,string);



main()
{
    int day;
    string month,result;
    cout<< "day: ";
    cin>>day;
    cout<< "month: ";
    cin>> month;
    result=star(day,month);
    cout <<result;
}


string star(int day,string month)
{string sign;
    if((month=="march" && day>20)||(month=="april" && day<20))
    {
            sign="aries";
    }
    else if((month=="april" && day>19)||(month=="may" && day<21))
    {
        sign="taurus";
    }
    else if((month=="may" && day>20)||(month=="june" && day<21))
    {
        sign="gemini";
    }
    else if((month=="june" && day>20)||(month=="july" && day<23))
    {
        sign="cancer";
    }
    else if((month=="july" && day>22)||(month=="august" && day<23))
    {
        sign="leo";
    }
    else if((month=="august" && day>22)||(month=="september" && day<23))
    {
        sign="virgo";
    }
    else if((month=="september" && day>22)||(month=="october" && day<23))
    {
        sign="libra";
    }
    else if((month=="october" && day>22)||(month=="november" && day<22))
    {
        sign="scorpion";
    }
    else if((month=="november" && day>21)||(month=="december" && day<22))
    {
        sign="sagittarius";
    }
    else if((month=="december" && day>21)||(month=="january" && day<20))
    {
        sign="capricon";
    }
    else if((month=="january" && day>19)||(month=="february" && day<19))
    {
        sign="aquarius";
    }
    else
    {
        sign="pisces";
    }
    return sign;
}