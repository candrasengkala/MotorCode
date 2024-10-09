#include<iostream>
using namespace std;
/*Ah, pointers....
One of many C++ myths, that's for sure. Here, I'm going to debunk it for a bit.

Adonai, Elohim, YHWH! The Jews don't say His name directly as it is sacred in their religion and it shall not be said in vain. Therefore, they use other 
words to refer to God; Adonai or Elohim. Standing by itself, Adonai might be translated as Lord and Elohim as God. According to Judaism, YHWH is His name which
might only be said on certain days, by certain people, on The Temple.

Adonai refers to Elohim, and Elohim to YHWH. This is multiple indirection.

We can see that Adonai and Elohim function as pointers. In the sense that it is something (here, a word) that points to another thing. In C++, a pointer
points to a data address of a certain variable. By this, we can change the contents of the memory of that address _directly_!. This is going to be useful knowing
the difference between pass-by-value and pass-by-reference in C++.

Consider this variable:
*/
int X = 0;
/*
We may create its pointer by first defining a pointer variable.
*/
int* P = &X; //this creates pointer P. //somehow, it must be declared this way. 
 //this will contain the memory address of X.;

//To access the value of x (and P), we can use dereference function.
int X2 = *P;


const int X3 = 4;
const int* P2 = &X3;

const int** P3 = &P2; //this is a pointer that points to another pointer. *P3 will result in P2 adress. Thus, **P3 will results on X3. 

/*
Maka, 
P = &X (bintang bukan bagian dari nama) menyimpan alamat.
sementara,
*P=X (menyimpan nilai.)
*/
/*
Pointers should be used only when initiated, even though it is possible to assign NULL to the pointer.
*/


int main(){
    cout << P << '\n'; //this will print the address
    cout << X << '\n'; //this will print X
    cout << *P << '\n'; //this will print the content of said address.
    //here, we'll change the value of *P
    *P = 2;
    cout << *P << '\n'; //changing the dereferenced value will change the variable assigned value.
    cout << X << '\n';
    cout << X3 << '\n';
    cout << P2 << '\n';
    //*P2 = 4; //THIS IS GOING TO RESULT IN ERROR. WE HAVE DECLARED IT AS CONSTANT.
    return 0;
    //bila dirujuk variabel konstan, maka pointernya juga konstan. 
}