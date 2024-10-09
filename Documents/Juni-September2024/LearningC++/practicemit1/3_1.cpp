#include <iostream>

using namespace std;
/*
int main(){
    printNum(35);
    return 0;
}
void printNum(int number){
    cout << number;
}

This function is fixed by simply moving the function's definition and declaration
above main function.
*/
//solution 1

/*
void printNum(int number){
    cout << number;
}
int main(){
    printNum(35);
    return 0;
}
*/
/*
We can also fix the function by moving the function's declaration prior to main. This
function is going to be defined later (after main).
*/
//solution 2

void printNum(int number); //ini adalah prototipe dari sebuah fungsi.bb

int main(){
    printNum(35);
    return 0;
}

void printNum(int number){
    cout<<number;
}
/*

*/