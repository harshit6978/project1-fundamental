#include<iostream>
using namespace std;	
	int main(){
		
		char n;
		cout<< "enter a number:";
		cin>>n;
		
		if(n=='a' || n=='e' || n=='i' || n=='o' || n=='u'){
			cout<<"it is a vowel number";
		}
		else{
			cout<<"not vowel";
		}
		
		
		return 0;
	}
