#include <iostream>
#include <vector>
#include <algorithm>
// etc.

using namespace std;

int upperBound(vector<int> &arr, int x, int n) {
    int low = -0;int high = n-1;
    int mid = low +(high-low)/2;
    while (high>=low){
        if(arr[mid]>=x) {
            high = mid-1;
            int ans = mid;
        }
        else low = mid+1;
    }
}

int main()
{
    vector<int> arr = {3, 5, 8, 9, 15, 19};
    int n = 6, x = 9;
    int ind = upperBound(arr, x, n);
    cout << "The upper bound is the index: " << ind << "\n";
    return 0;
}

