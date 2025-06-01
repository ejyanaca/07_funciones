#include<iostream>
using namespace std;
int mcd(int,int);
int mcm(int,int);
int main(){
	int num1,num2;
	cout<<"Ingrese el primer numero: ";
	cin>>num1;
	cout<<"Ingrese el segundo numero: ";
	cin>>num2;
	cout<<"El maximo comun divisor de "<<num1<<" y "<<num2<<" es "<<mcd(num1,num2)<<endl;
	cout<<"El minimo comun multiplo de "<<num1<<" y "<<num2<<" es "<<mcm(num1,num2)<<endl;
	return 0;
}
int mcd(int a,int b){
	int c=1,menor,mayor;
	if(a>b){
		mayor=a;
		menor=b;
	}
	else{
		mayor=b;
		menor=a;
	}
	for(int i=1; i<=menor; i++){
		if(mayor%i==0&&menor%i==0){
			c=1*i;
		}
	}
	return c;
	
}
int mcm(int x,int y){
	int z;
	z=(x*y)/mcd(x,y);
	return z;
}
