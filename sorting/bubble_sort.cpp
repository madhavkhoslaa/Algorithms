#include <iostream>
using namespace std;
void bubble(int arr[], int n){
	for(int k= 0; k<n; k++){
		for(int i= k; i<n-1; i++){
			if(arr[i]> arr[i+1]){
				swap(arr[i], arr[i+1]);
			}
		}
	}
	for(int i= 0; i<n; i++){
		cout<<arr[i]<<",";
	}
}

int main(){
	int SIZE= 0;
	cout<<"Enter Size";
	cin>>SIZE;
	int a[SIZE];
	for(int i= 0; i<SIZE; i++){
		cin>>a[i];
	}
	bubble(a, SIZE);
	return 0;
}
