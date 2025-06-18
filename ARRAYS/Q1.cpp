#include <iostream>
using namespace std;
int largest_element(int arr[], int n){
    
    int largest = arr[0];
    for (int i = 0 ; i < n ; i++){
        if (largest < arr[i]){
            largest = arr[i];
        }
    }
    return largest ;
}
int main(){
    int n;
    cout<<"Input the no of terms in arary\n";
    cin >> n;
    int arr[n];
    for(int m =0 ; m<n ; m++){
        cin >> arr[m];
    }
    
    
    int largest = largest_element(arr,n);
    cout << "The largest element is : "<<largest;
    return 0;
}
