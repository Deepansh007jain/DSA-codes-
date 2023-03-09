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
 
void smartBubbleSort(int arr[],int n){
    for(int p=0; p<=n-2; p++){
        int flag = 0;
        for(int c=0; c<=n-2-p; c++){
            if(arr[c]>arr[c+1]){
                swap(arr[c],arr[c+1]);
                flag = 1; 
            }
        }
        if(flag==0){
            break;
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
    smartBubbleSort(arr,n);
    cout<<endl<<"After sorting, the array looks like...."<<endl;
    displayArray(arr,n);


    return 0;
}
