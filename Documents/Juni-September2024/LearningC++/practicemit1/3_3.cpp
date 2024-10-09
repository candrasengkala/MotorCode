/*
#include <iostream>
void doubleNumber(int num){
    num = num * 2;
}

int main(){
    int num = 35;
    doubleNumber(num);
    std::cout << num;
    return 0;
}
*/
//solution 1.
/*
The function is fixed by changing the parameter's type to pointers..
*/
#include <iostream>
void doubleNumber(int* num){
    *num = *num * 2;
}

int main(){
    int num = 35;
    doubleNumber(&num);
    std::cout << num;
    return 0;
}