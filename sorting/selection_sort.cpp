#include <iostream>
using namespace std;

void selection(int arr[],int n){
	for(int i= n; i>0; i--){
		int largest= i;
		for(int k= i; k>0; k--){
			if(arr[largest]< arr[k]){
				swap(arr[k], arr[largest]);
			}
		}
	}
	for(int j= 0; j<n; j++){
		cout<<arr[j]<<",";
	}

}

int main(){
	int SIZE;
	cout<<"Enter size of the array: "<<endl;
	cin>>SIZE;
	int a[SIZE];
	cout<<"Enter array: "<<endl;
	for(int i= 0; i<SIZE; i++){
		cin>>a[i];
	}

	selection(a, SIZE);
	return 0;
}

