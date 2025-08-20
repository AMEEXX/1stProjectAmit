#include<iostream>
using namespace std;

int main(){
    int **ptr = new int* [5];
    for(int i = 0 ; i < 4; i++){
        ptr[i] = new int[5];

    }
    for(int i= 0; i<4; i++){
        delete[] ptr[i];
    }
    delete[] ptr;
}