#include<iostream>
using namespace std;
int linearSearch(int arr[], int n, int target){
    for(int i = 0; i<n; i++){
    if(arr[i]==target){
        return i;
    }
}
return -1;

}

int main () {
   int n;
   cout<<"Enter your element: ";
   cin>>n;
   int arr[20];
   for(int i =0; i<n; i++){
    cin>>arr[i];
   }
   int target;
   cout<<"Enter your target element: ";
   cin>>target;
   cout<<linearSearch(arr, n, target);
  
}




