#include <iostream>
using namespace std;


void sum(int a[], int alen);
int sum2(int a[], int alen);

int main(){
    int a[4] = {12, 3, 1, 2}; //DO NOT FORGET THE SYNTAX. THIS IS NOT PYTHON.
    sum(a, 4);
    int b = sum2(a, 4);
    cout << b << '\n';
}
void sum(int a[], int alen){
    for (int i=1; i<alen; i++){
        a[0] = a[0] + a[i];
    }
}
//solusi lainnya, supaya tidak menggunakan loop melainkan rekursi adalah dengan menggunakan pointer kepada array.

int sum2(int a[], int alen) {
    if (alen == 0) {
        return 0; // Base case: when length is zero, return 0
    } else {
        return *a + sum2(a + 1, alen - 1); // Recursive case: sum the current element with the sum of the rest
    }
} /*Dive down more on this. I don't know why isn't this working.*/

