#include<iostream>
using namespace std;
int factorial(int);
int main (){
	int num;
	float suma=0;
	cout<<"Coloque el numero de la serie: ";
	cin>>num;
	for(int i=1; i<=num; i++){
		suma=suma+((double)(factorial(i))/(i*2));
    }
	cout<<"La suma de la serie es: "<<suma<<endl;	
	return 0;
}
int factorial(int n){
	int f=1;
	for(int i=1; i<=n; i++){
		f=f*i;
	}
	return f;
}
