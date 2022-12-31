#include<iostream>
using namespace std;
void pakistan(string n,int m);
void ireland(string n,int m);
void india(string n,int m);
void england(string n,int m);
void canada(string n,int m);
main()
{
string country;
int ticketprice;
cout << "Enter Country Name: ";
cin >> country;
cout << "Enter Ticket price in dollars: ";
cin >> ticketprice;
pakistan(country,ticketprice);
ireland(country,ticketprice);
india(country,ticketprice);
england(country,ticketprice);
canada(country,ticketprice);
}
void pakistan(string n,int m){
float discount,after_discount;
if(n == "pakistan"){
discount = (m * 5)/100.0;
after_discount = m - discount;
cout << "Ticket price after discount: "<< after_discount;
 }
}
void ireland(string n,int m){
float discount,after_discount;
if(n == "ireland"){
discount = (m * 10)/100.0;
after_discount = m - discount;
cout << "Ticket price after discount: "<< after_discount;
 }
}
void india(string n,int m){
float discount,after_discount;
if(n == "india"){
discount = (m * 20)/100.0;
after_discount = m - discount;
cout << "Ticket price after discount: "<< after_discount;
 }
}
void england(string n,int m){
float discount,after_discount;
if(n == "england"){
discount = (m * 30)/100.0;
after_discount = m - discount;
cout << "Ticket price after discount: "<< after_discount;
 }
}
void canada(string n,int m){
float discount,after_discount;
if(n == "canada"){
discount = (m * 45)/100.0;
after_discount = m - discount;
cout << "Ticket price after discount: "<< after_discount;
 }
}
