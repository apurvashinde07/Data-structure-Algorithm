#include<iostream>
#include<vector>
using namespace std;

int majorityFrequency(vector<int> nums)
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

        // Check if it is majority
        if(freq > n/2){
            return freq;   // return ONLY frequency
        }
    }

    return 0;   // if no majority element
}

int main()
{
    vector<int> nums = {1, 2, 2, 1, 1, 1};

    int freq = majorityFrequency(nums);

    cout << "Frequency: " << freq;

    return 0;
}




#include<iostream>
#include<vector>
using namespace std;

vector<int> MJelement(vector<int> nums)
{
    int n = nums.size();
    int freq;

    for(int x : nums){
        freq = 0;
        for(int a : nums){
            if(a == x){
                freq++;
            }
        }
        if(freq > n/2){
            return {x};   // return vector with majority element
        }
    }

    return {};  // return empty vector if no majority
}

int main()
{
    vector<int> nums = {1, 2, 2, 1, 1, 1};

    vector<int> val = MJelement(nums);

    if(val.empty()){
        cout << "No majority element";
    } else {
        cout << "Majority element: " << val[0];
    }

    return 0;
}

