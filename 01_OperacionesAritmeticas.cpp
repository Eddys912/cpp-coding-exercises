#include<iostream>
#include<math.h>

using namespace std;

int main(){
	
	/*int n1, n2, sum, res, mult, div;
	
	cout<<"Hacer un programa que lea 2 numeros y muestre las 4 operaciones basica"<<endl<<endl;
	cout<<"Digite un numero: ";
	cin>>n1;
	cout<<"Digite un numero: ";
	cin>>n2;
	
	sum = n1 + n2;
	res = n1-n2;
	mult = n1*n2;
	div = n1/n2;
	
	cout<<"\nLa suma es: "<<sum;
	cout<<"\nLa resta es: "<<res;
	cout<<"\nLa multiplicacion es: "<<mult;
	cout<<"\nLa division es: "<<div<<endl;*/
	
/////////////////////////////////////////////////////////////////////////////////////////////////

	/*float a1, a2, a3, cal1, cal2, cal3, calif;
	
	cout<<"Calcular la calificacion final que esta ponderada por: 30% practicas, 60% teoria, 10% participacion\n"
	cout<<"\nDigite la nota de practicas: ";
	cin>>a1;
	cout<<"Digite la nota de teoria: ";
	cin>>a2;
	cout<<"Digite la nota de participacion: ";
	cin>>a3;
	
	cal1 = a1*0.3;	
	cal2 = a2*0.6;
	cal3 = a3*0.1;
	calif = cal1+cal2+cal3;
	cout.precision(2);
	cout<<"\n- El resultado es: "<<calif;*/
	
/////////////////////////////////////////////////////////////////////////////////////////////////

	int a, b, c;
	float x1, x2, raiz;
	
	cout<<"Hacer un programa que calcule la soluciones de una ecuacion de segundo grado de la forma ax^2+bx+c = 0\n";
	cout<<"\nDigite el valor de a: ";
	cin>>a;
	cout<<"Digite el valor de b: ";
	cin>>b;
	cout<<"Digite el valor de c: ";
	cin>>c;	
	
	x1 = (-b+(sqrt((pow(b,2))-(4*a*c))))/(2*a);
	x2 = (-b-(sqrt((pow(b,2))-(4*a*c))))/(2*a);	
	
	cout<<"\nEl valor de x1 es: "<<x1;
	cout<<"\nEl valor de x2 es: "<<x2<<endl;
	
	return 0;
}
