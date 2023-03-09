#include <iostream>
using namespace std;

int main(){
    int arr[10] = {2,4,6,5,8,9,1,3,5,7};
    int* ptr = &arr[0];

    
    cout<<"Address of the a[0] is: "<<arr<<endl;
    cout<<"Address of first block is: "<< &arr[0]<<endl;
    cout<<"Address stored by the pointer is: "<<ptr<<endl;


    
    cout<<endl;
    cout<<"Value at a[0] is: "<<arr[0]<<endl;
    cout<<"Value at the address stored by the pointer is: "<<*ptr<<endl;



    return 0;
}
