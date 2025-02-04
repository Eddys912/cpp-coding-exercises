#include<iostream>
#include<Math.h>

using namespace std;

int main (){
	
	/*int suma = 0, cuadrado;
	cout<<"Calcular la suma de los cuadrados de los primeros 10 numeros\n";
	for(int i = 1; i <= 10; i++){
		cuadrado = pow(i,2);
		suma += cuadrado; 
	}
	cout<<"\n- La suma es: "<<suma<<"\n";*/
	
/////////////////////////////////////////////////////////////////////////////////////////////////

	/*int x, y, res = 1;
	cout<<"Hacer un programa que calcule x^y sin utilizar la funcion pow\n";
	cout<<"Digite el valor base(x): ";
	cin>>x;
	cout<<"Digite la elevacion(y): ";
	cin>>y;
	for(int i = 1;i <= y;i++){
		res*= x;
	}
	cout<<"El resultado es: "<<res;*/
	
/////////////////////////////////////////////////////////////////////////////////////////////////		
	
	/*int n, sum = 0;
	cout<<"Hacer un programa que calcule 1+3+5...+2n-1\n\n";
	cout<<"Digite el numero de elementos: ";
	cin>>n;
	for(int i = 1; i <= (2*n)-1; i+=2){
		sum+=i;
	}
	cout<<"- El resultado es: "<<sum<<"\n";*/
	
/////////////////////////////////////////////////////////////////////////////////////////////////	
	
	int n, fact = 1;
	cout<<"Hacer un programa que calcule el factorial de N\n\n";
	cout<<"Digite un numero: ";
	cin>>n;
	for(int i = 1; i <= n; i++){
		fact*=i;
	}
	cout<<"- El factorial de "<<n<<" es: "<<fact<<"\n";
	
	return 0;
	
}
