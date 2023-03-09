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

void insertionSort(int arr[],int n){
    for(int i=1; i<n; i++){
        int temp = arr[i];
        int j=i-1;

        while(j>=0 && arr[j]>temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
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
    insertionSort(arr,n);
    cout<<endl<<"After sorting, the array looks like...."<<endl;
    displayArray(arr,n);
    
    return 0;
}
