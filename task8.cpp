#include<iostream>
using namespace std;
void checker(int x,int y);
main()
{
 int x,y;
 cout << "Enter First Number: ";
 cin >> x;
 cout << "Enter second Number: ";
 cin >> y;
 checker(x,y);

}
void checker(int x,int y){
if(x == y){
 cout << "True";
}
if(x != y){
cout << "False";
}
}
