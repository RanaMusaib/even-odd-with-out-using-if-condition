#include<iostream>
using namespace std;
int main(){
	int i;
	cin>>i;
	while(i%2==0){
		cout<<i<<" is even number"<<endl;
		break;
	}
	while(i%2!=0){
		cout<<i<<" is odd number"<<endl;
		break;
	}
	i++	;
	
}
