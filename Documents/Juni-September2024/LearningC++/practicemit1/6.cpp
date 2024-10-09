#include <iostream>
using namespace std;
void printArray(const int a[]){
    auto i = 0;
    while (a[i] != '\0'){
        if (i >0){
            cout << ", ";
        }
        cout << a[i];
        i++;
    }
}

void reverse(int a[],  int length){
    int actuallength = length - 1;
    int i = 0;
    int middle = length / 2;
    int times;
    if (middle % 2 == 1){
        times = middle -1;
    } 
    else{
        times = middle;
    }
    while (i < times){
        int s1 = a[i];
        int s2 = a[actuallength-i];
        a[length-i] = s1;
        a[i] = s2;
        i++;
        printArray(a);
        cout << '\n';
    }
}

int main(){
    int a[10] = {1,2,34,5,67,8,9,10,11,12};
    reverse(a,10);
}