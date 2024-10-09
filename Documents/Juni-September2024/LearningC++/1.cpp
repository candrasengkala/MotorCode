#include <iostream>
//iostream is a library. #INCLUDE does not include "unpacking" of libraries. Instead, #Include states the libraries that are going to be used on the program


int main(){
    std::cout << "Hello World! \n"; //std specifies that the name cout is to be found in the standard-library namespace. Should I hink of std as a placeholder for iostream? Is that how it works?
    //another form without using namespace std; --> std::cout << "Hellow World! \n"
    //Writing std could be prevented by simply "unpacking" the libraries first. TO DO THAT, write "using namespace std" below "#include <iostream>"
    //by writing "using namespace std" below #include <iostream>, one simply made every code on iostream visible to the program. This does possess the risk of conflict. DON'T do that, please.
}
//A NOTE REGARDING MAIN FUNCTION
/*Main is a function that takes no argument and does nothing! In that sense, the only main function works as a global function as the program starts by evaluating main function.
When program is started, the main function is the first function to be run by the computer after agter being turned to executable. In C++, every function return something. In this case, the main
function returns 0 if compilation succeeded and a non-zero value if the compilation failed. 
*/