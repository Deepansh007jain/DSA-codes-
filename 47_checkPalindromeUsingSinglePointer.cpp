#include <iostream>
#include <string>
using namespace std;
bool checkPalindrome(string str,int start){
    //base case
    int n = str.length()-1;
    if(start >= n/2){
        return true;
    }

    if(str[start] != str[n-start]){
        return false;
    }
    else{
        return checkPalindrome(str,++start);
    }
}
int main(){
    
    string str;
    cout<<"Enter the string here: ";   
    getline(cin,str);

    bool result = checkPalindrome(str,0);

    if(result){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not a Palindrome"<<endl;
    }


    return 0;
}
