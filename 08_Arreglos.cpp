#include<iostream>

using namespace std;

int main(){
	
	/*int n;
	cout<<"Hacer un programa que guarde un vector y se muestre la posicion de cada elemento\n"<<endl;
	cout<<"Digite el numero de elementos del vector: ";
	cin>>n;
	int numeros[n];
	for(int i = 0; i < n; i++){
		cout<<(i+1)<<"- Digite un numero: ";
		cin>>numeros[i];
	}
	cout<<"\n- La posicion del vector es:\n";
	for(int i = 0; i < n; i++){
		cout<<i<<"-->"<<"["<<numeros[i]<<"]"<<endl;
	}*/
	
/////////////////////////////////////////////////////////////////////////////////////////////////
	
	/*int n;
	cout<<"Hacer un programa que guarde un vector y se muestre de manera inversa\n"<<endl;
	cout<<"Digite el numero de elementos del vector: ";
	cin>>n;
	int numeros[n];
	for(int i = 0; i < n; i++){
		cout<<(i+1)<<"- Digite un numero: ";
		cin>>numeros[i];
	}
	cout<<"\n- El vector final es:\n";
	for(int i = n-1; i >= 0; i--){
		cout<<"["<<numeros[i]<<"]";
	}*/
	
/////////////////////////////////////////////////////////////////////////////////////////////////

	/*int n, mayor = 0;
	cout<<"Hacer un programa que guarde un vector y se muestre el mayor elemento del vector\n"<<endl;
	cout<<"Digite el numero de elementos del vector: ";
	cin>>n;
	int numeros[n];
	for(int i = 0; i < n; i++){
		cout<<(i+1)<<"- Digite un numero: ";
		cin>>numeros[i];
		if(numeros[i] > mayor){
			mayor = numeros[i];
		}
	}
	cout<<"\n- El mayor elemento es:"<<mayor<<endl;*/
	
/////////////////////////////////////////////////////////////////////////////////////////////////	
	
	int n, m;
	cout<<"Hacer un programa que guarde dos vector y se muestre al final la union de ambos\n"<<endl;
	cout<<"Digite el numero de elementos del primer vector: ";
	cin>>n;
	int num1[n];
	for(int i = 0; i < n; i++){
		cout<<(i+1)<<"- Digite un numero: ";
		cin>>num1[i];
	}
	cout<<"\nDigite el numero de elementos del segundo vector: ";
	cin>>m;
	int num2[m];
	for(int i = 0; i < m; i++){
		cout<<(i+1)<<"- Digite un numero: ";
		cin>>num2[i];
	}
	int num3[n+m];
	for(int i = 0; i < n; i++){
		num3[i]=num1[i];
	}
	for(int i = n; i < n+m; i++){
		num3[i]=num2[i-n];
	}
	cout<<"\n- El vector final es:\n";
	for(int i = 0; i < n+m;i++){
		cout<<"["<<num3[i]<<"]";
	}
	cout<<endl;
	
	return 0;
}
