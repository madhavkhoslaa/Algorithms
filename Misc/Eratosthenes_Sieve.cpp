#include <iostream>
#include <cmath>

using namespace std;

void primeSieve(int* plist, int n){
    for(int i= 3; i< n; i+=2){
            plist[i]= 1; 
    }

    for(long i= 3; i< n; i+= 2){
        if(plist[i]== 1){
            for(long j= i* i; j< n; j= j+ i)
                plist[j]= 0;
            }
        }
    plist[2]= 1;
    plist[1]= plist[0]= 0;
 
    }


int main(){
    int N;
    cout<<"Enter the number";
    cin>>N;
    cout<<"Prime Numbers"<<endl;
    int plist[N]= {1};
    primeSieve(plist, N);
    for(int i= 0; i< N; i++){
        if(plist[i]== 1)
            cout<<i<<endl;
    }
    return 0;
}