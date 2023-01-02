#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
void printMaze();
void playermove(int x,int y);
main()
{
 system("cls");
 printMaze();
 int x = 3;
 int y = 3;
while(true){
 playermove(x,y);
 if(x<20){
 x++;
  }
 if(x==20){
 gotoxy(x-1,y);
 cout << " ";
 x=3;
  } 
 }
}
void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void printMaze()
{
cout << "######################"<<endl;
cout << "#                    #"<<endl;
cout << "#                    #"<<endl;
cout << "#                    #"<<endl;
cout << "#                    #"<<endl;
cout << "#                    #"<<endl;
cout << "#                    #"<<endl;
cout << "#                    #"<<endl;
cout << "######################"<<endl;
}
void playermove(int x,int y){
gotoxy(x-1,y);
cout << " ";
cout << "P";
Sleep(500);
}