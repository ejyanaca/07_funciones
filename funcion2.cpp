#include<iostream>
using namespace std;
int residuo(int,int);
int cociente(int,int);
int main(){
	int num1,num2,may,men,res,coc;
	cout<<"Ingrese el primer numero: ";
	cin>>num1;
	cout<<"Ingrese el segundo numero: ";
	cin>>num2;
	if(num1==0||num2==0){
		cout<<"Error:Debe ingresar numeros diferentes de cero."<<endl;
	}
	else{
		if(num1>num2){
			may=num1;
			men=num2;
		}
		else{
			may=num2;
			men=num1;
		}
		res=residuo(may,men);
	    cout<<"El residuo de la division de: "<<may<<"/"<<men<<" es: "<<res<<endl;
	    coc=cociente(may,men);
	    cout<<"El cociente de la divison de: "<<may<<"/"<<men<<" es: "<<coc<<endl;
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
	
	

