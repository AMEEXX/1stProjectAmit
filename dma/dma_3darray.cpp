#include<iostream>
using namespace std;
int main(){
    int ***ptr = new int**[6];
    for(int i = 0 ; i < 6 ; i++){
        ptr[i] = new int *[5];
        for(int j =0; j<5; j++) {
            ptr[i][j] = new int[4];
        }
    }
    for(int i = 0 ; i<6; i++){
        for(int j = 0 ; j<5; j++){
            delete[] ptr[i][j];
        }delete[] ptr[i];
    }
    delete[] ptr;

}