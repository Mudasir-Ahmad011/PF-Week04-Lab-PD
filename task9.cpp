#include<iostream>
using namespace std;
void converter(string n);
main()
{
string n;
cout << "Enter value in false or true: ";
cin >> n;
converter(n);
}
void converter(string n){
if (n == "true"){
cout << "False";
}
if(n == "false"){
cout << "True";
}
}