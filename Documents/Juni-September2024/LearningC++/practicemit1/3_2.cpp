//solution 1
/*This solution involves adding the missing parameter from 
the function.*/
#include<iostream>

using namespace std;

/*void printNum(int number){
    std::cout << number;
}

int main(){
    int number = 35;
    printNum(number);
    return 0;
}

/*
//solution 2
/*This solution involves changing number into a global variable */
void printNum(){
    std::cout << number;
}

int number = 35;
int main(){
    printNum();
    return 0;
}

//Solution one is preferable due to its adaptability to I/O.