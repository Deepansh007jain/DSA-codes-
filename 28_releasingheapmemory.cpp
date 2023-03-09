#include <iostream>
using namespace std;

int main(){
   
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int* arr = new int[n];//allocating memory for an array of size n

    //filling the array with values
    cout<<endl<<endl;
    for(int i=0; i<n; i++){
        cout<<"arr["<<i<<"]: ";
        cin>>arr[i];
    }

    // printing the filled array 
    cout<<endl<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }


    // releasing the memory using delete keyword 
    delete[] arr;
    cout<<endl<<endl;
    cout<<endl<<"Memory released successfully...."<<endl;

    return 0;
}
