#include <stdio.h>

int main(){
//CARACTERE Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
char carta [20] = "CARTA 01"; 
char estado = 'M';
//Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string) 
char codigo[30] = "M02";
//Nome da Cidade: O nome da cidade. Tipo: char[] (string)
char cidade [10] = "Manaus";
//População: O número de habitantes da cidade. Tipo: int
int populacao = 200000;
//Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float
float area = 1521.11;
//PIB: O Produto Interno Bruto da cidade. Tipo: float
float pib = 699.28;
//Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int
int ponto = 25; 

printf ("Carta: %s\n", carta );
printf ("Estado: %c\n", estado );
printf ("Codigo: %s\n", codigo );
printf ("Cidade: %s\n", cidade);
printf ("Populacao: %d\n", populacao);
printf ("Area: %.2f\n" , area);
printf ("PIB: %.2f\n", pib);
printf ("Ponto: %d\n", ponto);

    return 0;

}