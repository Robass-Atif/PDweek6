#include <iostream>
using namespace std;



main()
{system("cls");
    int hour1,hour2,min1,min2;
    
    
    cout <<" starting hour: ";
    cin >> hour1;
    cout << "starting minutes: ";
    cin>> min1;
    cout <<"arrived hour: ";
    cin>> hour2;
    cout << "arrived minutes: ";
    cin>> min2;



    int a=(hour1*60)+min1;
    int b=(hour2*60)+min2;
   int total=b-a;
   int c,d;
    if(total<0)
    {
         total=total*(-1);
         c=total/60;
         d=total%60;
         if (c==0 && d<=30)
         {
         cout <<"on time"<<endl<< d << "minutes before the class.";
         }
         else if ((c==0 && d>30) || (c>0 && d>0))
         {
            cout << "early"<< endl<<c<<" hours "<<d<< " minutes.";
         }
         
    }


    if(total>0)
    {
         
         c=total/60;
         d=total%60;
         if(c==0 && d<=59)
         cout << "late"<< endl<<d<< " minutes.";
         else 
         {
            cout << "late"<< endl<<c<<" hour "  << d<< " minutes.";
         }



    }

}






