#include<iostream>
using namespace std;
int residuo(int,int);
int cociente(int,int);
int main(){
	int num1,num2,res,coc;
	cout<<"Ingrese el primer numero: ";
	cin>>num1;
	cout<<"Ingrese el segundo numero: ";
	cin>>num2;
	res=residuo(num1,num2);
	cout<<"El residuo de la division es: "<<res<<endl;
	coc=cociente(num1,num2);
	cout<<"El cociente de la divison es: "<<coc<<endl;
	  return 0;
}
int residuo(int a,int b){
	while(a>=b){
		a=a-b;
	}
	return a;		
}
int cociente(int c,int d){
	int coci=0;
	if (d==0){
		cout<<"Nose puede realizar la operacion."<<endl;
	}
	else{
	    while(c>=d){
		   c=c-d;
		   coci=coci+1;
	    }
	}
	return coci;
}
	
	

