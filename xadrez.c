#include <stdio.h>

int main f
printf ("\n");
// Realizando a movimentação da Rainha
printf ("Digite um número de 1 à 8, representando a quantidade de casas que a Rainha vai mover: ");
scanf ("%d"
", &mov_Rainha);
printf ("Digite a direção que o Rainha vai realizar, exemplo: (esquerda ou direita)-(Cima ou Baixo): \n*);
scanf(" %[^\n]", direcao _Rainha);
printf ("\n");
printf(*** Realizando a movimentação da Rainha ***\n");
do
{
printf ("Se movendo em %s1\n", direcao _Rainha);
rainha++;
} while (rainha < mov_Rainha);
return 0;