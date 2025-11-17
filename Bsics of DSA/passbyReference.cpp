#include<iostream>
using namespace std;
void changearr(int arr[], int size){
    cout<<"In functon"<<endl;
    for (int i = 0; i < size; i++)
    {
        arr[i] = 3 * arr[i];
    }
    
}
int main(){
    int arr[] = {2, 4, 6};

    changearr(arr , 3);

    cout<<"In main function"<<endl;
    for (int i = 0; i < 3; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}