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
 int a = 3;
 int b = 3;
 playermove(a,b);
}
void printMaze()
{
cout << "########################################"<<endl;
cout << "#                                      #"<<endl;
cout << "#                                      #"<<endl;
cout << "#                                      #"<<endl;
cout << "#                                      #"<<endl;
cout << "#                                      #"<<endl;
cout << "#                                      #"<<endl;
cout << "#                                      #"<<endl;
cout << "#                                      #"<<endl;
cout << "#                                      #"<<endl;
cout << "#                                      #"<<endl;
cout << "########################################"<<endl;
}
void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void playermove(int x,int y)
{
 gotoxy(x-1,y);
 cout << " ";
 gotoxy(x,y);
 cout << "P";
 Sleep(500);
}