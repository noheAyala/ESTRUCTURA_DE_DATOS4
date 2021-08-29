#include<iostream>


using namespace std;

int main(){
	
	int n;
	float a, c=0, promedio;
	
	cout<<"ingrese la cantidad de numeros a promediar "; cin>>n;
	
	for(int i=0; i<n; i++){
		cout<<"ingrese el numero "<< i+1<<": ";cin>>a;
		c=c+a;
		
	}
	
	promedio = c/n;
	
	cout<<"el promedio es: "<<promedio;
}
