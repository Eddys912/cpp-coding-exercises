#include<iostream>

using namespace std;

int main(){
	cout<<"Busqueda secuencial\n"<<endl;
	char a[] = {'a','e','i','o','u'};
	char band = 'F', dato;
	int i = 0;
	cout<<"Digite un dato: ";
	cin>>dato;
	while((band == 'F') && ( i < 5)){
		if(a[i] == dato){
			band = 'V';
		}
		i++;
	}
	if(band == 'F'){
		cout<<"\n- El dato no esta en el arreglo"<<endl;
	}
	else{
		cout<<"\n- El dato "<<dato<<" esta en la posicion: "<<i-1<<endl;
	}
	
	return 0;	
}