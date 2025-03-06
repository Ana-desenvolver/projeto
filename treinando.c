#include <stdio.h>

int main () {


       int nota1, nota2, nota3;
       float media;
        
        // Solicita as notas ao usuário
        printf("Digite a nota1, nota2, nota3: ");
        scanf("%d %d %d", &nota1, &nota2, &nota3);
    
        // Calcula a média das notas
        media = (float) (nota1 + nota2 + nota3) / 3;
    
        // Exibe a média
        printf("A media é: %.2f\n", media);
    
        return 0;
    }
