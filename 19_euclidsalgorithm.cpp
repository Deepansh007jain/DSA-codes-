#include <iostream>
using namespace std;
int greatestCommonDivisor(int a,int b){
    if(a==0){
        return a;
    }
    else if(b==0){
        return b;
    }
    else{
        while(a!=b){
            if(a>b){
                a = a-b;
            }
            else{
                b=b-a;
            }
        }
    }
    return a;
}
int LCM(int a,int b){
    return (a*b)/greatestCommonDivisor(a,b);
}
int main(){
    
    int a,b;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;

    int gcd = greatestCommonDivisor(a,b);
    cout<<endl<<"GCD is: "<<gcd<<endl;
    cout<<"LCM is: "<<LCM(a,b)<<endl;


    return 0;
}
