#include<iostream>
#include<vector>
using namespace std;

int main(){
    // vector<int>vec={1, 3, 4, 5};
    // cout<< vec[0]<<endl;
    // cout<<vec[2]<<endl;

    // //for each loop
    // //point value of vector not index
    // for(int val : vec){
    //     cout<<val<<endl;
    // }
    
    //vector function
    //1. size
    //cout<<"size: "<<vec.size()<<endl;


    // vector<int>vec;
    // cout<<"size: "<<vec.size()<<endl;

    // //2. push_back : add elemant at the last
    // vec.push_back(43);
    // vec.push_back(23);
    // vec.push_back(56);
    // cout<<"after push back size: "<<vec.size()<<endl;
     
    // //3. pop_back : delete the last element 
    // vec.pop_back();
    // for (int i : vec)
    // {
    //     cout<<i<<endl;
    // }
    
    // //4. front() : print the starting value
    // cout<<"front: "<<vec.front()<<endl;

    // //5. back() : return last value
    // cout<<"back: "<<vec.back()<<endl;

    // //6. at(): return index value
    // cout<<vec.at(1);

    vector<int>vec;
    vec.push_back(45);
    vec.push_back(56);
    vec.push_back(24);
    vec.push_back(24);
    vec.push_back(26);

    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;
    
    return 0;
}