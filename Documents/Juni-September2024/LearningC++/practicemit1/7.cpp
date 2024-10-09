#include<iostream>
using namespace std;
int strlen (char* str){ 
    int len = 0;
    while (*p != '\0'){
        len++;
        p++;
    }
    return len;
}
int main(){
    char* tst= "abcded";
    int length = strlen(tst);
    cout << length;
}