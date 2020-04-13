#include <iostream>
#include <cmath>

using namespace std;

int gcd(int a, int b){
    return b==0? a: gcd(b, a%b);
}

int main(){
    int a= 0, b= 0;
    cout<<"Enter a and b: "<<endl;
    cin>>a>>b;
    cout<<"Their GCD is: "<<gcd(a, b);
    return 0;
}