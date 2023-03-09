#include <iostream>
using namespace std;
int findMaximum(int a[],int n){
    int max = a[0];
    for(int i=1; i<n; i++){
        if(a[i]>max){
            max = a[i];
        }
    }
    return max;
}
int main(){
   
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int *a = new int[n];

     
    for(int i=0; i<n; i++){
        cout<<"a["<<i<<"]:";
        cin>>a[i];
    }

    cout<<endl;
    int max = findMaximum(a,n);
    cout<<"Maximum element of the array is: "<<max<<endl;


    return 0;
}
