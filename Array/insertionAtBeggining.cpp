#include<iostream>
using namespace std;
void insertAtBeggining(int arr[], int &n, int value){
    for(int i =n; i>n; i--){
        arr[i] = arr[i-1];
    }
    arr[0] = value;
    n++;
}
int main() {
    int arr[10] = {10, 11, 12, 36};
    int n = 4;

    insertAtBeggining(arr, n, 56);
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
