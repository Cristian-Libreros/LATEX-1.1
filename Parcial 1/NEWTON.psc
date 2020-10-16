Algoritmo Newton
	tolerancia=0.001;
	
	Escribir 'Ingrese el valor estimado de la raiz inicial X0:';
	Leer floatRaizInicial;
	Escribir 'Ingrese el valor del numero maximo de intentos:';
	Leer IntMaximosintentos;
	Xn=floatRaizInicial;
	Hacer
		FdeXn=Xn*Xn-2;;
		DerivadaFdeXn=2*Xn;
		Xnp1=Xn-(FdeXn/DerivadaFdeXn);
		error=Xn-Xnp1;
		Si (error<0)
			error=Xnp1-Xn;
			intentos=intentos+1;
		FinSi
		
			
			Si (intentos==IntMaximosintentos) 
				error=tolerancia;
				Xn=Xnp1;
			Fin si
		
		
		
	Hasta Que (error>tolerancia)
	
	Escribir ' La raiz mas aproximada es ',Xnp1, ' con ',intentos,' intentos';
	Esperar Tecla
	
FinAlgoritmo
