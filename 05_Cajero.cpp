#include<iostream>
#include<Math.h>
#include<stdlib.h>

using namespace std;

int main(){
	
	int saldo = 1000, op, salf, sali, salr;
	cout<<"Hacer un el menu de un cajero con saldo inicial de $1000"<<endl;
	cout<<"\tBIENVENIDO A SU CAJERO VIRTUAL"<<endl;
	cout<<endl<<"1. Ingresar dinero"<<endl;
	cout<<"2. Retirar dinero"<<endl;
	cout<<"3. Salir"<<endl;
	cout<<"Seleccione una opcion: ";
	cin>>op;
	cout<<endl;
	switch(op){
		case 1: 
		cout<<"¿Cuando dinero quiere ingresar?: ";
		cin>>sali;
		salf = saldo+sali;
		cout<<"- Su saldo es: "<<salf;
		break;
		case 2: 
		cout<<"¿Cuando dinero quiere retirar?: ";
		cin>>salr;
		if(salr > 1000){
			cout<<"- Error el retiro debe ser menor a $1000";
		}
		else{
			salf = saldo-salr;
			cout<<"- Su saldo es: "<<salf;
		}	
		break;
		case 3:
		cout<<"\tFin del proceso"<<endl;
		break;
	}
	
	return 0;
}
