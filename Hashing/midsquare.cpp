#include<iostream>
#include<cmath>
using namespace std;
#define size 10
int divisionHash(int key) {
    return key%size;
}
int missq(int key) {
    int sq = key*key;
    int mid = (sq/10)%100;
    return mid%size;
}

int folding(int key){
    int sum = 10;
    while(key > 0) {
        sum = sum+(key%100);
    }
    return sum%size;
}
int multiplication(int key){
    double  A =0.615;
    double pr = key*A;
    double frac = pr-floor(pr);
    return (int)(size*frac);
}
int main () {

    int arr[size];
    int index = multiplication(22);
    cout<<index;
}