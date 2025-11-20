#include<iostream>
#include<vector>
using namespace std;

pair<int,int> MJelement(vector<int> nums)
{
    int n = nums.size();

    for(int x : nums){
        int freq = 0;

        // Count frequency of x
        for(int a : nums){
            if(a == x){
                freq++;
            }
        }

        // Check majority condition
        if(freq > n/2){
            return {x, freq};   // return element + its frequency
        }
    }

    return {-1, 0};   // No majority element
}

int main()
{
    vector<int> nums = {1, 2, 2, 1, 1, 1};

    pair<int,int> result = MJelement(nums);

    if(result.second == 0){
        cout << "No majority element";
    } 
    else {
        cout << "Majority element: " << result.first 
             << ", Frequency: " << result.second;
    }

    return 0;
}
