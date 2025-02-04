#include<iostream>

using namespace std;

int main(){
	
	/*int fil, col;
	cout<<"Hacer un programa para llenar una matriz pidiendo al usuario el numero de filas y columnas\n"<<endl;
	cout<<"Digite el numero de filas: ";
	cin>>fil;
	cout<<"Digite el numero de columnas: ";
	cin>>col;
	int m[fil][col];
	for(int i = 0; i < fil; i++){
		for(int j = 0; j < col; j++){
			cout<<"Digite un numero en la posicion ["<<i<<"]"<<"["<<j<<"]: ";
			cin>>m[i][j];
		}
	}
	cout<<"\n- La matriz es:"<<endl;
	for(int i = 0; i < fil; i++){
		for(int j = 0; j < col; j++){
			cout<<"["<<m[i][j]<<"]";
			
		}
		cout<<endl;
	}*/
	
/////////////////////////////////////////////////////////////////////////////////////////////////	
	
	int m[3][3];
	cout<<"Hacer un programa que defina una matriz de 3x3 y muestre la diagonal principal\n"<<endl;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout<<"Digite un numero en la posicion ["<<i<<"]"<<"["<<j<<"]: ";
			cin>>m[i][j];
		}
	}
	cout<<"\n- La matriz es:"<<endl;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout<<"["<<m[i][j]<<"]";	
		}
		cout<<endl;
	}
	cout<<"\n- La diagonal principal es:"<<endl;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			if(i == j)	{
				cout<<"["<<m[i][j]<<"]";
			}
		}
	}
	cout<<endl;
	
	return 0;
}
