#include <iostream>
using namespace std;
 
void fillArray(int a[],int n){
    for(int i=0; i<n; i++){
        cout<<"a["<<i<<"]: ";
        cin>>a[i];
    }
}
 
void displayArray(int a[],int n){
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}
 
int findMax(int a[],int n){
    int max = a[0];
    for(int i=1; i<n; i++){
        if(a[i]>max){
            max = a[i];
        }
    }
    return max;
}

void countSort(int a[],int n, int digit){
    int count[10] = {0};
    int *output = new int[n];

     for(int i=0; i<n; i++){
        count[(a[i]/digit)%10]++;
    }

     for(int i=1; i<10; i++){
        count[i] += count[i-1];
    }

    for(int i=n-1; i>=0; i--){
        output[--count[(a[i]/digit)%10]] = a[i];
    }

   for(int i=0; i<n; i++){
        a[i] = output[i];
    }

}
 
void radixSort(int a[],int n){
    int max = findMax(a,n);
    int digit = 1;

    while(max>0){
        countSort(a,n,digit);
        max/=10;
        digit*=10;
    }
}
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int *a = new int[n];     

    cout<<"Fill the elements in the array...."<<endl;
    fillArray(a,n);
    cout<<endl<<"The given input array looks like..."<<endl;
    displayArray(a,n);
    cout<<endl<<endl<<"Sorting the array...."<<endl;
    radixSort(a,n);
    cout<<endl<<"After sorting, the array looks like...."<<endl;
    displayArray(a,n);
    cout<<endl;


    return 0;
}
