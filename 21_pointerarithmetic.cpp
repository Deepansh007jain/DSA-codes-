#include <iostream>
using namespace std;

int main(){
   

    int a = 9;
    int *ptr = &a;

    

    cout<<"Before Updation: "<<*ptr<<endl;// gives 9
    (*ptr)++;
    cout<<"After Updation: "<<*ptr<<endl; // gives 10

   
    int* ptr2 = ptr;
    cout<<endl<<"Address of Pointer 1: "<< ptr<<endl;
    cout<<"Address stored by Pointer 2: "<< ptr2<<endl;
    cout<<"Value stored by Pointer 1 is: "<< *ptr<<endl;
    cout<<"Value stored by Pointer 2 is: "<< *ptr2<<endl;





    cout<<endl<<"Address before: "<<ptr<<endl;//supppose address here is 1074
    ptr++;
    cout<<"Address after: "<<ptr<<endl;


    return 0;
}
