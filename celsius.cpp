#include<stdio.h>
#include<stdlib.h>
	
	int main()
	{
		float celsius, fah;
		
		printf("Conversor de Celsius para Fahrenheit:\n ");
		
		printf("Digite a temperatura em graus Celsius:\n ");
		scanf("%f", &celsius);
		
		fah = 9*celsius/5 + 32 ;
		
		printf("Esta e a temperatura em Fahrenheit: %f\n\n", fah);
		
		system("pause");
		return 0;
		
		
		
	
	}
