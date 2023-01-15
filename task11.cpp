#include <iostream>
#include <windows.h>
using namespace std;
void printmaze();
void printmaze2(int);
void gotoxy(int x,int y);
void move(int x,int y);
void clear(int x,int y,char previouschar);
void clearb(int x,int y);
void showghost(int x,int y);
char getCharAtxy(short int x,short int y);



main(){
    
system("cls");
string direction="right";
string direction2="down";
int score=0;
printmaze();
printmaze2(score);
int x=4;
int y=16;

char previouschar=' ';
char previouschar2=' ';

bool gamerunning;
int gx=3;
int gy=1;
int gax=106;

int gby=2;
showghost(gax,gby);

showghost(gx,gy);

gamerunning=true;
while( gamerunning)
{



  
	if(GetAsyncKeyState(VK_RIGHT))
    {char nextlocation1=getCharAtxy(x+1,y);
	{
    score++; 
   
    clearb(x,y);
	x=x+1;
	move(x,y);}}
	
	 else if(GetAsyncKeyState(VK_LEFT))
    {char nextlocation1=getCharAtxy(x-1,y);
	{ 
    score++;
     
    clearb(x,y);
	x=x-1;
	move(x,y);
	}}
   

	else if(GetAsyncKeyState(VK_UP))
    {char nextlocation1=getCharAtxy(x,y-1);
	{clearb(x,y);
    score++;
   
	y=y-1;
	move(x,y);}}

	else if(GetAsyncKeyState(VK_DOWN))
    {char nextlocation1=getCharAtxy(x,y+1);
	{clearb(x,y);
    score++;
    
    
	y=y+1;
	move(x,y);}}

    

	if(GetAsyncKeyState(VK_ESCAPE))
	{gamerunning=false;}



	
Sleep (200);

        if (direction=="right")
        {
            char nextlocation=getCharAtxy(gx+1,gy);
            if(nextlocation=='#' || nextlocation=='|')
                {
                 direction="left";
                     }
            else if (nextlocation==' ' || nextlocation=='.')
            {
                clear(gx,gy,previouschar);
                gx=gx+1;
                previouschar=nextlocation;
                showghost(gx,gy);

             }
        }

            if (direction=="left")
            {
            char nextlocation=getCharAtxy(gx-1,gy);
                if(nextlocation=='#' || nextlocation=='|')
                {
                 direction="right";
                    }
                 else if (nextlocation==' ' || nextlocation=='.')
                 {
                     clear(gx,gy,previouschar);
                     gx=gx-1;
                         previouschar=nextlocation;
                     showghost(gx,gy);

                }
        }


         if (direction2=="down")
        {
            char nextlocation=getCharAtxy(gax,gby+1);
            if(nextlocation=='#' || nextlocation=='|')
                {
                 direction2="up";
                     }
            else if (nextlocation==' ' || nextlocation=='.')
            {
                clear(gax,gby,previouschar2);
                gby=gby+1;
                previouschar2=nextlocation;
                showghost(gax,gby);

             }
        }

            if (direction2=="up")
            {
            char nextlocation=getCharAtxy(gax,gby-1);
                if(nextlocation=='#' || nextlocation=='|')
                {
                 direction2="down";
                    }
                 else if (nextlocation==' ' || nextlocation=='.')
                 {
                     clear(gax,gby,previouschar2);
                     gby=gby-1;
                         previouschar2=nextlocation;
                     showghost(gax,gby);

                }
        }

            
gotoxy(0,30);
}

}







void clear(int x,int y,char previouschar)
{
gotoxy(x,y);
cout << previouschar;
}



void clearb(int x,int y)
{
    gotoxy(x,y);
    cout<< " ";
  
}




void move(int x,int y)
{

gotoxy(x,y);
cout <<"p";


}





void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
} 









char getCharAtxy(short int x,short int y)
{
CHAR_INFO ci;
COORD xy={0,0};
SMALL_RECT rect={x,y,x,y};
COORD coordBufSize;
coordBufSize.Y=1;
return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize,xy, &rect) ? ci.Char.AsciiChar : ' ';
}








void printmaze ()
{ 
cout << "####################################################################################################################################### " << endl;
cout << "||..  ......................................................................................................................   ....  || " << endl;
cout << "||..  %%%%%%%%%%%%%%%%%%%%%%                     ...              %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%   |%|..                   %%%%  ||" << endl;  
cout << "||..        |%|           |%|                 |%|...              |%|                            |%|   |%|..                    |%|  ||" << endl;
cout << "||..        |%|           |%|                 |%|...              |%|                            |%|   |%|..                    |%|  ||"<<endl;
cout << "||..        %%%%%%%%%%%%%%%%%     .      .    |%|...              %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%      ..                   %%%%  ||" <<endl;
cout << "||..        |%|                   .      .    |%|...              .................................. |%|  ..                        .||"<<endl;
cout << "||..        %%%%%%%%%%%%%%%%%     .      .    |%|...              %%%%%%%%%%%%%%%%%%%%%%%%%%%%%      |%|  ..                   %%%%  ||"<<endl;
cout << "||..                      |%|     .                               |%|................                |%|  ..                    |%| .||"<< endl;
cout << "||..       ............   |%|     .                               |%|................ |%|                 ..                    |%| .||" <<endl;
cout << "||..|%|    |%|%%%%%%|%|.  |%|     .        |%|                       ................ |%|                 ..|%|                 |%| .||"<<endl;
cout << "||..|%|    |%|      |%|...                 %%%%%%%%%%%%%%%%%%%%%%%   .................|%|                  .|%| .                    ||"<<endl;
cout << "||..|%|    |%|      |%|...                                 ....|%|              %%%%%%%%%                  .|%|                      ||"<<endl;
cout << "||..|%|                  .                                 ....|%|                                  |%|  ...|%|.                     ||"<< endl;
cout<<  "||..|%|    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%                 ....|%|%%%%%%%%%%%%%%%%%%%%%%            |%|  ...|%|%%%%%%%%%%%           ||"<<endl;
cout<<  "||......................................................................................            |%|  ................            ||" <<endl;
cout<<  "||      ................................................................................                  .......................    ||" <<endl;
cout << "||..|%|   |%|       |%| ..               %%%%%%%%%%%%%%%%%%%%%%%     .................|%|           |%|  ...|%|.                     ||"<<endl;
cout << "||..|%|   |%|..                                        ......|%|                %%%%%%%%%           |%|  ...|%|.                     ||"<<endl;
cout << "||.......................................................................................                   .....................    ||" <<endl;
cout << "||          .............................................................................                   .....................    ||" <<endl;
cout << "#######################################################################################################################################" <<endl;
cout << endl;

}

void printmaze2 (int score)
{ gotoxy(0,45);
cout<<" \n                         *****YOUR SCORE IS: "<<score<<"*****   ";
}


void showghost(int x,int y)
{
    gotoxy(x,y);
    cout << "G";
}