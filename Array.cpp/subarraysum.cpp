#include<iostream>
using namespace std;
//brute Force Approach
int main(){
    int n = 7;
    int arr[7]={3, -4, 5, 4, -1, 7, -8};
    int maxsum = INT8_MIN;

    for(int st=0; st<n; st++){
        int currsum = 0;
        for(int end=st; end<n; end++){
            currsum += arr[end];
            maxsum = max(currsum, maxsum);
        }
    }

    cout<<"max subarray sum : "<<maxsum<<endl;

    return 0;
}