#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

int continuar;
int main() {

	do {
		printf("**************************\n");
		printf("Atividade Final de Algoritmo\n");
		printf("**************************\n");
		printf("Digite 0 para sair:\n");
		printf("Digite 1 Calculadora simples:\n");
		printf("Digite 2 Eleicao:\n");
		printf("Digite 3 Multa:\n");
		printf("Digite 4 Senha:\n");
		printf("Digite 5 Maca:\n");
		printf("Digite 6 Variavel:\n");
		printf("Digite 7 Volume da caixa:\n");
		printf("Digite 8 Racao:\n");
		printf("Digite 9 Antecessor:\n");
		printf("Digite 10 AND:\n");
		printf("Digite 11 Raio de Esfera:\n");
		printf("Digite 12 Maior> Menor<:\n");
		printf("Digite 13 Variavel 2:\n");
		printf("Digite 14 Sexo/Altura1:\n");
		printf("Digite 15 Poligno:\n");
		scanf("%d",&continuar);
		system("cls");

		switch(continuar) {
			case 1:
				int num,num1,subtracao,multi,div,soma, mod;

				printf("\nCalculadora basica\n");
				printf("Entre com 2 numeros a serem processados:\n");
				scanf("%i%i", &num, &num1);

				soma = num + num1;
				subtracao  = num - num1;
				multi   = num * num1;
				div  = num / num1;
				mod = num % num1;

				printf("soma e: %i\n", soma);
				printf("subtracao e: %i\n", subtracao);
				printf("multiplicacao e: %i \n", multi);
				printf("divisao e: %i \n", div);
				printf("resto da divisao e: %i \n\n", mod);

				break;

			case 2:
				int sano, widade;



				printf("\nDigite o ano de nascimento:\n");
				scanf("%d",&sano);

				widade = 2023 - sano;

				if(widade >= 16) {
					printf("\nVoce tem idade para voltar\n ");
				} else

					if(widade <= 16)
						printf("\nVoce nao tem idade para voltar\n\n ");
				break;

			case 3:
				int v, vel;

				printf("\nDigite a velocidade:");
				scanf("%d",&v);
				if (v>80) {

					vel =(v-80)*5;
					printf("Voce foi multado, sua multa e de %d\n", vel);
				}

				else {
					printf("\n Voce nao foi multado\n\n");
				}
				break;

			case 4:
				int senha;

				printf("\nDigite a sua senha ");
				scanf("%d",&senha);

				if(senha==1234) {
					printf("Acesso permetido!\n ");
				} else {
					printf("Acesso negado!\n\n ");
				}
				break;

			case 5:
				int m;
				float r;

				printf("Digite o numero das macas:");
				scanf("%d",&m);

				if(m>=12) {
					r=m*0.25;
					printf("\n o valor a se pagar e:%2.f",r);

				} else {
					r=m*0.30;
					printf("o valor a se pagar e:%2.f\n\n",r);
				}
				break;

			case 6:
				int x,z,y;

				printf ("Digite o numero da primeira variavel:");
				scanf ("%d",&x);
				printf ("Digite o numero da segunda variavel:");
				scanf ("%d",&z);
				printf ("O valor da variavel X e: \n%d e o valor da variavel Z e: %d \n",x, z);
				y = x;
				x = z;
				z = y;
				printf ("O valor da variavel X agora e: \n%d O valor da variavel Z agora e: %d \n\n",x, z);
				break;

			case 7:
				float comprimento, largura, altura, volume;

				printf ("Digite o comprimento da caixa: ");
				scanf ("%f",&comprimento);
				printf ("Digite a largura da caixa: ");
				scanf ("%f",&largura);
				printf ("Digite a altura da caixa: ");
				scanf ("%f",&altura);

				volume = comprimento * largura * altura;

				printf ("O volume da caixa e de: %.2fcm\n",volume);
				break;

			case 8:
				float peso,quant,grama,sobra;

				printf("Digite o peso do saco de racao (em kg): ");
				scanf ("%f",&peso);
				printf ("Digite a quantidade de racao para os gatos (em gramas): ");
				scanf ("%f",&quant);
				grama = peso *1000;
				sobra = grama - (quant*5);
				printf ("A quantidade de racao que sobrou no saco depois de 5 dias foi de %.2f\n",sobra, " gramas");
				break;

			case 9:
				int numero;


				printf ("Digite um numero:");
				scanf ("%d",&numero);
				printf ("O nudigitado foi: %d \n", numero);
				printf ("O seu antecessor e: %d \n", numero-1);
				printf ("O seu sucessor e: %d \n\n", numero+1);
				break;

			case 10:
				int  nas, ano, idade, mes, sem, dia;


				printf ("Digite seu ano de nascimento: ");
				scanf ("%d",&nas);

				printf ("Digite o ano atual: ");
				scanf ("%d",&ano);

				idade = ano - nas;

				printf ("Sua idade e: %d \n", idade);

				mes = idade * 12;

				printf ("Sua idade em meses e: %d \n", mes);

				sem = mes * 4;

				printf ("Sua idade em semanas e: %d \n", sem);

				dia = sem * 7;

				printf ("Sua idade em dias e: %d \n\n", dia);
				break;

			case 11:
				float raio,volwme,pot ;

				printf ("Digite o raio para saber o volume de um esfera:\n ");
				scanf("%f",&raio);
				pot = pow(raio, 3);
				volwme = (4/3) * 3,14159 * pot;
				printf("O volume da esfera e: %.2f\n\n", volwme);
				break;

			case 12:
				float nimero, nem;

				printf ("Digite um numero: ");
				scanf ("%f",&nimero);
				printf ("Digite um numero: ");
				scanf ("%f",&nem);

				while (nimero == nem) {


					printf ("Erro de digitacao!!! Os numeros precisam ser diferentes \n");
					printf ("Digite novamente o primeiro numero: ");
					scanf ("%f",&nimero);
					printf ("Digite novamente o segundo numero: ");
					scanf ("%f",&nem);


					if (nimero > num) {
						printf ("Primeiro numero e maior %.2f", nimero);

					} else
						printf ("Segundo numero e maior %.2f\n\n", nem);
				}
				break;

			case 13:
				int a,b,c;

				printf ("Digite um numero: ");
				scanf ("%d",&a);
				printf ("Digite um numero: ");
				scanf ("%d",&b);
				printf ("Digite um numero: ");
				scanf ("%d",&c);

				while (a==b, b==c, a==c) {

					printf ("Erro de digitacao! Os numeros tem que ser diferentes: \n");
					printf ("Digite novamente o primeiro numero: ");
					scanf ("%d",&a);
					printf ("Digite novamente o segundo numero: ");
					scanf ("%d",&b);
					printf ("Digite novamente o terceiro numero: ");
					scanf ("%d",&c);
				}

				if (a>b) {
				}


				if (b>c)

					printf ("%d %d %d\n",c, b, a);

				else

					printf ("%d %d %d\n",a, b, c);

				if (c>b)

					if (a>c)

						printf ("%d %d %d\n",b, c, a);

					else

						printf ("%d %d %d\n",b, a, c);
				break;

			case 14:
				float alturaz, pesox, sexo;



				printf ("Digite a altura da pessoa: ");
				scanf ("%f",&alturaz);
				printf ("Digite o sexo da pessoa (1 para feminino e 2 para masculino) ");
				scanf ("%f",&sexo);

				if (sexo == 1) {
					pesox = (62.1 * alturaz) - 44.7;
				}

				if (sexo == 2) {
					pesox = (72.7 * alturaz) - 58;
				}

				printf ("O peso ideal da pessoa e: %.2f\n\n", pesox);
				break;

			case 15:
				int num_lados;
				float medida_lado, area;


				printf ("Digite o numero de lados do poligno:");
				scanf ("%d",&num_lados);
				printf("Digite a medida do lado (em cm):");
				scanf ("%f",&medida_lado);

				if (num_lados == 3) {
					area = (medida_lado) * (medida_lado) / 2;
					printf ("Triangulo");
					printf ("\narea do Triangulo %.2fcm\n\n", area );
				}




				if (num_lados == 4) {
					area = (medida_lado )* (medida_lado);
					printf ("Quadrado");
					printf ("\narea Quadrado e: %2.fcm\n\n", area);

				}





				if (num_lados == 5) {
					printf ("\nPentagono\n\n");
				}



				else

					if (num_lados<3 or num_lados>5)
						printf ("\nPoligono indeterminado\n\n");

				break;

			case 16:

				break;

			case 17:

				break;

			case 18:

				break;

			case 19:

				break;

			case 20:

				break;

			case 21:

				break;

			case 22:

				break;

			case 23:

				break;

			case 24:

				break;

			case 25:

				break;

			case 26:

				break;

			case 27:

				break;

			case 28:

				break;

			case 29:

				break;

			default:
				printf("Sair ");
				break;
		}
	} while (continuar != 0);



	return 0;
}