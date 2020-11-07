#include<iostream>
using namespace std;

char words[][10] = {"zero","one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
void printdigi(int digits){
    //base case
    if(digits==0){
        return ;
    }
    printdigi(digits/10);
    cout<<words[digits%10]<<" ";
}

int main(){
    int n;
    cout<<"Enter the Digits: "<<endl;
    cin>>n;
    printdigi(n);
}