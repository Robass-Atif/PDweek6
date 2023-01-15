#include <iostream>
using namespace std;
string output( int,int,int);

main()
{
    int square,x,y;
    string result;
    cout << "square: ";
    cin>>square;
    cout << "x coordinate: ";
    cin >> x;
    cout << "y-coordinate: ";
    cin >> y;
    result=output(square,x,y);
    cout << result; 
}


string output(int square,int x,int y)
{int a=square*square;
int c=square*square*square;
int d=square*square*square*square;
    int z=square*3;
    int b=square*4;

   
     if((y==0 && (x>=0 && x<=z)) || (y==square &&(x>=0 && x<=z)) || (x==square && (y>square && y<=d))||(x==a &&(y>square&& y<=d )) ||(y==d && (x>=square && x<=a))  ||(y==z && (x>=square && x<=a)) ||(y==a && (x>=square && x<=a))  ||(y==square && (x>=square && x<=a)) ||(x==square && y<square) || (x==a && y<square) ||(x==z && y<square) )  
    {
        return "border";
    }
    else  if((x<z)&&(y<z)|| ((x<a && x>z)&&(y<b) ))
    {
        return "inside";
    }
    else
    {
        return "outside";
    }


return 0;
}