int inch; //avoid declaring a variable that has not yet been confirmed its value. If you do not know the datatype, just write auto
auto pusat = 123; //auto will take care of the datatype = is used because there is no type conversion involved.
//auto abc = fungsi(y); //Type auto bergantung kepada nilai yang dikembalikan oleh abc. 
// "<" means put to and ">" means get from. I/O in C++ works as follows

#include <iostream>
using namespace std;

bool accept(){ //a funtion is defined by stating its returned value. accept returns boolean and thus it is defined as a such. bool accept()
    cout << "Do you want to proceed (y or n)?\n"; //input value is stored on cout.
    char answer; //char is defined 
    cin >> answer; //get from cin. put it on answer
    if (answer == 'y') return true;
    return false;
}
int main(){
    accept(); //functions must be defined above main. Unlike python whose main function is called at the end of everything.
}