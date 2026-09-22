// #include<iostream>
// using namespace std;
// int main() {
//     int arr[10] = {1,2,3,4};
//     int n = 4;
//     int value = 5;
//     arr[n] = value;
//     n++;
//     for(int i =0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
// }


#include<iostream>
using namespace std;
void inserAtEnd(int arr[], int &n, int value){
    arr[n] = value;
    n++;
}
int main () {
    int arr[10] = {10, 12, 54, 85};
    int n = 2;
    inserAtEnd(arr, n, 50);
    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}