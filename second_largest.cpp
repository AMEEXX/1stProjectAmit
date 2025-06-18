// #include <iostream>
// using namespace std ;

// int second_largest(int arr[], int n){
//     int ans;
//     int it =0 ;
//     int i =0;
    
//         for(int j=0; j< n;j++){
//             if (arr[i]<arr[j]){
//                 it ++;
//             }
//         }
//         if (it == 1){
//             ans = arr[i];
//         }
    
//     return ans;
// }

// int main(){
//     int n;
//     cout<<"Input the no of terms in arary\n";
//     cin >> n;
//     int arr[n];
//     for(int m =0 ; m<n ; m++){
//         cin >> arr[m];
//     }
//     int ans = second_largest(arr,n);
//     cout<<"The second largest element is :"<<ans;
//     return 0;

// }
#include <iostream>
using namespace std;
int largest_element(int arr[], int n){
    int secondlargest = 0;
    int largest = arr[0];
    for (int i = 0 ; i < n ; i++){
        if (largest < arr[i]){
            secondlargest = largest;
            largest = arr[i];

        }
        else if (arr[i] < largest && (secondlargest == -1 || arr[i] > secondlargest)) {
            secondlargest = arr[i];
        }
    }
    return secondlargest ;
}
int main(){
    int n;
    cout<<"Input the no of terms in arary\n";
    cin >> n;
    int arr[n];
    for(int m =0 ; m<n ; m++){
        cin >> arr[m];
    }
    
    
    int secondlargest = largest_element(arr,n);
    cout << "The largest element is : "<<secondlargest;
    return 0;
}
