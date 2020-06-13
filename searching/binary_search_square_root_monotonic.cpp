#include <iostream>

using namespace std;

int square(int n){
	int start= 0;
	int end= n;
	int ans= -1;
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
			cout<<"mid square < n"<<" ans= "<<mid<<"start is "<<start<<endl;
		}
		else{
			end= mid- 1;
			cout<<"mid square > n value of end is "<<end<<endl;
		}
	}
	return ans;
}

int main(){
	int n;
	cout<<"Enter the number: ";
	cin>>n;
	int square_root= square(n);
	cout<<"______________________________"<<endl;
	cout<<"Square root of "<<n<<" is "<<square_root;
	return 1;
}
