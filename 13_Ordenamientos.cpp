#include<iostream>

using namespace std;

int main(){
	
	/*cout<<"\t***Ordenamiento burbuja***\n"<<endl;
	int num[] = {5,2,4,1,3};
	int aux;
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 4; j++){
			if(num[j] > num[j+1]){
				aux = num[j];
				num[j] = num[j+1];
				num[j+1] = aux;
			}
		}
	}
	cout<<"Ordenamiento Ascendente:\n";
	for(int i = 0; i < 5; i++){
		cout<<num[i]<<" ";
	}
	cout<<"\n\nOrdenamiento Descendente:\n";
	for(int i = 4; i >= 0; i--){
		cout<<num[i]<<" ";
	}
	cout<<endl;*/
	
/////////////////////////////////////////////////////////////////////////////////////////////////

	/*cout<<"\t***Ordenamiento por Inserccion***\n"<<endl;
	int n[] = {5,2,4,1,3};
	int pos, aux;
	for(int i = 0; i < 5; i++){
		pos = i;
		aux = n[i];
		while((pos > 0) && (n[pos-1]) > aux){
			n[pos] = n[pos-1];
			pos--;
		}
		n[pos] = aux;
	}
	cout<<"Ordenamiento Ascendente:\n";
	for(int i = 0; i < 5; i++){
		cout<<n[i]<<" ";
	}
	cout<<"\n\nOrdenamiento Descendente:\n";
	for(int i = 4; i >= 0; i--){
		cout<<n[i]<<" ";
	}
	cout<<endl;*/
	
/////////////////////////////////////////////////////////////////////////////////////////////////

	cout<<"\t***Ordenamiento por Seleccion***\n"<<endl;
	int n[] = {5,2,4,1,3};
	int min, aux;
	for(int i = 0; i < 5; i++){
		min = i;
		aux = n[i];
		for(int j = i+1; j < 5; j++){
			if(n[j] < n[min]){
				min = j;
			}
		}
		aux = n[i];
		n[i] = n[min];
		n[min] = aux;
	}
	cout<<"Ordenamiento Ascendente:\n";
	for(int i = 0; i < 5; i++){
		cout<<n[i]<<" ";
	}
	cout<<"\n\nOrdenamiento Descendente:\n";
	for(int i = 4; i >= 0; i--){
		cout<<n[i]<<" ";
	}
	cout<<endl;	
	
	return 0;
	
}
