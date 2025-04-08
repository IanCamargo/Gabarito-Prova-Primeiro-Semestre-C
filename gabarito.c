#include <stdio.h>
#include <stdlib.h>

#ifdef _WIN32
#define CLEAR "cls"
#else
#define CLEAR "clear"
#endif

int main(void) {
    int opcao = 0;

    do {
        // Exibe o menu principal
        printf("\n+-+-+-+-+- Bem Vindo ao Gabarito da Prova do Primeiro Semestre +-+-+-+-+-\n\n");
        printf("1 - Par ou Impar\n");
        printf("2 - IMC\n");
        printf("3 - Triangulo\n");
        printf("4 - Verificar 5 Numeros\n");
        printf("5 - Sair\n\n");
        printf("Escolha um exercicio: ");
        scanf("%d", &opcao);
        system(CLEAR);

        switch(opcao) {
            case 1: {
                int repetir = 1;
                do {
                    int numero;
                    printf("\n--- Exercicio 1 - Par ou Impar ---\n");
                    printf("Digite um numero inteiro: ");
                    scanf("%d", &numero);

                    if (numero % 2 == 0)
                        printf("O numero %d eh par.\n\n", numero);
                    else
                        printf("O numero %d eh impar.\n\n", numero);

                    printf("Digite 1 para testar novamente ou 0 para voltar ao menu: ");
                    scanf("%d", &repetir);
                    system(CLEAR);
                } while(repetir == 1);
                break;
            }
            case 2: {
                int repetir = 1;
                do {
                    float peso, altura, imc;
                    printf("\n--- Exercicio 2 - IMC ---\n");
                    printf("Digite o peso em KG: ");
                    scanf("%f", &peso);
                    printf("Digite a altura em Metros: ");
                    scanf("%f", &altura);

                    imc = peso / (altura * altura);

                    if (imc < 18.5)
                        printf("Seu IMC eh %.2f e voce esta abaixo do peso.\n\n", imc);
                    else if (imc >= 18.5 && imc <= 24.9)
                        printf("Seu IMC eh %.2f e voce esta com o peso normal.\n\n", imc);
                    else if (imc >= 25 && imc <= 29.9)
                        printf("Seu IMC eh %.2f e voce esta com sobrepeso.\n\n", imc);
                    else
                        printf("Seu IMC eh %.2f e voce esta com obesidade.\n\n", imc);

                    printf("Digite 1 para testar novamente ou 0 para voltar ao menu: ");
                    scanf("%d", &repetir);
                    system(CLEAR);
                } while(repetir == 1);
                break;
            }
            case 3: {
                int repetir = 1;
                do {
                    int lado1, lado2, lado3;
                    printf("\n--- Exercicio 3 - Triangulo ---\n");
                    printf("Digite o lado 1: ");
                    scanf("%d", &lado1);
                    printf("Digite o lado 2: ");
                    scanf("%d", &lado2);
                    printf("Digite o lado 3: ");
                    scanf("%d", &lado3);

                    if (lado1 < (lado2 + lado3) || lado2 < (lado1 + lado3) || lado3 < (lado1 + lado2))
                        printf("Eh possivel formar um triangulo.\n\n");
                    else
                        printf("Nao eh possivel formar um triangulo.\n\n");

                    printf("Digite 1 para testar novamente ou 0 para voltar ao menu: ");
                    scanf("%d", &repetir);
                    system(CLEAR);
                } while(repetir == 1);
                break;
            }
            case 4: {
                int repetir = 1;
                do {
                    int n1, n2, n3, n4, n5;
                    int contadorPar = 0, contadorImpar = 0;
                    int maiorPar = 0;
                    int menorImpar = 0;
                    int primeiroImpar = 1;

                    printf("\n--- Exercicio 4 - Verificar 5 Numeros ---\n");
                    printf("Digite o primeiro numero: ");
                    scanf("%d", &n1);
                    printf("Digite o segundo numero: ");
                    scanf("%d", &n2);
                    printf("Digite o terceiro numero: ");
                    scanf("%d", &n3);
                    printf("Digite o quarto numero: ");
                    scanf("%d", &n4);
                    printf("Digite o quinto numero: ");
                    scanf("%d", &n5);

                    // Verificacao do primeiro numero
                    if (n1 % 2 == 0) {
                        contadorPar++;
                        maiorPar = n1;
                    } else {
                        contadorImpar++;
                        menorImpar = n1;
                        primeiroImpar = 0;
                    }

                    // Verificacao do segundo numero
                    if (n2 % 2 == 0) {
                        contadorPar++;
                        if (contadorPar == 1 || n2 > maiorPar)
                            maiorPar = n2;
                    } else {
                        contadorImpar++;
                        if (primeiroImpar) {
                            menorImpar = n2;
                            primeiroImpar = 0;
                        } else if (n2 < menorImpar)
                            menorImpar = n2;
                    }

                    // Verificacao do terceiro numero
                    if (n3 % 2 == 0) {
                        contadorPar++;
                        if (contadorPar == 1 || n3 > maiorPar)
                            maiorPar = n3;
                    } else {
                        contadorImpar++;
                        if (primeiroImpar) {
                            menorImpar = n3;
                            primeiroImpar = 0;
                        } else if (n3 < menorImpar)
                            menorImpar = n3;
                    }

                    // Verificacao do quarto numero
                    if (n4 % 2 == 0) {
                        contadorPar++;
                        if (contadorPar == 1 || n4 > maiorPar)
                            maiorPar = n4;
                    } else {
                        contadorImpar++;
                        if (primeiroImpar) {
                            menorImpar = n4;
                            primeiroImpar = 0;
                        } else if (n4 < menorImpar)
                            menorImpar = n4;
                    }

                    // Verificacao do quinto numero
                    if (n5 % 2 == 0) {
                        contadorPar++;
                        if (contadorPar == 1 || n5 > maiorPar)
                            maiorPar = n5;
                    } else {
                        contadorImpar++;
                        if (primeiroImpar) {
                            menorImpar = n5;
                            primeiroImpar = 0;
                        } else if (n5 < menorImpar)
                            menorImpar = n5;
                    }

                    printf("\nNumeros pares digitados: %d\n\n", contadorPar);
                    printf("Numeros impares digitados: %d\n\n", contadorImpar);
                    if (contadorPar == 0)
                        printf("Nenhum numero par foi digitado.\n\n");
                    else
                        printf("O maior numero par e: %d\n\n", maiorPar);

                    if (contadorImpar == 0)
                        printf("Nenhum numero impar foi digitado.\n\n");
                    else
                        printf("O menor numero impar e: %d\n\n", menorImpar);

                    printf("Digite 1 para testar novamente ou 0 para voltar ao menu: ");
                    scanf("%d", &repetir);
                    system(CLEAR);
                } while (repetir == 1);
                break;
            }
            case 5: {
                printf("\nSaindo do programa...\n\n");
                break;
            }
            default: {
                printf("\nOpcao invalida! Tente novamente.\n\n");
                break;
            }
        }
    } while (opcao != 5);

    return 0;
}
