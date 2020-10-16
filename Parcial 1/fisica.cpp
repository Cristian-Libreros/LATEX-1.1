#include <iostream>
#include <math.h>

using namespace std;

int main(){
	float h, g, g2, tc , ts, t, a, b, c , aux1,aux2;


	cout<<"Ingrese el tiempo t: ";cin>>t;
	g = -9.81;
	g2 = 4.9;

	
	
	
	
	a = g2*(1);
	b = g2*(-2*t) - 340;
	c = g2*(pow(t,2));
	
	aux1 = ((-b+sqrt(pow(b,2)-4*a*c))/(2*a));
	aux2 = ((-b-sqrt(pow(b,2)-4*a*c))/(2*a));
	
	if(aux1<aux2){
		ts = aux1;
	}else if(aux2<aux1){
		ts = aux2;
	}
	
	tc = t - ts;
	
	h= -1.0/2 * g * pow(tc,2);
	
	
	cout<<"La altura a la que esta el pozo es de aprox: "<<h<<" metros"<<endl;


return 0;	
}
