#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    float base, alt, res;
    printf("\n--- Programa que calcula e imprime a �rea de um tri�ngulo ---\n");
    printf("Base do tri�ngulo: \n");
    scanf("%f", &base);
    
    printf("Altura: \n");
    scanf("%f", &alt);
    
    res = (base*alt)/2;
    printf("A �rea do tri�ngulo �: %.2f \n", res);    
    return(0);
}
