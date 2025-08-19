#include<iostream>
using namespace std;


int main(){
    
    char arr[5] = {'1','2','3','4','5'};
    char name = 'a';
    cout<<arr<<endl;
    char *ptr = &name;
    cout<<ptr<<endl;
    return 0;
}