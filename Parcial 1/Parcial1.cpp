#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int Val1, Val2, op, resultado;

int main ()
{
	do
	{
		
	system("cls");
	
	cout<<"¿Que desea realizar?(para continuar presione la tecla enter)."<<endl;
	cout<<"1-Una suma"<<endl;
	cout<<"2-Una resta"<<endl;
	cout<<"3-division"<<endl;
	cout<<"4-salir"<<endl;
	cin>>op;
	
	cout<<"ingrese el valor numero uno"<<endl;
	cin>>Val1;
	cout<<"ingrese el valor numero dos"<<endl;
	cin>>Val2;
	
	switch(op)
	{
		case 1:resultado=Val1+Val2;
			cout<<"El resultado de la suma es: "<<resultado<<endl;
			break;
		case 2:resultado=Val1-Val2;
			cout<<"El resultado de la resta es: "<<resultado<<endl;
			break;
		case 3:resultado=Val1/Val2;
			cout<<"El resultado de la division es: "<<resultado<<endl;
			break;
		case 4:exit;
		default:
			cout<<"el valor que introdujo no es valido"<<endl;
	}
system("pause");
}
while(op!=4);
}

