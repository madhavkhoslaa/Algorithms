#include <iostream>
#include <numeric>

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
    int q_n= 0;
    //taking the number of queries
    cout<<"Enter the number of queries"<<endl;
    cin>>q_n;
    pair<int, int> a[q_n];
    //taking the parameters for n queries
    for(int i= 0; i< q_n; i++){
        cout<<"Enter range start"<<endl;
        cin>>a[i].first;
        cout<<"Enter range end"<<endl;
        cin>>a[i].second;
    }
    //Creating a list of prime numbers where prime indexes are 1
    int prime[1000]= {0};
    primeSieve(prime, 1000);
    //calculating sum of primes till an index i or a cumilative sum
    int cusum[1000]= {0};
    for(int i= 1; i< 1000; i++){
        cusum[i]= prime[i]+ cusum[i- 1];
    }
    for(int i= 0; i<q_n; i++){
        //Number of primes is difference of total primes till uper limit and lower limit
        cout<<"Number of primes between"<< a[i].first<<" and "<<a[i].second<<" are "<<cusum[a[i].second]- cusum[a[i].first]<<endl;
    }
    
}