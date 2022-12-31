#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
void playermove1(int x1,int y1);
void playermove2(int x2,int y2);
void playermove3(int x3,int y3);
void playermove4(int x4,int y4);
void maze();
main(){
system("cls");
int x1,y1,x2,y2,x3,y3,x4,y4;
x1=3;
y1=1;
x2=67;
y2=2;
x3=66;
y3=22;
x4=3;
y4=22;
maze();
while(true){
while(x1<68){
if(x1<68){
   playermove1(x1,y1);
   x1++;
  }if(x1==68){
   gotoxy(x1-1,y1);
   cout << " ";
   }
}
while(y2<23){
if(y2<23){
  playermove2(x2,y2);
  y2++;
   }if(y2==23){
   gotoxy(x2,y2-1);
   cout << " ";
   }
 }
while(x3>3){
if(x3>3){
 playermove3(x3,y3);
 x3--;
  }if(x3==3){
  gotoxy(x3+1,y3);
  cout << " ";
  }
 }
while(y4>1){
if(y4>1){
 playermove4(x4,y4);
 y4--;
 }
if(y4==1){
 gotoxy(x4,y4+1);
 cout << " ";
 }
}
x1=3;
y1=1;
x2=67;
y2=2;
x3=66;
y3=22;
x4=3;
y4=22;
}
}
void maze()
{
cout << "#######################################################################" << endl;
cout << "||                                                                   ||" << endl;
cout << "||   %%%%%%%%%%%%%%%%        ...     %%%%%%%%%%%%%    |%|..   %%%%   || " << endl;
cout << "||          |%|   |%|     |%|...     |%|       |%|    |%|..    |%|   ||" << endl;
cout << "||          |%|   |%|     |%|...     |%|       |%|    |%|..    |%|   ||" << endl;
cout << "||          %%%%%%%%% . . |%|...     %%%%%%%%%%%%%       ..   %%%%.  ||" << endl;
cout << "||          |%|       . . |%|...     .............   |%| ..       .  ||" << endl;
cout << "||          %%%%%%%%%%. . |%|...     %%%%%%%%%%%     |%| ..   %%%%.  ||" << endl;
cout << "||                 |%|.              |%|.....        |%| ..    |%|.  ||" << endl;
cout << "||       ......... |%|.              |%|.....|%|               |%|.  ||" << endl;
cout << "||  |%|  |%|%%%|%|.|%|. |%|             .....|%|         ..|%| |%|.  ||" << endl;
cout << "||  |%|  |%|   |%|..    %%%%%%%%%%%%%%  .....|%|          .|%|.      ||" << endl;
cout << "||  |%|  |%|   |%|..            ...|%|     %%%%%         . |%|.      ||" << endl;
cout << "||  |%|            .            ...|%|               |%| ..|%|.      ||" << endl;
cout << "||  |%|  %%%%%%%%%%%%%%         ...|%|%%%%%%%%%      |%| ..|%|%%%%%  ||" << endl;
cout << "||  .............................................    |%| ..........  ||" << endl;
cout << "||  .............................................           .......  ||" << endl;
cout << "||  |%|  |%|   |%|..    %%%%%%%%%%%%%   .....|%|      |%| ..|%|.     ||" << endl;
cout << "||  |%|  |%|   |%|..            ...|%|      %%%%%     |%| ..|%|.     ||" << endl;
cout << "||  |%|            .            ...|%|                |%| ..|%|.     ||" << endl;
cout << "||  |%|  %%%%%%%%%%%%%%         ...|%|%%%%%%%%%%      |%| ..|%|%%%%  ||" << endl;
cout << "||  .............................................     |%| .........  ||" << endl;
cout << "||                                                                   ||" << endl;
cout << "||                                                                   ||" << endl;
cout << "#######################################################################" << endl;

}
void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void playermove1(int x1,int y1)
{
 gotoxy(x1-1,y1);
 cout << " ";
 gotoxy(x1,y1);
 cout << "P";
 Sleep(500);
}
void playermove2(int x2,int y2)
{
 gotoxy(x2,y2-1);
 cout << " ";
 gotoxy(x2,y2);
 cout << "P";
 Sleep(500);
}
void playermove3(int x3,int y3)
{
gotoxy(x3+1,y3);
  cout << " ";
gotoxy(x3,y3);
cout << "P";
Sleep(500);
}
void playermove4(int x4,int y4)
{
 gotoxy(x4,y4+1);
 cout << " ";
 gotoxy(x4,y4);
 cout << "P";
 Sleep(500);
}