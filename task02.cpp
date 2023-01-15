#include <iostream>
using namespace std;
string grading(float);


main()
{
    string name,a,b,c,d,e;
    float f,g,h,i,j;
    string grade;
    cout << "name: ";
    cin>> name;
    cout << "subject 1: ";
    cin>> a;
    cout << "marks1 :";
    cin>> f;
    cout << "subject 2: ";
    cin >> b;
    cout << "marks2 :";
    cin>> g;
    cout << " subject 3: ";
     cin>> c;
     cout << "marks3 :";
    cin>> i;
     cout << "subject 4: ";
     cin>> d;
     cout << "marks4 :";
    cin>> j;
     cout << "subject 5: ";
     cin>>e;
     cout << "marks5 :";
    cin>> j;
     
     float totalmarks=f+g+h+i+j;

     float percent=(totalmarks*100)/500;

     grade=grading(percent);
    cout <<"#####################################################"<<endl;
     cout<< "total marks: "<<totalmarks<<endl;

     cout << "percentage: "<<percent<< endl;

     cout<< "grade : "<<grade<<endl;
     cout << "subject : "<<a<<","<<b<<","<<c <<","<<d<< ","<<e<<endl;

}

     string grading(float percent)
     {
        string grade;

     if(percent>=90 && percent<=100)
     {
        grade="A+";
     }

     else if(percent>=80 && percent<=89)
        {
            grade="A";
        }

        else if(percent>=70 && percent<=79)
        {
            grade="B+";
        }

        else if(percent>=60 && percent<=69)
        {
            grade="B+";
        }

        else if(percent>=50 && percent<=59)
        {
            grade="C";
        }
            
            
        else if(percent>=40 && percent<=49)
        {
            grade="D";
        }

        else 
        {
            grade ="F";
        }
        return grade;

     }