//Trabalho 01 de Estrutura de Dados I
//Marcelo Alves Barbosa - 123708

//Questão 01

    i = 0
    temp = vetor[0] = 0
    vetor[0] = vetor[9-0] = vetor[9] = 9
    vetor[9] = temp = 0
    i = i + 1 = 1

    i = 1
    temp = vetor[1] = 1
    vetor[1] = vetor[9-1] = vetor[8] = 8
    vetor[8] = temp = 1
    i = i + 1 = 2

    i = 2
    temp = vetor[2] = 2
    vetor[2] = vetor[9-2] = vetor[7] = 7
    vetor[7] = temp = 2
    i = i + 1 = 3

    i = 3
    temp = vetor[3] = 3
    vetor[3] = vetor[9-3] = vetor[6] = 6
    vetor[6] = temp = 3
    i = i + 1 = 4

    i = 4
    temp = vetor[4] = 4
    vetor[4] = vetor[9-4] = vetor[5] = 5
    vetor[5] = temp = 4
    i = i + 1 = 5

    i = 5
    temp = vetor[5] = 5
    vetor[5] = vetor[9-5] = vetor[4] = 4
    vetor[4] = temp = 5 
    i = i + 1 = 6

    i = 6
    temp = vetor[6] = 6
    vetor[6] = vetor[9-6] = vetor[3] = 3
    vetor[3] = temp = 6
    i = i + 1 = 7

    i = 7
    temp = vetor[7] = 7
    vetor[7] = vetor[9-7] = vetor[2] = 2
    vetor[2] = temp = 7
    i = i + 1 = 8

    i = 8
    temp = vetor[8] = 8
    vetor[8] = vetor[9-8] = vetor[1] = 1
    vetor[1] = temp = 8
    i = i + 1 = 9

    i = 9
    temp = vetor[9] = 9
    vetor[9] = vetor[9-9] = vetor[0] = 0
    vetor[0] = temp = 9
    i = i + 1 = 10

    vetor[10] = {9,8,7,6,5,4,3,2,1,0}

//Questão 02

    #include <stdio.h>
    #include <stdlib.h>

        int ordenado(int vetor[], int tamanho) {
            for (int i = 0; i < tamanho - 1; i++) {
                if (vetor[i] > vetor[i + 1]) {
                    return 0;
                }
            }
        return 1; 
        }

    int main() {
        int n;
        printf("Digite o tamanho do vetor: ");
            scanf("%d", &n);

        if (n <= 0) {
            printf("Tamanho inválido do vetor.\n");
            return 1;
        }

        int vetor[n];
        printf("Digite os elementos do vetor:\n");
        for (int i = 0; i < n; i++) {
            scanf("%d", &vetor[i]);
        }

        if (ordenado(vetor, n)) {
            printf("Sim\n");
        } else {
            printf("Nao\n");
        }

        return 0;
    }

//Questão 03

#include <stdio.h>
#include <stdlib.h>

