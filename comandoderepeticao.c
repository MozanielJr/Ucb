// Comando de Repitacao

#include <stdio.h>

int main(){

float n1, n2, media;

printf("Digite as notas 1 e 2:");
scanf("%f%f", &n1, &n2);

media = (n1 + n2)/2;
printf("Media: %.1f\n", media);

if (media >= 7)
    printf("APROVADO!\n");
    else printf("Reprovado! \n");




}