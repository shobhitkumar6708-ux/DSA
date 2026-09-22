#include<iostream>
using namespace std;
void revArray(int arr[], int size){
    int start =0,  end=size-1;
    while(start<end){
        swap(arr[start] , arr[end]);
        start++;
        end--;
    }
}
int main(){
    int size;
    cout<<"Enter your size: ";
    cin>>size;
    int arr[50];
    for(int i = 0; i<size; i++){
        cin>>arr[i];
    }
    revArray(arr, size);
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    
}