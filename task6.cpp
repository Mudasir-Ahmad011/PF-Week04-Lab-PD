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
 if(x<15){
 x++;
  }
 if(x==15){
 gotoxy(x-1,y);
 cout << "                     ";
 gotoxy(x-1,y+1);
 cout << "                     ";
 gotoxy(x-1,y+2);
 cout << "                     ";
 gotoxy(x-1,y+3);
 cout << "                     ";
 gotoxy(x-1,y+4);
 cout << "                     ";
 gotoxy(x-1,y+5);
 cout << "                     ";
 gotoxy(x-1,y+6);
 cout << "                     ";
 gotoxy(x-1,y+7);
 cout << "                     ";
 gotoxy(x-1,y+8);
 cout << "                     ";
 gotoxy(x-1,y+9);
 cout << "                     ";
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
cout << "#                                      #"<<endl;
cout << "#                                      #"<<endl;
cout << "#                                      #"<<endl;
cout << "#                                      #"<<endl;
cout << "#                                      #"<<endl;
cout << "########################################"<<endl;
}
void playermove(int x,int y){
gotoxy(x-1,y);
cout << " ";
gotoxy(x,y);
cout << "      .::---::.      " << endl;
gotoxy(x-1,y+1);
cout << " ";
gotoxy(x,y+1);
cout << "   .-------------.    " << endl;
gotoxy(x-1,y+2);
cout << " ";
gotoxy(x,y+2);
cout << " .-----------------.  " << endl;
gotoxy(x-1,y+3);
cout << " ";
gotoxy(x,y+3);
cout << " ---------------:.    " << endl;
gotoxy(x-1,y+4);
cout << " ";
gotoxy(x,y+4);
cout << ":-----------::.       " << endl;
gotoxy(x-1,y+5);
cout << " ";
gotoxy(x,y+5);
cout << "-----------:.         " << endl;
gotoxy(x-1,y+6);
cout << " ";
gotoxy(x,y+6);
cout << ":-------------:..     " << endl;
gotoxy(x-1,y+7);
cout << " ";
gotoxy(x,y+7);
cout << " :----------------:.  " << endl;
gotoxy(x-1,y+8);
cout << " ";
gotoxy(x,y+8);
cout << "  .---------------:   " << endl;
gotoxy(x-1,y+9);
cout << " ";
gotoxy(x,y+9);
cout << "    .:---------:.     " << endl;
Sleep(500);
}