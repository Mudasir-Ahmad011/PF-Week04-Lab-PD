#include<iostream>
using namespace std;
void flowers(int x,int y,int z);
main(){
int red_rose,white_rose,tulips;
cout << "Enter number of red rose: ";
cin >> red_rose;
cout << "Enter number of white rose: ";
cin >> white_rose;
cout << "Enter number of tulips: ";
cin >> tulips;
flowers(red_rose,white_rose,tulips);
}
void flowers(int x,int y,int z){
float red_eachprice,white_eachprice,tulips_eachprice,red_price,white_price,tulips_price,total_price,discount,after_discount;

red_eachprice=2.00;
white_eachprice=4.10;
tulips_eachprice=2.50;
red_price  = x*red_eachprice;
white_price = y*white_eachprice;
tulips_price = z*tulips_eachprice;
total_price = red_price+white_price+tulips_price;
if(total_price>200){
discount = (total_price * 20)/100.0;
after_discount = total_price - discount;
cout << "Original price: "<<total_price<<endl;
cout << "Price after discount: "<<after_discount;
}
if(total_price<200){
cout << "Original price: "<<total_price;
}
}