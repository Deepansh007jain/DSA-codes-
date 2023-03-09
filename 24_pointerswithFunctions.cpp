#include <iostream>
using namespace std;
void printValue(int* p){
    cout<<"Address stored by the pointer is: "<<p<<endl;
    cout<<"Value at the address stored by the pointer is: "<<*p<<endl;
}
void update(int* p){
    p++;
}
int main(){
   
    int n = 3;
    int* ptr = &n;

    printValue(ptr);
    cout<<endl;
    
    cout<<"Before change,address stored by pointer is: "<< ptr<<endl;
    update(ptr);
    cout<<"After change,address stored by the pointer is: "<< ptr <<endl;


    return 0;
}
