#include<iostream>

using namespace std;

int main(){
	
	/*int f, c, cont = 0;
	char band = 'F';
	cout<<"Hacer un programa que realice una matriz de 3x3 y determine si es simetrica\n"<<endl;
	cout<<"Digite el numero de filas: ";
	cin>>f;
	cout<<"Digite el numero de columnas: ";
	cin>>c;	
	int a[f][c];
	cout<<endl;
	for(int i = 0; i < f; i++){
		for(int j = 0; j < c; j++){
			cout<<"Digite los valores en la posicion ["<<i<<"]["<<j<<"]: ";
			cin>>a[i][j];
		}
	}
	if(f == c){
		for(int i = 0; i < f; i++){
			for(int j = 0; j < c; j++){
				if(a[i][j] != a[j][i]){
					cont++;
				}
			}
		}
	}
    if(cont == 0){
      cout<<endl<<"- La matriz es simetrica\n";
      for(int i = 0; i < f; i++){
			for(int j = 0; j < c; j++){
				cout<<" ["<<a[i][j]<<"]";
			}
			cout<<endl;
		}
    }
    else{
    cout<<endl<<"- La matriz no es simetrica\n";
    for(int i = 0; i < f; i++){
			for(int j = 0; j < c; j++){
				cout<<" ["<<a[i][j]<<"]";
			}
			cout<<endl;
		}
  	}*/
	
/////////////////////////////////////////////////////////////////////////////////////////////////

	int a[3][3];
	int b[3][3];
	int c[3][3];
	int prod;
	cout<<"Hacer un programa que realice el producto de dos matrices de 3x3\n"<<endl;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout<<"Digite los valores de la matriz 1 en la posicion ["<<i<<"]["<<j<<"]: ";
			cin>>a[i][j];
		}
	}
	cout<<endl;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout<<"Digite los valores de la matriz 2 en la posicion ["<<i<<"]["<<j<<"]: ";
			cin>>b[i][j];
		}
	}
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			c[i][j] = 0;
			for(int k = 0; k< 3; k++){
				c[i][j]+= a[i][k]*b[k][j];				
			}
		}
	}
	cout<<"\n- La matriz 1 es: \n";
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout<<"["<<a[i][j]<<"]";
		}
		cout<<endl;
	}
	cout<<"\n- La matriz 2 es: \n";
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout<<"["<<b[i][j]<<"]";
		}
		cout<<endl;
	}
	cout<<"\n- El producto de la matriz 1 y 2 es: \n";
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout<<"["<<c[i][j]<<"]";
		}
		cout<<endl;
	}
	
	return 0;
}
