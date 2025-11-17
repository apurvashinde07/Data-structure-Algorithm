#include<iostream>
using namespace std;
int decTobinary(int decimal){
    int ans=0, power=1;

    while (decimal>0){
        int reminder = decimal % 2;
        decimal/=2;
        ans += (reminder*power);
        power *= 10;

    }
    {
        return ans;
    }
    
}
int main(){
    int decimal = 15;
    cout<<decTobinary(decimal);
    return 0;
}


#include<iostream>
using namespace std;
int decTobinary(int decimal){
    int ans=0, power=1;

    while (decimal>0){
        int reminder = decimal % 2;
        decimal/=2;
        ans += (reminder*power);
        power *= 10;

    }
    {
        return ans;
    }
    
}
int main(){
    int decimal = 15;

    for (int i = 1; i<=10; i++)
    {
        cout<<decTobinary(i)<<endl;
    }
    return 0;
}


#include<iostream>
using namespace std;
int binaryTodec(int binary){
    int ans=0, power=1;

    while (binary>0)
    {
        int reminder = binary % 10;
        ans = reminder * power;
        binary /= 10;
        power *= 2;
    }
    return ans;
}
int main(){
    int binary= 1101001;
    cout<<binaryTodec(binary)<<endl;
    return 0;
}