#include<iostream>
#include<deque>
using namespace std;

int main(){
    int N;
    int k;
    deque<int> Q;
    cin>>N;
    int arr[N];
    for(int i= 0; i< N; i++){
        cin>>arr[i];
    }
    cin>>k;
    for(int j= 0; j< k; j++){
        while(!Q.empty() && arr[j]> Q.back()){
            Q.pop_back();
        }
        Q.push_back(j);
    }
    for(int j=k;j<=N; j++){
        cout<<arr[Q.front()]<<" ";
        while(!Q.empty() && Q.front()<=j-k){
            Q.pop_front();
        }
        while(!Q.empty() && arr[j]> arr[Q.back()] ){
            Q.pop_back();
        }
        Q.push_back(j);
    }
}