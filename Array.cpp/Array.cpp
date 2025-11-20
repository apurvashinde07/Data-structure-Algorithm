// #include<iostream>
// using namespace std;

// int main(){
//     // int marks[5]={56, 67, 78, 89, 92};
// cout<<sizeof(marks)<<endl;

// int marks[5] = {34, 78, 23, 46, 79};

// cout<<sizeof(marks)<<endl;

// //accessing using index
// cout<<marks[0]<<endl;
// cout<<marks[2]<<endl;
// cout<<marks[3]<<endl;

// accessing using loop
//  int size = 5;
//  int marks[size];
//  for (int i = 0; i <=size; i++)
//  {
//      cin>>marks[i];
//  }

// for (int i = 0; i <= size; i++)
// {
//     cout<<marks[i]<<" ";
// }

// int nums[6] = {5, 7, 8, 3, 2, 6};
// int size = 6;

// int smallest = INT8_MAX;
// int largest = INT8_MIN;

// for (int i = 0; i < size; i++)
// {
//     // if (nums[i]<smallest)
//     // {
//     //     smallest=nums[i];
//     smallest = min(nums[i], smallest);
//     largest = min(nums[i], largest);

//     // }
// }
// cout<<"smallest value is: "<<smallest<<endl;
// cout<<"largest value is:  "<<largest;

// return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int nums[6] = {5, 7, 8, 3, 2, 6};
//     int size = 6;

//     int smallest = INT8_MAX;
//     int index = 0;

//     for (int i = 0; i < size; i++)
//     {
//         if (nums[i]<smallest)
//         {
//             smallest = nums[i];
//             index = i;
//         }

//     }
//     cout<<"smallest value index is: "<<index<<endl;
//     return 0;
// }

/// WAP to calulate sum ans product os all numbers in an array
// #include<iostream>
// using namespace std;
// int sum(int arr[], int size){
//     int sum = 0, product = 1;

//     for (int i = 0; i < size; i++)
//     {
//         sum+=arr[i];
//         product*=arr[i];

//     }
//     return sum,  product;

// }

// int product(int arr[]);
// int main(){
//     int arr[] = {3, 4, 7, 2};
//     int size = 4;

//     return 0;
// }