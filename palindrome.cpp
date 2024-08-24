#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a Number to check the weather the number is palindrome or not :";
    
    int n, num, digit, rev=0;
    cin>>num;
    n=num;

    while(num!=0)
    {
        digit = num%10;
        rev = (rev*10) + digit;
        num = num/10;
    }
    if(n==rev)
    {
        cout<<"palindrome"<<endl;

    }
    else
    {
        cout<<"not a palindrome"<<endl;
    }
  
    return 0;
}