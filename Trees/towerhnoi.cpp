#include<iostream>
using namespace std;
void toh(int n, char source, char aux, char dest){
    if(n==1) {
        cout<<"sift disk 1 from: "<< source << "to "<<dest<<endl;
        return;
    }

    toh(n-1, source, dest, aux);
    cout<<"move disk "<< n <<" from: "<< source << "to "<<dest<<endl;;
    toh(n-1, aux, source, dest);

}
int main() {
    int n;
    cout<<"Enter your number : ";
    cin>>n;
    toh(n, 'A', 'B', 'C');
    return 0;
}