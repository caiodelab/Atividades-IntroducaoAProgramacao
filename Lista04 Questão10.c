/*
- Lista 04 Questão 10
- Aluno: Caio Marques dos Santos Dela-Bianca
- Objetivo do programa: O programa deve ter como dados de entrada os coeficientes a, b e c de uma equação do segundo
grau, e deve retornar suas raízes reais (ou informar que não há raízes reais). Além disso, ele deve perguntar ao
usuário se deseja que seja feito outro cálculo ou não.
*/

#include <stdio.h>  /* Biblioteca para usar comandos básicos, como printf. */
#include <locale.h> /* Biblioteca para escrever acentuado e com caracteres especiais. */
#include <stdlib.h> /* Biblioteca para usar o "system("PAUSE");" ao final do programa. */
#include <math.h> /* Biblioteca para usar as operações "pow" (potência de um número) e "sqrt" (raiz quadrada de um número). */

int main()
{
	setlocale(LC_ALL, "Portuguese"); /* Alterando a linguagem para português */

	double coeficientea, coeficienteb, coeficientec, raiz1, raiz2, continuarprograma = 1;

	printf("Bem vindo ao programa 'Cálculo das raízes de uma equação quadrática'.\n");
	printf("O programa calcula quais os possíveis valores de x para que uma equação do tipo ax² + bx + c = 0 seja verdadeira.\n\n");

	while(continuarprograma != 0)
	{
		printf("Digite um valor para o coeficiente 'a' (diferente de 0).\n\n");
		scanf("%lf", &coeficientea);

		if(coeficientea == 0)
		{
			printf("\nO coeficiente 'a' não pode ser 0, pois senão a equação não seria quadrática.\n\n");
		}

		/* As operações realizadas nesse código seguem a Fórmula de Bháskara, uma famosa alternativa para a solução de equações do segundo grau (ax² + bx + c = 0).
		A resolução segue o seguinte modelo: x' e x'' são as raízes de uma equação quadrática, em que x' = (-b + (b² - 4*a*c)^(1/2))/(2*a) e
		x'' = (-b - (b² - 4*a*c)^(1/2))/(2*a) */

		else
		{
			printf("\nDigite um valor para o coeficiente 'b'.\n\n");
			scanf("%lf", &coeficienteb);

			printf("\nDigite um valor para o coeficiente 'c'.\n\n");
			scanf("%lf", &coeficientec);

			if( pow(coeficienteb, 2) - 4*coeficientea*coeficientec < 0) /* Delta negativo, não será possível calcular sua raiz quadrada. */
			{
				printf("\nA equação (%lfx²) + (%lfx) + (%lf) = 0 não possui raízes reais.\n\n", coeficientea, coeficienteb, coeficientec);
			}

			else if( pow(coeficienteb, 2) - 4*coeficientea*coeficientec == 0)
			{
				raiz1 = raiz2 = (-coeficienteb)/(2*coeficientea);

				printf("\nA equação (%lfx²) + (%lfx) + (%lf) = 0 possui duas raízes reais e iguais, de valor %lf.\n\n", coeficientea, coeficienteb, coeficientec, raiz1);
			}

			else
			{
				raiz1 = (-coeficienteb + sqrt(pow(coeficienteb, 2) - 4*coeficientea*coeficientec))/(2*coeficientea);
				raiz2 = (-coeficienteb - sqrt(pow(coeficienteb, 2) - 4*coeficientea*coeficientec))/(2*coeficientea);

				printf("\nA equação (%lfx²) + (%lfx) + (%lf) = 0 possui duas raízes reais, de valores %lf e %lf.\n\n", coeficientea, coeficienteb, coeficientec, raiz1, raiz2);
			}
		}

		printf("Deseja que seja feito o cálculo das raízes de outra equação? Digite 0 para 'não', e qualquer outro número para 'sim'.\n\n");
		scanf("%lf", &continuarprograma);
	}

	printf("\nPrograma encerrado.\n\n");

	system("PAUSE");

	return 0;
}