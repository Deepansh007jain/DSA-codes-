#include <iostream>
using namespace std;

int main(){
        
    int num = 9;
    int* ptr = &num; 
    int** dptr = &ptr; 


     
    cout<<"Address of num: "<<&num<<endl;
    cout<<"Address stored by the single pointer ptr: "<<ptr<<endl<<endl;
    cout<<"Address of single pointer is: "<<&ptr<<endl;
    cout<<"Address stored by the double pointer dptr: "<<dptr<<endl;

    
    cout<<endl;
    cout<<"Num is: "<<num<<endl;
    cout<<"Num from single pointer is: "<<*ptr<<endl;
    cout<<"Num from double pointer is: "<<**dptr<<endl;

    return 0;
}
