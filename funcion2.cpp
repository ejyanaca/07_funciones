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
	if(num1==0||num2==0){
		cout<<"Error:Debe ingresar numeros diferentes de cero."<<endl;
	}
	else{
		res=residuo(num1,num2);
	    cout<<"El residuo de la division de: "<<num1<<"/"<<num2<<" es: "<<res<<endl;
	    coc=cociente(num1,num2);
	    cout<<"El cociente de la divison de: "<<num1<<"/"<<num2<<" es: "<<coc<<endl;
	}
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
     while(c>=d){
	    c=c-d;
	    coci=coci+1;
	}
	
	return coci;
}
	
	

