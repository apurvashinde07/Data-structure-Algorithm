#include<iostream>
using namespace std;

int main(){
    cout<<"apurva "<<"shinde"<<endl;
    return 0;
}


//ASCII VSLUE 
// A=65,B=66.....Z=90
// a=97 ,b=98....z=122

#include<iostream>
using namespace std;

int main(){
    int grade= 'Y';
    char value = grade;

    cout<<grade<<value<<endl;
    float value=100.99;
    int newvalue = value;
    cout<<newvalue<<endl;
    int a=5; float b=2;
    cout<<a/b<<endl;
    return 0;
}

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter number: "<<endl;
    cin>>n;
    //ternary statment
    cout<<(n>=0?"positive":"negative")<<endl;
    return 0;
}

#include<iostream>
using namespace std;

int main(){
    int n , i;
    bool isprime=true;
    cout<<"enter n: "<<endl;
    cin>>n;
    for(i=2; i*i<=n; i++){ //I<=n-1
        if (n%2==0)
        {
            isprime=false;
            break;
        }
        
    }
    if(isprime==true){
        cout<<"prime number: "<<endl;
    }else{
        cout<<"non prime number: "<<endl;
    }
    return 0;
}

#include<iostream>
using namespace std;

int main(){
    int m;
    int n;
        cout<<"enter n: ";
        cin>>n;
        cout<<"enter m: ";
        cin>>m;
    for (int i = 1; i <=n; i++)
    {
        for (int i = 1; i <=m; i++)
        {
            cout<<"*";
        }
        cout<<endl;   
    }
    return 0;
}

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    int sum=0;
    for (int i = 1; i <=n; i++)
    {
        if (i%3==0)
        {
            sum+=i;
        }
        
    }
    cout<<"sum is: "<<sum<<endl;
    
    return 0;
}

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    int fact=1;
    for (int i = 1; i <=n; i++)
    {
        fact=fact*i;
    }
    cout<<"factorial is: "<<fact<<endl;
    
    return 0;
}