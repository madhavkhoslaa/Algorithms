#include <iostream>

using namespace std;

float square(int n){
	int start= 0;
	int end= n;
	float ans= -1;
	while(start<= end){
		int mid= (start+ end)/2;
		cout<<"start is "<<start<<endl;
		cout<<"end is "<<end<<endl;
		if(mid* mid== n){
			return mid;
		}
		if(mid* mid< n){
			ans= mid;
			start= mid+ 1;
		}
		else{
			end= mid- 1;
			cout<<"mid square > n value of end is "<<end<<endl;
		}
	}
	float inc= 0.01;
	for(float i= ans; i<ans+ 1; i=i+ inc ){
		if(i*i<= n){
			ans= i;
		}
	}
	return ans;
}

int main(){
	int n;
	cout<<"Enter the number: ";
	cin>>n;
	float square_root= square(n);
	cout<<"______________________________"<<endl;
	cout<<"Square root of "<<n<<" is "<<square_root;
	return 1;
}
