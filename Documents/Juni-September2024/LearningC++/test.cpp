#include <iostream>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int s1;
    int s2;
    int s3;
    cin >> s1 >> s2 >> s3; //input is going to be space separated 1 2 3.
    cout << s1 + s2 + s3 << '\n';//sum will be returned.
    return 0; //return 0 must be placed on HERE. Otherwise the code will not compile. Remember that 0 indicates a finish. If it's placed on top, it'll finish before it starts.
}