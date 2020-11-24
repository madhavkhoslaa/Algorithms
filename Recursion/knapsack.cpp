#include<iostream>
using namespace std;

int steal(int capacity, int n, int* cost, int* weight){
    if(n==0 || capacity==0){
        return 0;
    }
    int ans = 0;
    int included, excluded;
    included = excluded = INT8_MIN;
    if(weight[n-1]<capacity)
    {
        included = cost[n-1] + steal(capacity-weight[n-1], n-1, cost, weight);
    }
    excluded = steal(capacity, n-1, cost, weight);
    return max(included, excluded);

}

int main(){
    int cost[] = {40, 20, 35, 100};
    int weight[] ={1, 2, 3, 5};
    int capacity=7;
    int n=4;
    cout<<steal(capacity, n, cost, weight);

}