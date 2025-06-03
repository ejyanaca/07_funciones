#include<iostream>
using namespace std;
int suma(int);
int fibonacci(int);
int main(){
	int n,s,opcion;
	cout<<"Ingrese el valor de la serie: "<<endl;
	cin>>n;
	s= fibonacci(n);
    cout<<"Desea la suma de fibonacci?"<<endl;
    cout<<"1. Si"<<endl;
    cout<<"2. No"<<endl;
    cout<<"---------------"<<endl;
    cin>>opcion;
    cout<<"--------------"<<endl;
    switch(opcion){
    	case 1: cout<<"La suma es: "<<suma(n)<<endl;
    	         break;
    	case 2: cout<<"Okey";
    	         break;
    	default: cout<<"Coloque otra opcion."<<endl;
    	         break; 
	}
    return 0;
}
      int fibonacci(int n){
      	int a=1,b=0,f=0;
      	for(int i=1;i<=n;i++){
      		f=a+b;
      		cout<<f<<" ";
      		a=b;
      		b=f;
		  }
		  cout<<endl;
		  return f;
	  }
	        int suma(int n){
      	int a=1,b=0,f=0,suma=0;
      	for(int i=1;i<=n;i++){
      		f=a+b;
      		suma=suma+f;
      		a=b;
      		b=f;
		  }
		  return suma;
	  }
