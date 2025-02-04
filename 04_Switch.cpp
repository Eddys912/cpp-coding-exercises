#include<iostream>

using namespace std;

int main(){
	
	/*int n, u, d, c, m;
	cout<<"Cambiar un numero entero a romano"<<endl<<endl;
	cout<<"Digite un numero: ";
	cin>>n;
	cout<<endl;
	u = n%10;n/=10;
	d = n%10;n/=10;
	c = n%10;n/=10;
	m = n%10;n/=10;
	if(n > 0 || n < 4000){
		switch(m){
			case 1: cout<<"M";break;
			case 2: cout<<"MM";break;
			case 3: cout<<"MMM";break;
		}
		switch(c){
			case 1: cout<<"C";break;
			case 2: cout<<"CC";break;
			case 3: cout<<"CCC";break;
			case 4: cout<<"CD";break;
			case 5: cout<<"D";break;
			case 6: cout<<"DC";break;
			case 7: cout<<"DCC";break;
			case 8: cout<<"DCCC";break;
			case 9: cout<<"CM";break;
		}
		switch(d){
			case 1: cout<<"X";break;
			case 2: cout<<"XX";break;
			case 3: cout<<"XXX";break;
			case 4: cout<<"XL";break;
			case 5: cout<<"L";break;
			case 6: cout<<"LX";break;
			case 7: cout<<"LXX";break;
			case 8: cout<<"LXXX";break;
			case 9: cout<<"XC";break;
		}
		switch(u){
			case 1: cout<<"I";break;
			case 2: cout<<"II";break;
			case 3: cout<<"III";break;
			case 4: cout<<"IV";break;
			case 5: cout<<"V";break;
			case 6: cout<<"VI";break;
			case 7: cout<<"VII";break;
			case 8: cout<<"VIII";break;
			case 9: cout<<"IX";break;
		}
	}
	else{
		cout<<"- Error, el numero debe ser entre 1 y 3999"<<endl;
	}
	cout<<endl;*/
	
/////////////////////////////////////////////////////////////////////////////////////////////////

	int mes;
	cout<<"Mostrar los meses del año pidiendo al usuario que digite un numero entre 1-12"<<endl;
	cout<<endl<<"Digite un numero: ";
	cin>>mes;
	cout<<endl;
	switch(mes){
		case 1: cout<<"El mes es: Enero";break;
		case 2: cout<<"El mes es: Febrero";break;
		case 3: cout<<"El mes es: Marzo";break;
		case 4: cout<<"El mes es: Abril";break;
		case 5: cout<<"El mes es: Mayo";break;
		case 6: cout<<"El mes es: Junio";break;
		case 7: cout<<"El mes es: Julio";break;
		case 8: cout<<"El mes es: Agosto";break;
		case 9: cout<<"El mes es: Septiembre";break;
		case 10: cout<<"El mes es: Octubre";break;
		case 11: cout<<"El mes es: Noviembre";break;
		case 12: cout<<"El mes es: Diciembre";break;
		default: cout<<"Error, digite un numero entre 1-12";
	}
	cout<<endl;
	
	return 0;
}
