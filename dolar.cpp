#include <stdio.h>
#include<stdlib.h>

    int main(void)
    	
    {
        float cotacao, valor, real;
        char r;
        
        do
        {
		
        
        printf("Conversao de dolar para real!\n ");

            printf("Digite a cotacao do dolar:\n ");
            scanf("%f", &cotacao);

            printf("Digite o valor em reais:\n ");
            scanf("%f", &real);

            valor = real * cotacao;
            
            printf("Quantia em reais: R$%f\n\n", valor);
            
            printf("Deseja fazer outra conversao? (s/n):\n ");
            scanf(" %c", &r);
            printf("\n");
            
            while ((getchar()) != '\n');
        }
        	while(r == 's' || r == 'S');
            system ("pause");
            return 0;
    }
