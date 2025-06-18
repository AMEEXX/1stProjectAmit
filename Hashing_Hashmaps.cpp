#include <iostream>
using namespace std;
#include <map>

int main()
{
    

    // fetch data
    int n ;
    cout<<"Enter the no of terms in array"<<endl;
    cin>>n;
    int arr[n];
    map<int,int> mpp;
    for(int i = 0 ;i<n ;i++){
        cout<<"Enter the elments of the array : "<<endl;
        cin>>arr[i];
        mpp[arr[i]]++;
    }
    int m;
    cout<<"ENter the no of constanct iof check : "<<endl;
    cin>>m;
    for( int j = 0;j<m;j++){
        int nm;
        cin>>nm;
        cout <<"ENter constant to check"<<endl;
        cout<<mpp[nm]<<endl;
    }


    return 0;
}
