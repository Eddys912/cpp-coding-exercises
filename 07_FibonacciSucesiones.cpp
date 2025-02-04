#include<iostream>
#include<math.h>

using namespace std;

int main(){
	
	/*int n, elevacion = 0, sum = 0;
	cout<<"Hacer un programa que calcule el valor de 2^1+2^2+2^3+2^n\n"<<endl;
	cout<<"Digite hasta que valor desea elevar en numero: ";
	cin>>n;
	for(int i = 1; i <= n; i++){
		elevacion = pow(2,i);
		sum+=elevacion;
	}
	cout<<"- La suma es: "<<sum<<endl;*/
	
/////////////////////////////////////////////////////////////////////////////////////////////////	

	/*int n, sump = 0, sumi = 0, res;
	cout<<"Hacer un programa que calcule 1-2+3-4+5-6...n\n"<<endl;
	cout<<"Digite un numero: ";
	cin>>n;
	for(int i = 1; i <= n; i++){
		if(i%2 != 0){
			sumi+=i; 
		}
		if(i%2 == 0){
			sump+=i;
		}
	}
	res = sumi-sump;
	cout<<"- El resultado es: "<<res<<endl;*/
	
/////////////////////////////////////////////////////////////////////////////////////////////////	

	int n, x = 0, y = 1, z = 1;
	cout<<"Hacer un programa que realice la serie Fibonacci 1 1 2 3 5 8 13\n"<<endl;
	cout<<"Digite hasta que numero desea la serie: ";
	cin>>n;
	cout<<"1 ";
	for(int i = 1;i < n; i++){
		z = x + y;
		cout<<z<<" ";
		x = y;
		y = z; 
	}
	cout<<endl;

	return 0;
	
}
