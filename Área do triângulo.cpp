#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    float base, alt, res;
    printf("\n--- Programa que calcula e imprime a área de um triângulo ---\n");
    printf("Base do triângulo: \n");
    scanf("%f", &base);
    
    printf("Altura: \n");
    scanf("%f", &alt);
    
    res = (base*alt)/2;
    printf("A área do triângulo é: %.2f \n", res);    
    return(0);
}
