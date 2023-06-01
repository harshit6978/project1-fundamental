#include<iostream>

using namespace std;

int main(){
	
	int n,i,cube;
	
	cout<<"enter a number:";
	cin>>n;
	
	for(i=1 ; i<=n;i++){
		cube= i * i * i;
		cout<<"number of cube"<< i<<":-"<< cube <<endl;
	}
	
	
	
	
	return 0;
}
