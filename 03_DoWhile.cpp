#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<Math.h>

using namespace std;

int main(){
	
	/*int n, i;
	char op;
	do{
		system("cls");
		cout<<"Hacer um programa que obtenga la tabla de multiplica que el usuario desee\n"<<endl;
		cout<<"Digite la tabla que desea: ";
		cin>>n;
		cout<<"\n";
		for(i = 1; i <= 10; i++){
		cout<<n<<" x "<<i<<" = "<<n*i<<endl;
		}
		cout<<"\nDesea obtener otra tabla(s/n): ";
		op = getch();
	}while(op == 's');*/
	
/////////////////////////////////////////////////////////////////////////////////////////////////	
	
	int a;
	char op;
	do{
	    system("cls");
	    cout<<"Realizar un programa que lea desde el taclado un año y compruebe si es bisiesto o no"<<endl;
		cout<<"\nIntroduce un anio: ";
		cin>>a;
		if((a %4 == 0) & (a %100 != 0) || (a %400 == 0))
			cout<<"\n- "<<a<<" es un anio bisiesto"<<endl;
		else	
			cout<<"\n- "<<a<<" no un anio bisiesto"<<endl;
		cout<<"\nDeseas otro anio <s o n>: ";
		op = getch();
	}while(op == 's');

}
