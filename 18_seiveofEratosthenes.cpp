#include <iostream>
using namespace std;
void seiveOfEratosthenes(int n){
    int *a = new int[n]{0};
    for(int i=2; i<=n; i++){
        if(a[i] == 0){
            for(int j=i*i; j<=n; j+=i){
                a[j] = 1;
            }
        }
    }
    for(int i=2; i<=n; i++){
        if(a[i]==0){
            cout<<i<<" ";
        }
    }
}
int main(){
   
    int n;
    cout<<"Enter the value of n upto which prime numbers are to be printed: ";
    cin>>n;

    seiveOfEratosthenes(n);


    return 0;
}
