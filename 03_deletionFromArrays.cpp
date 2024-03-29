#include <iostream>
using namespace std;
 
void fillArray(int arr[],int size, int &n){
    cout<<"Size of the array is: "<<size<<endl;
    cout<<"Enter the number of elements to fill: ";
    cin>>n;

    if(n>size){
        cout<<"Elements excedding size..."<<endl;
        fillArray(arr,size,n);
    }
    else{
        for(int i=0; i<n; i++){
            cout<<i<<": ";
            cin>>arr[i];
        }  
    }
}

void displayArray(int arr[],int &n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

void deleteFirstElement(int arr[],int size,int &n){
    if(n==0){
        cout<<endl<<"SORRY!! No element present to delete"<<endl;
    }
    else{
        for(int i=0; i<n; i++){
            arr[i] = arr[i+1];
        }
        n--;
        cout<<endl;
        cout<<"After deletion of first element, the array looks like..."<<endl;
        displayArray(arr,n);
    }
}

void deleteLastElement(int arr[],int size,int &n){
    if(n==0){
        cout<<endl<<"SORRY!! No elements present to delete"<<endl;
    }
    else{
        n--;
        cout<<endl;
        cout<<"After deletion of the last element, the array looks like..."<<endl;
        displayArray(arr,n);
    }
}
void deleteGivenElement(int arr[],int size,int &n){
    if(n==0){
        cout<<endl<<"SORRY!! No elements present to delete"<<endl;
    }
    else{
        int index;
        cout<<endl<<"Enter the index of the element to delete: ";
        cin>>index;
        
        if(index>=0 && index<=n){
            for(int i=index; i<n; i++){
                arr[i] = arr[i+1];
            }
            n--;
            cout<<"After deletion of element of given index, the array looks like...."<<endl;
            displayArray(arr,n);
        }
        else{
            cout<<"Invalid Index Given"<<endl;
        }
    }
}
int main(){
   
    int size = 8, n = 0;
    int arr[8];
    fillArray(arr,size,n);
    cout<<endl;
    cout<<"The Input Array looks like..."<<endl;
    displayArray(arr,n);

    cout<<endl<<endl;
    cout<<"1: Delete the First Element"<<endl;
    cout<<"2. Delete the Last Element"<<endl;
    cout<<"3. Delete the element at Given Index"<<endl;
    cout<<endl;

    int choice;
    cout<<"Enter your choice: ";
    cin>>choice;

    switch(choice){
        case 1:
            deleteFirstElement(arr,size,n);
            break;
        case 2:
            deleteLastElement(arr,size,n);
            break;
        case 3:
            deleteGivenElement(arr,size,n);
            break;
        default:
            cout<<"Invalid Choice Input"<<endl;
            break;
    }

    return 0;
}
