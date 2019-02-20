#include <stdio.h>
#include <stdlib.h>

#include "calc.h"

/*Trabalho 1 - Criar uma biblioteca com funções matemáticas e chamá-las no Main
As funções são: Soma, Subtração, Multiplicação, Divisão, Fatorial, Números primos, Aproximação do cosseno,
Algarismo neperiano, Somatorio dos dígiros, Aproximação da raiz quadrada*/

int main()
{
	int opcao, a = 1;
	long int var1, var2, res;
	float var1_f, var2_f, res_f;
	double res_d;
	while (a == 1)
	{
		a = 0;
		system("cls"); //Limpar a tela de exibição
		//Tabela de opções de funções
		printf("CALCULADORA DE FUN%c%cES: \n\n", 128, 229);
		printf("1 - Soma \t 2 - Subtra%c%co \t 3 - Multiplica%c%co \t 4 - Divis%co \n", 135, 198, 135, 198, 198);
		printf("5 - Somat%crio \t 6 - Fatorial \t 7 - Detector de n%cmeros primos\n", 162, 163);
		printf("8 - Aproxima%c%co Cosseno \t 9 - Aproxima%c%co algarismo neperiano \n", 135, 198, 135, 198);
		printf("10 - Aproxima%c%co raiz quadrada \n\n", 135, 198);
		printf("Insira o valor da opera%c%co desejada: ", 135, 198);
		scanf_s("%d", &opcao);

		switch (opcao)
		{
		case 1: //SOMA
			printf("\nInsira o primeiro valor:\n");
			scanf_s("%d", &var1);
			printf("\nInsira o segundo valor:\n");
			scanf_s("%d", &var2);
			res = soma(var1, var2);
			printf("\nO resultado da soma %c: %d\n", 130, res);
			break;
		case 2: //SUBTRAÇÃO
			printf("\nInsira o primeiro valor:\n");
			scanf_s("%d", &var1);
			printf("\nInsira o segundo valor:\n");
			scanf_s("%d", &var2);
			res = subtracao(var1, var2);
			printf("\nO resultado da subtra%c%co %c: %d\n", 135, 198, 130, res);
			break;
		case 3: //MULTIPLICAÇÃO
			printf("\nInsira o primeiro valor:\n");
			scanf_s("%f", &var1_f);
			printf("\nInsira o segundo valor:\n");
			scanf_s("%f", &var2_f);
			res_f = multiplicacao(var1_f, var2_f);
			printf("\nO resultado da multiplica%c%co %c: %f\n", 135, 198, 130, res_f);
			break;
		case 4: //DIVISÃO
			printf("\nInsira o primeiro valor:\n");
			scanf_s("%f", &var1_f);
			printf("\nInsira o segundo valor:\n");
			scanf_s("%f", &var2_f);
			res_f = divisao(var1_f, var2_f);
			if (res_f == 0) printf("\nN%co %c poss%cvel realizar essa divis%co\n", 198, 130, 161, 198);
			else printf("\nO resultado da divis%co %c: %f\n", 198, 130, res_f);
			break;
		case 5: //SOMATÓRIO
			printf("\nInsira o valor desejado:\n");
			scanf_s("%d", &var1);
			res = somatorio(var1);
			printf("\nO somat%crio dos d%cgitos %c: %d\n", 162, 161, 130, res);
			break;
		case 6: //FATORIAL
			printf("\nInsira o valor desejado:\n");
			scanf_s("%d", &var1);
			res_d = fatorial(var1);
			if (res_d == 0) printf("\nValor negativo. Inv%clido para calculo de fatorial.\n", 160);
			else printf("\nO fatorial de %d %c: %f\n", var1, 130, res_d);
			break;
		case 7: //DETECTOR DE NÚMEROS PRIMOS
			printf("\nInsira o valor desejado:\n");
			scanf_s("%d", &var1);
			res = num_primos(var1);
			if (res == -1) printf("\nN%cmero inv%clido\n", 163, 160);
			if (res == 1) printf("\nO n%cmero %d %c primo\n", 163, var1, 130);
			if (res == 0) printf("\nO n%cmero %d n%co %c primo\n", 163, var1, 198, 130);
			break;
		case 8: //APROXIMAÇÃO DO COSSENO
			printf("\nInsira o valor desejado em radianos: \ncos ");
			scanf_s("%f", &var1_f);
			res_f = cosseno(var1_f);
			printf("\nO cosseno de %f %c: %f\n", var1_f, 130, res_f);
			break;
		case 9: //APROXIMAÇÃO DO ALGARISMO NEPERIANO
			printf("\nInsira o valor desejado: \ne^");
			scanf_s("%d", &var1);
			res_d = alg_neperiano(var1);
			printf("\ne^%d %c: %f\n", var1, 130, res_d);
			break;
		case 10: //APROXIMAÇÃO DA RAIZ QUADRADA
			printf("\nInsira o valor desejado:\n");
			scanf_s("%f", &var1_f);
			res_f = raiz_quadrada(var1_f);
			if (res_f == -1) printf ("\nValor negativo ou nulo. Inv%clido para calculo de raiz quadrada.\n", 160);
			else printf("\nA raiz quadrada de %f %c: %f\n", var1_f, 130, res_f);
			break;
		default:
			printf("\nValor n%co encontrado\n", 198);
			break;
		}
		printf("\nDeseja realizar outra opera%c%co? \n1 - Sim \t 2 - N%co\n", 135, 198, 198);
		scanf_s("%d", &a);
	}
	
	system("pause"); //Parar a tela de exibição
	return 0;
}