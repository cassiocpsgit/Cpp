#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float salario, inss, ir, sal_liquido;
	
	printf("DIgite o seu salario bruto: ");
	scanf("%f", &salario);
	
	if(salario <= 1693.72)
	{
		inss = salario * 0.08;
	}
	else
	if (salario >= 1692.73 && salario <= 2822.90)
	{
		inss = salario * 0.09;
	}
	
	sal_liquido = (salario - inss) - ir;
	
	printf("\n Desconto INSS: %f\n", inss);
	
	printf("Salario Liquido %2.f", sal_liquido);
	
	return 0;
}
