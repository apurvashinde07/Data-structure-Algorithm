// there are two type of scope 
// 1. Local scope
// 2. Global scope


//Local scope
#include<iostream>
using namespace std;

int main(){
    if (5>0)
    {
    int i=5;
    cout<<i<<endl;  
    }

    // cout<<i<<endl;  //i have local scope
    
    return 0;
}


#include<iostream>
using namespace std;

int main(){
    for (int i = 0; i < 10; i++)
    {
      cout<<i<<endl;  
    }
    // cout<<i<<endl;
    return 0;
}


//Global scope
#include<iostream>
using namespace std;
int a=34;    ///Global scope
int main(){
    cout<<a<<endl;
    return 0;
}

#include<iostream>
using namespace std;

int x=12;    ///Global scope
int fun(){
    cout<<x<<endl;
}
int main(){
    fun();
    cout<<x<<endl;
    return 0;
}