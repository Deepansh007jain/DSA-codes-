#include <iostream>
using namespace std;
int findMinimum(int a[],int n){
    int min = a[0];
    for(int i=1; i<n; i++){
        if(min>a[i]){
            min = a[i];
        }
    }
    return min;
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
    int min = findMinimum(a,n);
    cout<<"Minimum element of the array is: "<<min<<endl;


    return 0;
}
