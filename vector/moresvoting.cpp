#include<iostream>
#include<vector>
using namespace std;
int mj(vector<int> nums){
    int n = nums.size();
    int freq = 1;
    int ans = 1;

    for(int i=0; i<n; i++){
        if(freq == 0){
            ans = nums[i];
        }
        if(ans == nums[i]){
            freq++;
        }else{
            freq--;
        }
    }
    return ans;
}
int main(){
    vector<int> nums = {1, 2, 2, 1, 1, 1};

    int ans = mj(nums);

    cout << "largest freq element: " << ans;
    return 0;
}