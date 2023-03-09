#include <iostream>
using namespace std;

void fillArray(int arr[], int n){
        for(int i=0; i<n; i++){
            cout<<i<<": ";
            cin>>arr[i];
        }
}

void displayArray(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

void bubbleSort(int arr[],int n){
    for(int p=0; p<=n-2; p++){
        for(int c=0; c<=n-2-p; c++){
            if(arr[c]>arr[c+1]){
                swap(arr[c],arr[c+1]);
            }
        }
    }
}
int main(){
    
    int n = 8;
    int arr[8];

    fillArray(arr,n);
    cout<<endl;
    cout<<"The Input Array looks like...."<<endl;
    displayArray(arr,n);
    cout<<endl;
    cout<<endl<<"Sorting the array...."<<endl;
    bubbleSort(arr,n);
    cout<<endl<<"After sorting, the array looks like...."<<endl;
    displayArray(arr,n);


    return 0;
}
