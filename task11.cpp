#include<iostream>
using namespace std;
void challan(int x);
main()
{
 int x;
 cout << "Enter the speed of car in km/h: ";
 cin >> x;
 challan(x);
}
void challan(int x){
if(x<=100){
cout << "Perfect!You are going good"; 
}
if(x>100){
cout << "Halt...You will be challenged";
}
}