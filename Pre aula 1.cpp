#include<stdio.h>
#include<math.h>
#include<locale.h>
#include<stdlib.h>

main(){

setlocale(LC_ALL, "portuguese");

int op;
printf("\nMenu de Opções");
printf("\n1 - Área do triângulo");
printf("\n2 - Ordenar em ordem crescente");
printf("\n3 - Ordenar em ordem decrescente");
printf("\n4 - Calcular as raízes de uma equação de 2º grau");
printf("\n\n");
scanf("%i",&op);

int a,b,c,x; // Case 2 e 3;

switch(op){
	case 1:
		
		float base, altura, area;
		
		system("cls");
		printf("Selecionado: Área do triângulo!");
		printf("\nInsira o valor da BASE do triângulo: ");
		scanf("%f",&base);
		printf("\nInsira o valor da ALTURA do triângulo: ");
		scanf("%f",&altura);
		
		area = (base*altura)/2;
		
		printf("A área total do triângulo é igual a %.2f",area);
		
		break;
	case 2:
		
		system("cls");		
		printf("Selecionado: Ordem Crescente!");
		printf("\nInsira uma sequencia de números: ");
		scanf("%i %i %i",&a,&b,&c);	
		
		if(a>b){			
			x = b;
			b = a;
			a = x;	
		}
		if(b>c){
			x = c;
			c = b;
			b = x;
		}
		if(c<a){
			x = c;
			c = a;
			a = x;
		}
		if(a>b){			
			x = b;
			b = a;
			a = x;	
		}
		
		printf("%i %i %i",a,b,c);
		
		break;
	case 3:
		
		system("cls");
		printf("Selecionado: Ordem Decrescente!");
		printf("\nInsira uma sequencia de números inteiros: ");
		scanf("%i %i %i",&a,&b,&c);	
		
		if(a>b){			
			x = b;
			b = a;
			a = x;	
		}
		if(b>c){
			x = c;
			c = b;
			b = x;
		}
		if(c<a){
			x = c;
			c = a;
			a = x;
		}
		if(a>b){			
			x = b;
			b = a;
			a = x;	
		}
		
		printf("%i %i %i",c,b,a);
		
		break;
	case 4:
		
		system("cls");
		float Ax, Bx, Cx, Delta,Xi,Xii;
		printf("Selecionado: Raízes de uma equação de segundo grau!");
		printf("\nInsira o valor da A: ");
		scanf("%f",&Ax);
		printf("\nInsira o valor da B: ");
		scanf("%f",&Bx);
		printf("\nInsira o valor da C: ");
		scanf("%f",&Cx);
		
		Delta = pow(Bx,2)-4*Ax*Cx;
		if(Delta < 0){
			printf("\nNão possui raiz!");
		}else{
			
			Xi = (-Bx+sqrt(Delta))/(2*Ax);
			Xii = (-Bx-sqrt(Delta))/(2*Ax);
			
			printf("\n");
			printf("\n1ª Raíz: %.2f",Xi);
			printf("\n2ª Raíz: %.2f",Xii);		
			
		}
		
		
		break;
	
}

}
