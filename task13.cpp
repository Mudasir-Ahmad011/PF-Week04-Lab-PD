#include<iostream>
using namespace std;
void cat(int x);
main(){
int x;
cout << "Number of holidays: ";
cin >> x;
cat(x);
}
void cat(int x){
int working_days;
int game_time,difference_Innorm;
working_days = 365 - x;
game_time = (working_days * 63) + (x * 127);
difference_Innorm = 30000 - game_time;
cout << "Tom sleeps well "<<difference_Innorm<<" minutes less for play"; 

}