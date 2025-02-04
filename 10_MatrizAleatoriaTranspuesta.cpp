#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(){
	
	/*int f, c, num;
	cout<<"Hacer un programa pidiendo filas y columnas para llenar aleatoriamente una matriz\n"<<endl;
	cout<<"Digite el numero de filas: ";
	cin>>f;
	cout<<"Digite el numero de columnas: ";
	cin>>c;
	int m[f][c];
	srand(time(NULL));
	cout<<"\n- La matriz es: \n"<<endl;
	for(int i = 0; i < f; i++){
		for(int j = 0; j < c; j++){
			num = 1 + rand()%9;
			m[i][j] = num;
			cout<<"["<<m[i][j]<<"]";
		}
		cout<<endl;
	}*/
	
/////////////////////////////////////////////////////////////////////////////////////////////////

	int m[3][3];
	cout<<"Hacer un programa que realice una matriz de 3x3 y cree su transpuesta\n"<<endl;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout<<"Digite los valores en la posicion ["<<i<<"]"<<"["<<j<<"]: ";
			cin>>m[i][j];
		}
	}
	cout<<"\n- La matriz original es: \n"<<endl;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout<<"["<<m[i][j]<<"]";
		}
		cout<<endl;
	}
	cout<<"\n- La matriz transpuesta es: \n"<<endl;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout<<"["<<m[j][i]<<"]";
		}
		cout<<endl;
	}

	return 0;
}
