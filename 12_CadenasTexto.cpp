#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

int main(){
	
	/*cout<<"Hacer un programa que determine si una palabra es polindroma\n"<<endl;
	char a[20];
	char b[20];
	cout<<"Digite una  palabra: ";
	gets(a);
	strcpy(b,a);
	strrev(b);
	if(strcmp(a,b) == 0){
		cout<<"\n- La palabra "<<a<<" es polindroma"<<endl;
	}
	else{
		cout<<"\n- La palabra "<<a<<" no es polindroma"<<endl;
	}*/

/////////////////////////////////////////////////////////////////////////////////////////////////
	
	/*char a[30];
	char b[30];
	cout<<"Convertir 2 cadenas de minusculas a mayusculas, compararlas y decir si son iguales o no\n"<<endl;
	cout<<"Digite una palabra: ";
	gets(a);
	cout<<"Digite una palabra: ";
	gets(b);
	strupr(a);
	strupr(b);
	if(strcmp(a,b) == 0){
		cout<<"\n- Las palabras "<<a<<" y "<<b<<" son iguales"<<endl;
	}
	else{
		cout<<"\n- Las palabras "<<a<<" y "<<b<<" no son iguales"<<endl;
	}*/
	
/////////////////////////////////////////////////////////////////////////////////////////////////	

	char a[20];
	char b[20];
	int sum = 0, num1;
	float num2;
	cout<<"Pedir 2 cadenas de numeros uno entero y uno real, convertirlos y sumarlos\n"<<endl;
	cout<<"Digite la cadena: ";
	gets(a);
	cout<<"Digite la cadena: ";
	gets(b);
	num1 = atoi(a);
	num2 = atof(b);
	sum = num1+num2;
	cout<<"\n- La primer conversion de cadena a numero es: "<<a<<endl;
	cout<<"- La segunda conversion de cadena a numero es: "<<b<<endl;
	cout<<"- La suma de las conversiones es: "<<sum<<endl;
		
	return 0;
	
}
