#include<iostream>
using namespace std;
    int divisores(int);
    int divisoress(int); 
    int main(){
    	int n1,n2,s;
    	cout<<"Ingrese el primer numero: "<<endl;
    	cin>>n1;
    	cout<<"Ingrese el segundo numero: "<<endl;
    	cin>>n2;
    	if(n1==0||n2==0){
    		cout<<"Error:Ingrese numeros diferentes de cero."<<endl;
		}
		else if(divisores(n1)&&divisoress(n2)){
    	   	cout<<"Los numeros son amigos.";
		   } else {
		    cout<<"Los numeros no son amigos.";
		    
		   }
    return 0; 
	}
	int divisores(int m){
		int s=0;
		for(int i=1;i<m;i++){
			if(m%i==0){
				s=s+i;
			}
		}
		return s;
	}
	int divisoress(int n){
		int p=0;
		for(int i=1;i<n;i++){
			if(n%i==0){
				 p=p+i;
			}
		}
		 return p;
	}
	
