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

void selectionSort(int arr[],int n) for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
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
    selectionSort(arr,n);
    cout<<endl<<"After sorting, the array looks like...."<<endl;
    displayArray(arr,n);


    return 0;
}