void imprimirTabuleiro(char tabuleiro[3][3]) {
    printf("\n  1 2 3\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("%c ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int movimentoValido(int linha, int coluna, char tabuleiro[3][3]) {
    if (linha < 1 || linha > 3 || coluna < 1 || coluna > 3)
        return 0;
    if (tabuleiro[linha - 1][coluna - 1] == ' ')
        return 1;
    return 0;
}

int main() {
    char tabuleiro[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    int linha, coluna;
    char jogador = 'X';

    printf("Bem-vindo ao Jogo da Velha!\n");

    for (int jogada = 1; jogada <= 9; jogada++) {
        imprimirTabuleiro(tabuleiro);

        printf("Jogador %c, digite a linha (1 a 3) e a coluna (1 a 3) para sua jogada: ", jogador);
        scanf("%d %d", &linha, &coluna);

        while (!movimentoValido(linha, coluna, tabuleiro)) {
            printf("Movimento inválido. Por favor, insira uma linha e coluna válidas: ");
            scanf("%d %d", &linha, &coluna);
        }

        tabuleiro[linha - 1][coluna - 1] = jogador;

        jogador = (jogador == 'X') ? 'O' : 'X';
    }

    imprimirTabuleiro(tabuleiro);
    printf("Empate! O jogo terminou.\n");

    return 0;
}


//Questão 04

#include <stdio.h>
#include <stdlib.h>

int main() {
    int matriz[10][10];
    int linha_maior, coluna_maior;
    int maior = 0;

    printf("Digite os valores da matriz 10x10:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
                linha_maior = i;
                coluna_maior = j;
            }
        }
    }
    printf("O maior valor é %d, localizado na linha %d e coluna %d.\n", maior, linha_maior + 1, coluna_maior + 1);

    return 0;
}

//Questão 05

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 50

struct Banda {
    char nome[MAX_LENGTH];
    char tipo[MAX_LENGTH];
    int integrantes;
    int ranking;
};

int main() {
    struct Banda minhas_bandas[MAX_LENGTH];

    strcpy(minhas_bandas[0].nome, "HIM");
    strcpy(minhas_bandas[0].tipo, "Gothic Metal");
    minhas_bandas[0].integrantes = 5;
    minhas_bandas[0].ranking = 1;

    strcpy(minhas_bandas[1].nome, "Deftones");
    strcpy(minhas_bandas[1].tipo, "Alternative Metal");
    minhas_bandas[1].integrantes = 5;
    minhas_bandas[1].ranking = 2;

    strcpy(minhas_bandas[2].nome, "Sepultura");
    strcpy(minhas_bandas[2].tipo, "Thrash Metal");
    minhas_bandas[2].integrantes = 4;
    minhas_bandas[2].ranking = 3;

    strcpy(minhas_bandas[3].nome, "Death");
    strcpy(minhas_bandas[3].tipo, "Death Metal");
    minhas_bandas[3].integrantes = 4;
    minhas_bandas[3].ranking = 4;

    strcpy(minhas_bandas[4].nome, "Septicflesh");
    strcpy(minhas_bandas[4].tipo, "Symphonic Death Metal");
    minhas_bandas[4].integrantes = 5;
    minhas_bandas[4].ranking = 5;

    for (int i = 0; i < 5; i++) {
        printf("Banda: %s\n", minhas_bandas[i].nome);
        printf("Tipo de música: %s\n", minhas_bandas[i].tipo);
        printf("Número de integrantes: %d\n", minhas_bandas[i].integrantes);
        printf("Posição no ranking: %d\n\n", minhas_bandas[i].ranking);
    }

    return 0;
}

//Questão 06
    A estrutura de dados mais adequada para utilizar neste caso é a fila de prioridade, em vez da fila do tipo FIFO (First-In-First-Out). Isso permite gerenciar a ordem de execução de processos e threads em um sistema operacional, garantindo um melhor gerenciamento dos recursos. Nesta abordagem, os elementos são organizados com base em suas prioridades, garantindo que aqueles de maior prioridade sejam processados primeiro. Essa escolha é essencial para esse cenário.

//Questão 07
    A estrutura de dados mais adequada para se usar nesse caso vai ser a da pilha, por armazenar os elementos de forma sequencial e ser uma estrutura linear que utiliza do princípio LIFO, o qual, o ultimo elemento adicionado é o primeiro a ser removido, sendo ideial para desfazer/refazer ações.

//Questão 08
    #include <stdio.h>
    #include <stdlib.h>

    void valores(int ptr, int ptr2) {
        int temp = ptr;
        ptr = ptr2;
        ptr2 = temp;
    }

    int main() {
        int a = 10;
        int b = 20;

        printf("Valores antes da troca:\n");
        printf("a = %d, b = %d\n", a, b);

        valores(&a, &b);

        printf("Valores depois da troca:\n");
        printf("a = %d, b = %d\n", b, a);

        return 0;
    }
