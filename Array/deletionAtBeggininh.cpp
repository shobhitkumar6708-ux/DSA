#include<iostream>
using namespace std;
void deleteBegining(int arr[], int &n){
    if(n<=0){
        cout<<"array is empty";
        return;
    }
    for(int i = 0; i<n-1; i++){
        arr[i] = arr[i+1];
    }
    n--;
}
int main() {
    int arr[10] = {12, 65, 32, 45};
    int n = 4;
    deleteBegining(arr, n);
    cout<<"array after deleting : ";
    for(int i =0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;


}