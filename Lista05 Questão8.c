/*
- Lista 05 Questão 8
- Aluno: Caio Marques dos Santos Dela-Bianca
- Objetivo do programa: Criar uma função que calcule a distância entre dois pontos, e depois usar tal função para criar um programa que calcule a área de um triângulo.
*/

#include <stdio.h>  /* Biblioteca para usar comandos básicos, como printf. */
#include <locale.h> /* Biblioteca para escrever acentuado e com caracteres especiais. */
#include <stdlib.h> /* Biblioteca para usar o "system("PAUSE");" ao final do programa. */
#include <math.h> /* Biblioteca para usar as operações "pow" e sqrt. */

double funcDistancia(double, double, double, double);

int main()
{
	setlocale(LC_ALL, "Portuguese"); /* Alterando a linguagem para português. */

	double x1, y1, x2, y2, x3, y3, alfa1 = 0, alfa2 = 0, alfa3 = 0, alfa4 = 0, lado1, lado2, lado3, semiperimetro, area;

	printf("Bem vindo ao programa 'Cálculo da área de um triângulo'.\n");
	printf("O programa calcula a área de um triângulo baseando-se nas medidas dos lados. Para isso, deverão ser fornecidas as coordenadas X e Y dos vértices do triângulo.\n");

	while(alfa1 == alfa2 || alfa3 == alfa4) /* AS variáveis do tipo "alfa" servem para identificar se os três pontos estão sobre uma mesma reta. */
	{
		printf("\nDigite as coordenadas X e Y do primeiro vértice da seguinte forma: X Y\n\n");
		scanf("%lf %lf", &x1, &y1);
		printf("\nAgora, digite as coordenadas do segundo vértice da mesma forma do primeiro.\n\n");
		scanf("%lf %lf", &x2, &y2);
		printf("\nPor fim, digite as coordenadas do terceiro vértice da mesma forma dos dois anteriores.\n\n");
		scanf("%lf %lf", &x3, &y3);

		alfa1 = (y2 - y1) / (x2 - x1);
		alfa2 = (y3 - y2) / (x3 - x2);
		alfa3 = (x2 - x1) / (y2 - y1);
		alfa4 = (x3 - x2) / (y3 - y2);

		if((x1 == x2 && y1 == y2) || (x2 == x3 && y2 == y3) || (x3 == x1 && y3 == y1))
		{
			printf("\nDois ou mais vértices estão sobrepostos, o que impossibilita-os de formarem um triângulo. Tente novamente.\n");
			alfa1 = alfa2 = 0;
		}

		else if(alfa1 == alfa2 || alfa3 == alfa4)
			printf("\nOs três vértices estão sobre uma mesma reta, o que impossibilita-os de formarem um triângulo. Tente novamente.\n");
	}

	lado1 = funcDistancia(x1, y1, x2, y2);
	lado2 = funcDistancia(x2, y2, x3, y3);
	lado3 = funcDistancia(x3, y3, x1, y1);
	semiperimetro = (lado1 + lado2 + lado3) / 2;
	area = sqrt(semiperimetro * (semiperimetro - lado1) * (semiperimetro - lado2) * (semiperimetro - lado3));

	printf("\nA área do triângulo de vértices A (%.3lf; %.3lf), B (%.3lf; %.3lf) e C (%.3lf; %.3lf) é %.3lf unidade(s) de área.\n\n", x1, y1, x2, y2, x3, y3, area);

	printf("Programa encerrado.\n\n");

	system("PAUSE");

	return 0;
}

double funcDistancia(double x1, double y1, double x2, double y2)
{
	double distancia = 0;

	distancia = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	return distancia;
}
