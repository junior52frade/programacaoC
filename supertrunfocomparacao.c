#include <stdio.h>

int main(){
char Carta1;
char EstadoA [20] = "Pernambuco";
char CódigoA [20] = "A01";
char CidadeA [20] = "Recife";
int PopulaçãoA = 9839029;
float ÁreaA = 198.312000;
float PIBA = 98.758800;
int PontosA = 70;
float DensidadeA = (float) PopulaçãoA / ÁreaA;
float PercapitaA = (float) PopulaçãoA / PIBA;
unsigned long int superpoderA = PopulaçãoA + ÁreaA + PIBA + PontosA;

char Carta2;
char EstadoB [20] = "Ceará";
char CódigoB [20] = "A02";
char CidadeB [20] = "Fortaleza";
int PopulaçãoB = 8933656;
float ÁreaB = 148.886000;
float PIBB = 94.885000;
int PontosB = 50;
float DensidadeB = (float) PopulaçãoB / ÁreaB;
float PercapitaB = (float) PopulaçãoB / PIBB;
unsigned long int superpoderB = PopulaçãoB + ÁreaB + PIBB + PontosB;
int resultadoA;
int resultadoB;
int resultadoC;
int resultadoD;
int resultadoE;
int resultadoF;
int resultadoG;

resultadoA = PopulaçãoA > PopulaçãoB;
resultadoB = ÁreaA > ÁreaB;
resultadoC = PIBA > PIBB;
resultadoD = PontosA > PontosB;
resultadoE = DensidadeA > DensidadeB;
resultadoF = PercapitaA > PercapitaB;
resultadoG = superpoderA > superpoderB;

printf("Carta 1:\n" , Carta1);
printf("Estado: %s\n" , EstadoA);
printf("Código da Carta: %s\n" , CódigoA);
printf("Nome da cidade: %s\n" , CidadeA);
printf("População: %d\n" , PopulaçãoA);
printf("Área: %f Km²\n " , ÁreaA);
printf("PIB: R$ %.2f R$\n", PIBA);
printf("Número de pontos Turísticos: %d\n" , PontosA);
printf("Densidade Populacional: %.2f hab.km²\n", DensidadeA);
printf("PIB Percapita: R$ %.2f\n" , PercapitaA);

printf("\n");
printf("Carta 2:\n" , Carta2);
printf("Estado: %s\n" , EstadoB);
printf("Código da Carta: %s\n" , CódigoB);
printf("Nome da cidade: %s\n" , CidadeB);
printf("População: %d\n" , PopulaçãoB);
printf("Área: %f Km²\n " , ÁreaB);
printf("PIB: R$ %.2f R$\n", PIBB);
printf("Número de pontos Turísticos: %d\n" , PontosB);
printf("Densidade Populacional: %.2f hb.km²\n", DensidadeB);
printf("PIB Percapita: R$ %.2f\n" , PercapitaB);
printf("\n");


if (ÁreaA > ÁreaB)  {
      printf("Carta 1 - Área: %f Km²\n" , ÁreaA);
      printf("Carta 2 - Área: %f Km²\n" , ÁreaB);
      printf("Resultado: Carta 1 Venceu!\n");
    }


return 0;

}