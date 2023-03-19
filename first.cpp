#include<iostream>

using namespace std;

int main(){
    int Number,oppositeNumber=0,reminder=0,temp;
    cout<<"Take Number from user :: ";
    cin>>Number;
    temp=Number;

    while(Number>0){
        reminder=Number%10;
        oppositeNumber=reminder+oppositeNumber*10;
        Number=Number/10;
    }
    // cout<<oppositeNumber;
    if(oppositeNumber==temp){
        cout<<"It's a palindrome";
    }
    else{
        cout<<"Not a palindrome";
    }
}
