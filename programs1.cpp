#include<iostream>
using namespace std;
 int main()
 {
     int n;

     cout<<"Enter the no. of elements in the array"<<endl;

     cin>>n;

     int arr[n];

     cout<<"Enter the elements"<<endl;
     float sum = 0;
     for(int i = 0;i < n;i++)
 {
     cin>>arr[i];
 }

 for(int i = 0;i<n;i++)
 {
     sum = sum + arr[i];
 }

float ans = 0.0;

ans = sum/n;
 cout<<"The average is "<<ans<<endl;



 }
