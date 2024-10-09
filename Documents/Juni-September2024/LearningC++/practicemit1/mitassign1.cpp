#include<iostream>

void f(const int a = 5){
   std::cout << a*2 << "\n";
 }
 int a = 123;
 int main(){
    f(1); //dia tetap mencetak 2. bukan 10. Kenapa?
    /*
    
    */
    f(a);
    int b = 3;
    f(b);
    int a = 4;
    f(a);
    f();
 }