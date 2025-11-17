#include<iostream>
using namespace std;
int fun(){
    cout<<"hello"<<endl;
    return 2;
}
int main(){
    int v = fun();
    cout<< v <<endl;

    
    return 0;
}


//Parameters

#include<iostream>
using namespace std;
int add(int a, int b){
    int sum=a+b;
    return sum;
}
int main(){
    int sum =add(10, 2);
    cout<< "The sum is: "<<sum<<endl;
    
    return 0;
}


#include<iostream>
using namespace std;
int minimum(int a, int b){ //Parameter: copy of the arguments
    if (a<b)
    {
        return a;
    }else{
        return b;
    }
}
int main(){
    cout<<"min: "<<minimum(6, 4)<<endl;  //arguments: actual values of pass to the function
    
    return 0;
}


//Caculate the sum of 1 to n number
#include<iostream>
using namespace std;
int sumOfnumber(int n){
    int sum=0;
    for (int i = 1; i<=n; i++)
    {
        sum+=i;
    }
    return sum;
}
int main(){
    cout<<"sum is: "<<sumOfnumber(5)<<endl;
    cout<<"sum is: "<<sumOfnumber(10)<<endl;
    cout<<"sum is: "<<sumOfnumber(15)<<endl;
    return 0;
}


#include<iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    for (int  i = 1; i<=n; i++)
    {
        fact*=i;
    }
    return fact;
}
int main(){
    cout<<"factorial is: "<<factorial(3)<<endl;
    
    return 0;
}


//pass by value
#include<iostream>
using namespace std;
int change(int x){
    x=2*x;
    cout<<"x: "<<x<<endl;

}
int main(){
    int x=4;
    change(x);
    cout<<"x: "<<x<<endl;
    return 0;
}

//calculate sum of digit of anumber
#include<iostream>
using namespace std;
int sumOfDigit(int num){
    int sum = 0;
    while (num>0)
    {
        int lastdigit = num % 10;
        sum += lastdigit;
        num/=10;
    }
    return sum;
}

int main(){
    cout<<"sum is: "<<sumOfDigit(435)<<endl;
    return 0;
}


//calculate nCr binomial coefficient for n and r
#include<iostream>
using namespace std;
int factorial(int n){
    int fact = 1;
    
    for (int i = 1; i<=n; i++)
    {
        fact*=i;
    }
    return fact;  
}

int nCr(int n, int r){
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nr = factorial(n-r);

    return fact_n/(fact_r * fact_nr);

}
int main(){
    int n = 8, r = 2;
    cout<<"factorial is: "<<nCr(n, r)<<endl;
    return 0;
}