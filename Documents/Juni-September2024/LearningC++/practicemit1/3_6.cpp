#include<iostream>
const int ARRAY_LEN = 10;

int main(){
    int arr[ARRAY_LEN] = {10};
    int *xPtr = arr, *yPtr = arr + ARRAY_LEN - 1; //INI SAMA SEPERTI int a, b; namun a dan b diisi di sini.
    std::cout << *xPtr << ' '<< *yPtr;
    return 0;
}