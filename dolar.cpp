#include <stdio.h>
#include<stdlib.h>

    int main(void)
    	
    {
        int cotacao, valor, real;
        
        printf("Conversao de dolar para real:\n ");

            printf("Digite a cotacao do dolar:\n ");
            scanf("%d", &cotacao);

            printf("Digite o valor em reais:\n ");
            scanf("%d", &real);

            valor = real * cotacao;
            
            printf("Quantia em reais: R$%d\n\n", valor);
            
            system ("pause");
            return 0;
    }
