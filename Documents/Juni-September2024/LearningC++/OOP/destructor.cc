#include <iostream>
using namespace std;

/*A DESTRUCTOR DESTROYS AN INSTANCE WHEN OBJECT GOES OUTSIDE OF SCOPE.*/
/*Destructor is valid even without dynamic memory allocation.*/
class CONTOH{
    int* X = new int; //it must be like this.
    public:
    CONTOH();
    ~CONTOH(); //THIS IS A DESTRUCTOR which dealocates it once it goes out of scope. Consider a function in which the object is used. 
    //When the compiler exists the function, it is OUT OF SCOPE. DESTRUCTOR WILL EDSTROY THE INSTANCE.
};