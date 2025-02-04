#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

int main(){

	float c1,c2,c3, prom;
	cout<<"Realizar un programa que solicite 3 calificaciones y calcular el promedio\n"<<endl;
	cout<<"Dame el primer numero: ";
	cin>>c1;
	cout<<"Dame el segundo numero: ";
	cin>>c2;
	cout<<"Dame el tercer numero: ";
	cin>>c3;
	prom = (c1+c2+c3)/3;
	if(prom >= 9 & prom <= 10)
		cout<<"\n- La calificacion es excelente: "<<prom<<endl;
	else{
		if(prom >= 8 & prom < 9)
			cout<<"\n- La calificacion es muy buena: "<<prom<<endl;
		else{
			if(prom >= 7 & prom < 8)
				cout<<"\n- La calificacion es buena: "<<prom<<endl;
			else
			   cout<<"\n- ESTAS REPROBADO"<<prom<<endl;
		}
	}
	
	return 0;
}
