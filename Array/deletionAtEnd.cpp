#include<iostream>
using namespace std;
void deleteAtEnd(int arr[], int &n){
    if(n<=0) {
        cout<<"The array is empty: ";
        return ;
    }
    n--;
}
int main(){
    int arr[10] = {5, 4, 1, 5};
    int n = 4;
    deleteAtEnd(arr, n);
    cout<<"Array after deletion: ";
    for(int i =0; i<n; i++){
        cout<<arr[i] <<" ";
    }
    return 0;
}