/*
- Lista 04 Quest�o 10
- Aluno: Caio Marques dos Santos Dela-Bianca
- Objetivo do programa: O programa deve ter como dados de entrada os coeficientes a, b e c de uma equa��o do segundo
grau, e deve retornar suas ra�zes reais (ou informar que n�o h� ra�zes reais). Al�m disso, ele deve perguntar ao
usu�rio se deseja que seja feito outro c�lculo ou n�o.
*/

#include <stdio.h>  /* Biblioteca para usar comandos b�sicos, como printf. */
#include <locale.h> /* Biblioteca para escrever acentuado e com caracteres especiais. */
#include <stdlib.h> /* Biblioteca para usar o "system("PAUSE");" ao final do programa. */
#include <math.h> /* Biblioteca para usar as opera��es "pow" (pot�ncia de um n�mero) e "sqrt" (raiz quadrada de um n�mero). */

int main()
{
	setlocale(LC_ALL, "Portuguese"); /* Alterando a linguagem para portugu�s */

	double coeficientea, coeficienteb, coeficientec, raiz1, raiz2, continuarprograma = 1;

	printf("Bem vindo ao programa 'C�lculo das ra�zes de uma equa��o quadr�tica'.\n");
	printf("O programa calcula quais os poss�veis valores de x para que uma equa��o do tipo ax� + bx + c = 0 seja verdadeira.\n\n");

	while(continuarprograma != 0)
	{
		printf("Digite um valor para o coeficiente 'a' (diferente de 0).\n\n");
		scanf("%lf", &coeficientea);

		if(coeficientea == 0)
		{
			printf("\nO coeficiente 'a' n�o pode ser 0, pois sen�o a equa��o n�o seria quadr�tica.\n\n");
		}

		/* As opera��es realizadas nesse c�digo seguem a F�rmula de Bh�skara, uma famosa alternativa para a solu��o de equa��es do segundo grau (ax� + bx + c = 0).
		A resolu��o segue o seguinte modelo: x' e x'' s�o as ra�zes de uma equa��o quadr�tica, em que x' = (-b + (b� - 4*a*c)^(1/2))/(2*a) e
		x'' = (-b - (b� - 4*a*c)^(1/2))/(2*a) */

		else
		{
			printf("\nDigite um valor para o coeficiente 'b'.\n\n");
			scanf("%lf", &coeficienteb);

			printf("\nDigite um valor para o coeficiente 'c'.\n\n");
			scanf("%lf", &coeficientec);

			if( pow(coeficienteb, 2) - 4*coeficientea*coeficientec < 0) /* Delta negativo, n�o ser� poss�vel calcular sua raiz quadrada. */
			{
				printf("\nA equa��o (%lfx�) + (%lfx) + (%lf) = 0 n�o possui ra�zes reais.\n\n", coeficientea, coeficienteb, coeficientec);
			}

			else if( pow(coeficienteb, 2) - 4*coeficientea*coeficientec == 0)
			{
				raiz1 = raiz2 = (-coeficienteb)/(2*coeficientea);

				printf("\nA equa��o (%lfx�) + (%lfx) + (%lf) = 0 possui duas ra�zes reais e iguais, de valor %lf.\n\n", coeficientea, coeficienteb, coeficientec, raiz1);
			}

			else
			{
				raiz1 = (-coeficienteb + sqrt(pow(coeficienteb, 2) - 4*coeficientea*coeficientec))/(2*coeficientea);
				raiz2 = (-coeficienteb - sqrt(pow(coeficienteb, 2) - 4*coeficientea*coeficientec))/(2*coeficientea);

				printf("\nA equa��o (%lfx�) + (%lfx) + (%lf) = 0 possui duas ra�zes reais, de valores %lf e %lf.\n\n", coeficientea, coeficienteb, coeficientec, raiz1, raiz2);
			}
		}

		printf("Deseja que seja feito o c�lculo das ra�zes de outra equa��o? Digite 0 para 'n�o', e qualquer outro n�mero para 'sim'.\n\n");
		scanf("%lf", &continuarprograma);
	}

	printf("\nPrograma encerrado.\n\n");

	system("PAUSE");

	return 0;
}