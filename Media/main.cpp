#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	float nota1;
	float nota2;
	float media;
	
	printf("Insira nota 1: ");
	scanf("%f", &nota1);
	
	printf("Insira nota 2: ");
	scanf("%f", &nota2);
	
	media = (nota1 + nota2) / 2;
		
	printf("Media = %2f ", media);
	
	system("pause");
		
	return 0;
}
