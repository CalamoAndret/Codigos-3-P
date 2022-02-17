#include<stdio.h>
#include<math.h>
#include<locale.h>
#include<stdlib.h>

main(){

setlocale(LC_ALL, "portuguese");

int op;
printf("\nMenu de Op��es");
printf("\n1 - �rea do tri�ngulo");
printf("\n2 - Ordenar em ordem crescente");
printf("\n3 - Ordenar em ordem decrescente");
printf("\n4 - Calcular as ra�zes de uma equa��o de 2� grau");
printf("\n\n");
scanf("%i",&op);

int a,b,c,x; // Case 2 e 3;

switch(op){
	case 1:
		
		float base, altura, area;
		
		system("cls");
		printf("Selecionado: �rea do tri�ngulo!");
		printf("\nInsira o valor da BASE do tri�ngulo: ");
		scanf("%f",&base);
		printf("\nInsira o valor da ALTURA do tri�ngulo: ");
		scanf("%f",&altura);
		
		area = (base*altura)/2;
		
		printf("A �rea total do tri�ngulo � igual a %.2f",area);
		
		break;
	case 2:
		
		system("cls");		
		printf("Selecionado: Ordem Crescente!");
		printf("\nInsira uma sequencia de n�meros: ");
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
		printf("\nInsira uma sequencia de n�meros inteiros: ");
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
		printf("Selecionado: Ra�zes de uma equa��o de segundo grau!");
		printf("\nInsira o valor da A: ");
		scanf("%f",&Ax);
		printf("\nInsira o valor da B: ");
		scanf("%f",&Bx);
		printf("\nInsira o valor da C: ");
		scanf("%f",&Cx);
		
		Delta = pow(Bx,2)-4*Ax*Cx;
		if(Delta < 0){
			printf("\nN�o possui raiz!");
		}else{
			
			Xi = (-Bx+sqrt(Delta))/(2*Ax);
			Xii = (-Bx-sqrt(Delta))/(2*Ax);
			
			printf("\n");
			printf("\n1� Ra�z: %.2f",Xi);
			printf("\n2� Ra�z: %.2f",Xii);		
			
		}
		
		
		break;
	
}

}
