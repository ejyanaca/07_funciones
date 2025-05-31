#include<iostream>
using namespace std;
int factorial(int);
int main(){
	int m,n,c;
	cout<<"Combinatoria de dos numeros."<<endl;
	cout<<"Ingrese el numero de elementos: ";
	cin>>m;
	if (m==0){
		cout<<"Error:La cantidad de elementos debe ser mayor que cero."<<endl;
	}
	else{
		cout<<"Ingrese el numero de elementos seleccionados o agrupados: ";
	    cin>>n;
	  	c=factorial(m)/(factorial(n)*factorial(m-n));
	    cout<<"La combinatoria de "<<m<<" y "<<n<<" es: "<<c<<endl;
	}
	return 0;
}
int factorial (int n){
	int f=1;
	for(int i=2; i<=n; i++){
			f=f*i;
	}
	return f;
}
