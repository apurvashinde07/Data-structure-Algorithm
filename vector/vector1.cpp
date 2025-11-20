//single number
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int unique = 0;
    vector<int>num = { 1, 2, 1, 4, 2};
    
    for(int val : num){
        unique ^= val;
    }
    cout<<"unique element is : "<<unique<<endl;
    return 0;
}