#include <iostream>
using namespace std;

void fillArray(int arr[],int size,int &n){
    cout<<"Size of the array is: "<<size<<endl;
    cout<<"Enter the elements to fill: ";
    cin>>n;

    if(n>size){
        cout<<"Elements exceeding size....Enter size again"<<endl;
        fillArray(arr,size,n);
    }
    cout<<endl<<"a[0]: ";
    cin>>arr[0];

    for(int i=1; i<n; i++){
        cout<<"a["<<i<<"]: ";
        cin>>arr[i];
        if(arr[i]<arr[i-1]){
            cout<<"Value not sorted.....Enter sorted value again "<<endl;
            i--;
        }
    }
}

void displayArray(int arr[],int &n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

void insertInSorted(int arr[],int size,int &n){
    int item;
    cout<<"Enter the element to insert in sorted array: ";
    cin>>item;

    if(n==size){
        cout<<"Overflow (Elements = Size)"<<endl;
    }
    else if(item>arr[n-1]){
        arr[n] = item;
        n++;
        cout<<"After insetion of elements, array looks like..."<<endl;
        displayArray(arr,n);
    }
    else{
        int i=n-1;
        for(i; arr[i]>=item; i--){
            arr[i+1] = arr[i];
        }
        arr[i+1] = item;
        n++;

        cout<<endl;
        cout<<"After insetion of element, array looks like..."<<endl;
        displayArray(arr,n);
    }
}
int main(){
   
    int size = 8, n = 0;
    int arr[8];

    fillArray(arr,size,n);
    cout<<endl;
    cout<<"The Input Array looks like...."<<endl;
    displayArray(arr,n);
    cout<<endl;
    insertInSorted(arr,size,n);
    cout<<endl;

    return 0;
}
