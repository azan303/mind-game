#include <iostream>
using namespace std;

int main(){
   int how_many_time;
   cout<<"how many student names and roll number you what to enter:";
 cin>>how_many_time;
string student_name[how_many_time];
 string student_roll[how_many_time];
for(int i=0;i<how_many_time;i++){
cout <<"enter the name of your student: ";
cin>>student_name[i];
 }
 for(int j=0;j<how_many_time;j++){
     cout <<"enter the roll number of your student: ";
cin>>student_roll[j];
     
 }
 for(int i=0;i<how_many_time;i++){
cout <<" name of your student: ";
cout<<student_name[i]<<endl;
     
 }
 
 for(int j=0;j<how_many_time;j++){
     cout <<" roll number of your student: ";
cout<<student_roll[j]<<endl;
     
 }
 
 
    return 0;
}
