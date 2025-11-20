//maximum sum
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>nums = {4, -5, 6, 7, -2, 8};
    int currsum = 0, maxSum = INT8_MIN;

    for(int val : nums){
        currsum+=val;
        maxSum = max(currsum, maxSum);
        if(currsum < 0){
            currsum = 0;
        }
    }
    cout<<maxSum<<endl;
    return 0;
}