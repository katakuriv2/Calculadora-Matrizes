#include <stdio.h>

int main(){
		
		int linhasA, colunasA, linhasB, colunasB, escolha;
		
		// CONFIGURAÇÃO DA MATRIZ A
		printf("por favor insira o n de linhas da matriz A: ");
		scanf("%d",&linhasA);//LE NO BUFFER O NUMERO DE LINHAS DA MATRIZ
		
		printf("por favor insira o n de colunas da matriz A: ");
		scanf("%d",&colunasA);//LE NO BUFFER O NUMERO DE COLUNAS DA MATRIZ
		
		// CONFIGURAÇÃO DA MATRIZ B
		printf("\npor favor insira o n de linhas da matriz B: ");
		scanf("%d",&linhasB); //LE NO BUFFER O NUMERO DE LINHAS DA MATRIZ
		
		printf("por favor insira o n de colunas da matriz B: ");
		scanf("%d",&colunasB);//LE NO BUFFER O NUMERO DE COLUNAS DA MATRIZ
		
		int matrizA[linhasA][colunasA]; //INICIA A MATRIZ A COM AS CONFIGURAÇÕES DESEJADAS
		
		float matrizB[linhasB][colunasB]; //INICIA A MATRIZ B COM AS CONFIGURAÇÕES DESEJADAS
		
		printf("\n\nNUMEROS PARA COMPOR MATRIZ A \n\n");
		for(int i = 0; i < linhasA; i++) //PERCORRE AS LINHAS DA MATRIZ A
			for(int j = 0; j < colunasA; j++){ //PERCORRE AS COLUNAS DA MATRIZ A
				printf("numero desejado na linha %d, coluna %d: ", i+1, j+1);
				scanf("%d",&matrizA[i][j]); //INSERE O NUMERO NA LINHA i COLUNA j
			}
			
		printf("\n\nNUMEROS PARA COMPOR MATRIZ B \n\n");
		for(int i = 0; i < linhasB; i++) //PERCORRE AS LINHAS DA MATRIZ B
			for(int j = 0; j < colunasB; j++){ //PERCORRE AS COLUNAS DA MATRIZ B
				printf("numero desejado na linha %d, coluna %d: ", i+1, j+1);
				scanf("%f",&matrizB[i][j]); //INSERE O NUMERO NA LINHA i COLUNA j
			}
		
		int loop;
	
	do{
		loop = 0;
		printf("\n\nSELECIONE A OPERACAO:\n1-SOMA\n2-SUBTRACAO\n3-MULTIPLICACAO\n4-DIVISAO\n");
		scanf("%d", &escolha); //LE NO BUFFER A ESCOLHA
		
		switch(escolha) //BASICAMENTE UMA ESTRUTURA DE IF's, ONDE TRATA O CASO, FUNCIONA COM INT E CHAR
		{
			case 1: //CASO ESCOLHA SOMA
				if(linhasA == linhasB && colunasA == colunasB){ //GARANTE QUE AS MATRIZES SÃO DA MESMA ORDEM
					printf("\nVoce escolheu soma de matrizes\n\n");
					printf("Matriz A\n");
					for(int i = 0; i < linhasA; i++){ //PERCORRE AS LINHAS DA MATRIZ A
						for(int j = 0; j < colunasA; j++)//PERCORRE AS COLUNAS DA MATRIZ A
							printf("%d ", matrizA[i][j]);
						printf("\n");
					}
					printf("\nMatriz B\n");
					for(int i = 0; i < linhasB; i++){ //PERCORRE AS LINHAS DA MATRIZ B
						for(int j = 0; j < colunasB; j++)//PERCORRE AS COLUNAS DA MATRIZ B
							printf("%.0f ", matrizB[i][j]);
						printf("\n");
					}
					
					int matrizResultante[linhasA][colunasA]; //INICIALIZA A MATRIZ RESULTANTE
					
					for(int i = 0; i < linhasA; i++) //PERCORRE AS LINHAS DA MATRIZ A E B SIMULTANEAMENTE
						for(int j = 0; j < colunasA; j++)//PERCORRE AS COLUNAS DA MATRIZ A E B SIMULTANEAMENTE
							matrizResultante[i][j] = matrizA[i][j] + matrizB[i][j]; //SOMA OS NUMEROS CONTIDOS EM i,j DAS DUAS MATRIZES
				
				
					printf("\n\nMatriz Resultante\n");
					for(int i = 0; i < linhasA; i++){ //PERCORRE AS LINHAS DA MATRIZ RESULTANTE
						for(int j = 0; j < colunasA; j++)//PERCORRE AS COLUNAS DA MATRIZ RESULTANTE
							printf("%d ", matrizResultante[i][j]);
						printf("\n");
					}
				}
				else
					printf("\n AS MATRIZES NÃO POSSUEM A MESMA ORDEM!!");
				break;
				
			case 2: //CASO ESCOLHA SUBTRAÇÃO
				if(linhasA == linhasB && colunasA == colunasB){ //GARANTE QUE AS MATRIZES SÃO DA MESMA ORDEM
					printf("\nVoce escolheu subtracao de matrizes\n\n");
					printf("Matriz A\n");
					for(int i = 0; i < linhasA; i++){ //PERCORRE AS LINHAS DA MATRIZ A
						for(int j = 0; j < colunasA; j++)//PERCORRE AS COLUNAS DA MATRIZ A
							printf("%d ", matrizA[i][j]);
						printf("\n");
					}
					printf("\nMatriz B\n");
					for(int i = 0; i < linhasB; i++){ //PERCORRE AS LINHAS DA MATRIZ B
						for(int j = 0; j < colunasB; j++)//PERCORRE AS COLUNAS DA MATRIZ B
							printf("%.0f ", matrizB[i][j]);
						printf("\n");
					}
					
					int matrizResultante[linhasA][colunasA]; //INICIALIZA A MATRIZ RESULTANTE
					
					for(int i = 0; i < linhasA; i++) //PERCORRE AS LINHAS DA MATRIZ A E B SIMULTANEAMENTE
						for(int j = 0; j < colunasA; j++)//PERCORRE AS COLUNAS DA MATRIZ A E B SIMULTANEAMENTE
							matrizResultante[i][j] = matrizA[i][j] - matrizB[i][j]; //SUBTRAI OS NUMEROS CONTIDOS EM i,j DAS DUAS MATRIZES
				
				
					printf("\n\nMatriz Resultante\n");
					for(int i = 0; i < linhasA; i++){ //PERCORRE AS LINHAS DA MATRIZ RESULTANTE
						for(int j = 0; j < colunasA; j++)//PERCORRE AS COLUNAS DA MATRIZ RESULTANTE
							printf("%d ", matrizResultante[i][j]);
						printf("\n");
					}
				}
				else
					printf("\n AS MATRIZES NÃO POSSUEM A MESMA ORDEM!!");
				break;
				
			case 3: //CASO ESCOLHA MULTIPLICAÇÃO
				if(linhasA == colunasB){ //GARANTE QUE AS MATRIZES SÃO COMPATIVEIS
					printf("\nVoce escolheu multiplicacao de matrizes\n\n");
					printf("Matriz A\n");
					for(int i = 0; i < linhasA; i++){ //PERCORRE AS LINHAS DA MATRIZ A
						for(int j = 0; j < colunasA; j++)//PERCORRE AS COLUNAS DA MATRIZ A
							printf("%d ", matrizA[i][j]);
						printf("\n");
					}
					printf("\nMatriz B\n");
					for(int i = 0; i < linhasB; i++){ //PERCORRE AS LINHAS DA MATRIZ B
						for(int j = 0; j < colunasB; j++)//PERCORRE AS COLUNAS DA MATRIZ B
							printf("%.0f ", matrizB[i][j]);
						printf("\n");
					}
					
					int matrizResultante[linhasA][colunasB]; //INICIALIZA A MATRIZ RESULTANTE
					
					for(int i = 0; i < linhasA; i++) //PERCORRE AS LINHAS DA MATRIZ A E B SIMULTANEAMENTE
						for(int j = 0; j < colunasB; j++){//PERCORRE AS COLUNAS DA MATRIZ A E B SIMULTANEAMENTE
							int somatorio = 0;
							for(int x = 0; x < linhasB; x++)
								somatorio += matrizA[i][x] * matrizB[x][j]; //ACRESCENTA NO SOMATORIO A MULTIPLICAÇÃO DA MATRIZ A E DA MATRIZ B
							matrizResultante[i][j] = somatorio;
						}
				
					printf("\n\nMatriz Resultante\n");
					for(int i = 0; i < linhasA; i++){ //PERCORRE AS LINHAS DA MATRIZ RESULTANTE
						for(int j = 0; j < colunasB; j++)//PERCORRE AS COLUNAS DA MATRIZ RESULTANTE
							printf("%d ", matrizResultante[i][j]);
						printf("\n");
					}
				}
				else
					printf("\n AS MATRIZES NÃO SÃO COMPATIVEIS!!");
				break;
				
				
			case 4: //CASO ESCOLHA DIVISÃO
				if(linhasA == colunasB && linhasB == colunasB){ //GARANTE QUE AS MATRIZES SÃO COMPATIVEIS
					printf("\nVoce escolheu divisao de matrizes\n\n");
					printf("Matriz A\n");
					for(int i = 0; i < linhasA; i++){ //PERCORRE AS LINHAS DA MATRIZ A
						for(int j = 0; j < colunasA; j++)//PERCORRE AS COLUNAS DA MATRIZ A
							printf("%d ", matrizA[i][j]);
						printf("\n");
					}
					printf("\nMatriz B\n");
					for(int i = 0; i < linhasB; i++){ //PERCORRE AS LINHAS DA MATRIZ B
						for(int j = 0; j < colunasB; j++)//PERCORRE AS COLUNAS DA MATRIZ B
							printf("%.0f ", matrizB[i][j]);
						printf("\n");
					}
					
					float determinante = 0.0;

					//ENCONTRANDO O DETERMINANTE
				    for(int i = 0; i < 3; i++)
			        determinante += (matrizB[0][i] * (matrizB[1][(i+1)%3] * matrizB[2][(i+2)%3] - matrizB[1][(i+2)%3] * matrizB[2][(i+1)%3]));
				
				    printf("\nO determinante da matriz B e: %.1f\n", determinante);

					if(determinante != 0){
						
						float matrizInversa[3][3];
					    for(int i = 0; i < 3; i++)
					        for(int j = 0; j < 3; j++)
					            matrizInversa[i][j] = (((matrizB[(j+1)%3][(i+1)%3] * matrizB[(j+2)%3][(i+2)%3]) - (matrizB[(j+1)%3][(i+2)%3] * matrizB[(j+2)%3][(i+1)%3]))/ determinante);
						
						printf("\nMatriz inversa de B\n");
						for(int i = 0; i < linhasB; i++){ //PERCORRE AS LINHAS DA MATRIZ B
							for(int j = 0; j < colunasB; j++)//PERCORRE AS COLUNAS DA MATRIZ B
								printf("%.2f ", matrizInversa[i][j]);
							printf("\n");
						}
						
						float matrizResultante[linhasA][colunasB]; //INICIALIZA A MATRIZ RESULTANTE
						
						for(int i = 0; i < linhasA; i++) //PERCORRE AS LINHAS DA MATRIZ A E B SIMULTANEAMENTE
							for(int j = 0; j < colunasB; j++){//PERCORRE AS COLUNAS DA MATRIZ A E B SIMULTANEAMENTE
								float somatorio = 0.0;
								for(int x = 0; x < linhasB; x++)
									somatorio += matrizA[i][x] * matrizInversa[x][j]; //ACRESCENTA NO SOMATORIO A MULTIPLICAÇÃO DA MATRIZ A E DA MATRIZ INVERSA DE B
								matrizResultante[i][j] = somatorio;
							}
					
						printf("\n\nMatriz Resultante\n");
						for(int i = 0; i < linhasA; i++){ //PERCORRE AS LINHAS DA MATRIZ RESULTANTE
							for(int j = 0; j < colunasB; j++)//PERCORRE AS COLUNAS DA MATRIZ RESULTANTE
								printf("%.2f ", matrizResultante[i][j]);
							printf("\n");
						}
					}
					else
						printf("\n DETERMINANTE NAO PODE SER 0!");
				}
				else
					printf("\n AS MATRIZES NAO SAO COMPATIVEIS!!");
				break;
			default:
				printf("OPCAO INVALIDA");
				loop = 1;
		}
	}while(loop);
	return 0;
}
