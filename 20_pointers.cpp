#include <iostream>
using namespace std;

int main(){
   
    int a = 5;
    int* ptr = &a;

   
    cout<<"Value of a is: "<<a<<endl;
    cout<<"Value at address stored by pointer is: "<<*ptr<<endl<<endl;


  
    cout<<"Address of a is: "<<&a<<endl;
    cout<<"Address stored by ptr is: "<<ptr<<endl;



    return 0;
}
