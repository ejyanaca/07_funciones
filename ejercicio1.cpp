#include<iostream>
using namespace std;
int divisor(int);
int main(){
	int n,s;
	cout<<"Ingrese le numero: ";
	cin>>n;
	s=divisor(n);
	if(s==n){
		cout<<"Es un numero perfecto."<<endl;
	}
	else{
		cout<<"No es un numero perfecto."<<endl;
	}
	return 0;
	
}
int divisor(int m){
	int s=0;
	for(int i=1; i<m; i++){
		if(m%i==0){
			s=s+i;
		}
	}
	return s;
}
