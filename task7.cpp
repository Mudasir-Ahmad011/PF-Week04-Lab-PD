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
 int x = 12;
 int y = 8;
while(true){
 playermove(x,y);
 if(y>4){
  y--;
  }
 if(y==4){
 gotoxy(x,y-1);
 cout << "                     ";
 gotoxy(x,y+1);
 cout << "                     ";
 gotoxy(x,y+2);
 cout << "                     ";
 y=8;
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
cout << "##################################################"<<endl;
cout << "#                                                #"<<endl;
cout << "#                                                #"<<endl;
cout << "#                                                #"<<endl;
cout << "#                                                #"<<endl;
cout << "#                                                #"<<endl;
cout << "#                                                #"<<endl;
cout << "#                                                #"<<endl;
cout << "#                                                #"<<endl;
cout << "#                                                #"<<endl;
cout << "#                                                #"<<endl;
cout << "#                                                #"<<endl;
cout << "#                                                #"<<endl;
cout << "#                                                #"<<endl;
cout << "#                                                #"<<endl;
cout << "#                                                #"<<endl;
cout << "#                                                #"<<endl;
cout << "#                                                #"<<endl;
cout << "#                                                #"<<endl;
cout << "#                                                #"<<endl;
cout << "#                                                #"<<endl;
cout << "#                                                #"<<endl;
cout << "##################################################"<<endl;
}
void playermove(int x,int y){
gotoxy(x,y-1);
cout << "                     ";
gotoxy(x,y);
cout << "      .::---::.      " << endl;
gotoxy(x,y+1);
cout << "   .-------------.   " << endl;
gotoxy(x,y+2);
cout << " .-----------------. " << endl;
gotoxy(x,y+3);
cout << " ---------------:.   " << endl;
gotoxy(x,y+4);
cout << ":-----------::.      " << endl;
gotoxy(x,y+5);
cout << "-----------:.        " << endl;
gotoxy(x,y+6);
cout << ":-------------:..    " << endl;
gotoxy(x,y+7);
cout << " :----------------:. " << endl;
gotoxy(x,y+8);
cout << "  .---------------:  " << endl;
gotoxy(x,y+9);
cout << "    .:---------:.    " << endl;
gotoxy(x,y+10);
 cout << "                     "; 
gotoxy(x,y+11);
 cout << "                     ";
Sleep(500);
}