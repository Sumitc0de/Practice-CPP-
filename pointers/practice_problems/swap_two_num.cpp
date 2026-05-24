#include <iostream>
using namespace std;

int swap(int *a, int *b){
    int *c;
    *c = *a;
    *a = *b;
    *b = *c;
}


int main(){
    int a = 10, b = 20;

    swap(&a, &b);

    cout << a <<endl << b;


    return 0;
}