#include <iostream>
#include <string>
#include <time.h>
#include <cstdlib>

using namespace std;



int main() 
{


// int max is is use  for maximizing its limit


int max=20,your,answer=2,answer2;/*this line is used for assigning values*/

string enter;//this line is used for assigning values

srand(time(0)); //this give new seed to make random number every time

cout<<"\t\t\t\t\t\t\t\t\t\t{---(welcome to the mind game)---}\n\n";    
cout<<"{----Think about a number in your mind dont tell me.. OK----}  \n\n";
cout<<"{---Done...! press enter---} ";

getline(cin,enter),cout<<endl;//cin is use to move the program forward



cout<<"\t\t\t\t\t\t\t\t{----borrow a similar number and add it in total----}\n\n";

cout <<"\t\t\t\t{---Done than press enter---}";

getline(cin,enter),cout<<endl;



your = (rand() % (max / 2)) * 2 + 2;


cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t{----Now add "<<your<<" in yourtotal----}\n\n";


cout <<"\t\t\t\t{---We are near to end so press enter---}";

getline(cin,enter),cout<<endl;

cout<<"\t\t\t\t\t\t\t\t{----donation is good so donate half from total----}\n\n";


cout <<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t{---you know what to do (ha ha) press enter---}\n";

getline(cin,enter);

cout<<"\t\t\t\t{----borrowing is not good so give it back----}\n\n";

cout <<"\t\t\t\t\t\t{---your are a nice persion did i tell  you this end so press enter---}\n\n\n\n";

getline(cin,enter),cout<<endl;

answer2=your/answer;// this is 

cout<<"\t\t\t\t\t\t\t\t\t\t{----(is that "<<answer2<<" is your answer)----}\n";
cout<<" \t\t\t\t\t\t\t\t\t\t\t\t\t\tTHE END ";
return 0;   


}