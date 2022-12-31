#include<iostream>
using namespace std;
void printMenu();
void calculateAggregate(string name,int matricMarks,int interMarks,int ecatMarks);
void compareMarks(string nameStd1,int ecatMarksStd1,string nameStd2,int ecatMarksStd2);
main(){
string nameStd1,nameStd2;
int num,matricMarksStd1,interMarksStd1,matricMarksStd2,interMarksStd2,ecatMarksStd1,ecatMarksStd2;
string exit;
while(true){
system("cls");
printMenu();
cout << "Enter Choice: ";
cin >> num;
if(num == 1){
 system("cls");
 cout << "Enter your name: ";
 cin >> nameStd1;
 cout << "Enter your matricMarks(out of 1100): ";
 cin >> matricMarksStd1;
 cout << "Enter your interMarks(out of 550): ";
 cin >> interMarksStd1;
 cout << "Enter your ecatMarks(out of 400): ";
 cin >> ecatMarksStd1;
 cout << "Press any key to continue....";
 cin >> exit;
 }
if(num == 2){
 system("cls");
 cout << "Enter your name: ";
 cin >> nameStd2;
 cout << "Enter your matricMarks(out of 1100): ";
 cin >> matricMarksStd2;
 cout << "Enter your interMarks(out of 550): ";
 cin >> interMarksStd2;
 cout << "Enter your ecatMarks(out of 400): ";
 cin >> ecatMarksStd2;
 cout << "Press any key to continue....";
 cin >> exit;
 }
if(num == 3){
 system("cls");
 calculateAggregate(nameStd1,matricMarksStd1,interMarksStd1,ecatMarksStd1);
 cout << "Press any key to continue....";
 cin >> exit;
 }
if(num == 4){
 system("cls");
 calculateAggregate(nameStd2,matricMarksStd2,interMarksStd2,ecatMarksStd2);
 cout << "Press any key to continue....";
 cin >> exit;
}
if(num == 5){
system("cls");
 compareMarks(nameStd1,ecatMarksStd1,nameStd2,ecatMarksStd2);
 cout << "Press any key to continue....";
 cin >> exit;
}
}
}
void printMenu(){
cout << "##############################################################################"<<endl;
cout << "#   U     U  E E E  TTTTTTTT  LL          A     H   H   OOO  RR RR    E E E  #"<<endl;
cout << "#   U     U  E         TT     LL         A A    H   H  O   O RR    R  E      #"<<endl;
cout << "#   U     U  E E E     TT     LL        AA AA   HHHHH  O   O RR  RR   E E E  #"<<endl;
cout << "#   U     U  E         TT     LL       AA   AA  H   H  O   O RR R     E      #"<<endl;
cout << "#     U U    E E E     TT     LLlllll AA     AA H   H   OOO  RR   RR  E E E  #"<<endl;
cout << "##############################################################################"<<endl;
cout << endl<<endl<<endl; 
cout <<"Welcome to UET Admission Management System"<<endl;
cout << endl<<endl;
cout <<"Press 1 to Enter Details of First Student"<<endl;
cout <<"Press 2 to Enter Details of Second Student"<<endl;
cout <<"Press 3 to calculate aggregate of first student"<<endl;
cout <<"Press 4 to calculate aggregate of second student"<<endl;
cout <<"Press 5 to display the student with RollNumber 01 having maximum ecat marks"<<endl;
}
void calculateAggregate(string name,int matricMarks,int interMarks,int ecatMarks){
float aggregate;
aggregate = (matricMarks * 30)/1100.0 + (interMarks * 30)/550.0 + (ecatMarks * 40)/400.0;
cout << name << " your aggregate is "<< aggregate;
cout<<endl;
}
void compareMarks(string nameStd1,int ecatMarksStd1,string nameStd2,int ecatMarksStd2){
if(ecatMarksStd1 > ecatMarksStd2){
 cout << "The roll number 01 name is "<<nameStd1;
 }
if(ecatMarksStd2 > ecatMarksStd1){
cout << "The roll number 01 name is "<<nameStd2;
 }
 cout << endl;
}
