#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definição da estrutura de um nodo
struct Nodo {
    int dado; // Dado armazenado no nodo
    struct Nodo *proximo; // Ponteiro para o próximo nodo
};

typedef struct Nodo nodo; // Definindo um novo nome para a estrutura

int tam; // Variável global para armazenar o tamanho da fila

// Declaração das funções
void mostraTamanho();
void inicia(nodo *PF, nodo *UF);
int vazia(nodo *PF);
nodo *aloca();
void exibe(nodo *PF);
void libera(nodo *PF, nodo *UF);
void peek(nodo *PF);
void queue(nodo *PF, nodo *UF);
nodo *dequeue(nodo *PF, nodo *UF);

// Definição da estrutura da pilha
#define MAX 100

typedef struct {
    int topo;
    char item[MAX];
} Pilha;

void inicializaPilha(Pilha *pilha) {
    pilha->topo = -1;
}

int pilhaVazia(Pilha *pilha) {
    return pilha->topo == -1;
}

int pilhaCheia(Pilha *pilha) {
    return pilha->topo == MAX - 1;
}

void empilha(Pilha *pilha, char x) {
    if (pilhaCheia(pilha)) {
        printf("Pilha cheia\n");
    } else {
        pilha->topo++;
        pilha->item[pilha->topo] = x;
    }
}

char desempilha(Pilha *pilha) {
    if (pilhaVazia(pilha)) {
        printf("Pilha vazia\n");
        return '\0';
    } else {
        char x = pilha->item[pilha->topo];
        pilha->topo--;
        return x;
    }
}

int verificaPalindromo(char *str) {
    Pilha pilha;
    inicializaPilha(&pilha);
    int len = strlen(str);

    // Empilha todos os caracteres da string
    for (int i = 0; i < len; i++) {
        empilha(&pilha, str[i]);
    }

    // Desempilha e compara com a string original
    for (int i = 0; i < len; i++) {
        if (str[i] != desempilha(&pilha)) {
            return 0; // Não é palíndromo
        }
    }

    return 1; // É palíndromo
}

int main() {
    // Alocação de memória para os ponteiros de início e fim da fila
    nodo *PF = (nodo *) malloc(sizeof(nodo));
    nodo *UF = (nodo *) malloc(sizeof(nodo));
    inicia(PF, UF); // Inicializa a fila
    nodo *temp; // Ponteiro temporário para operações de dequeue

    // Verifica se a memória foi alocada corretamente
    if ((!PF) || (!UF)) {
        printf("Sem memoria disponivel!\n");
        exit(1); // Sai do programa se não houver memória disponível
    } else {
        int op; // Variável para armazenar a opção do usuário
        do {
            // Menu de opções
            printf("Escolha a opcao\n");
            printf("1. Zerar FILA\n");
            printf("2. Exibir FILA\n");
            printf("3. QUEUE\n");
            printf("4. DEQUEUE\n");
            printf("5. PEEK\n");
            printf("6. Exibir o tamanho\n");
            printf("7. Verificar Palíndromo\n");
            printf("0. Sair\n");
            printf("Opcao: ");
            scanf("%d", &op); // Lê a opção do usuário

            // Executa a operação escolhida pelo usuário
            switch(op) {
                case 0:
                    libera(PF, UF); // Libera a memória da fila
                    break;
                case 1:
                    libera(PF, UF); // Libera a memória da fila
                    inicia(PF, UF); // Inicializa a fila novamente
                    break;
                case 2:
                    exibe(PF); // Exibe os elementos da fila
                    break;
                case 3:
                    queue(PF, UF); // Adiciona um elemento à fila
                    break;
                case 4:
                    temp = dequeue(PF, UF); // Remove um elemento da fila
                    if(temp != NULL) {
                        printf("Nodo retirado = %d", temp->dado); // Exibe o elemento removido
                    }
                    break;
                case 5:
                    peek(PF); // Exibe o primeiro elemento da fila
                    break;
                case 6:
                    mostraTamanho(); // Exibe o tamanho da fila
                    break;
                case 7: {
                    char str[MAX];
                    printf("Digite uma string: ");
                    scanf("%s", str);
                    if (verificaPalindromo(str)) {
                        printf("A string é um palíndromo.\n");
                    } else {
                        printf("A string não é um palíndromo.\n");
                    }
                    break;
                }
                default:
                    printf("Opcao invalida.\n"); // Mensagem para opção inválida
            }
        } while(op); // Repete o loop até o usuário escolher sair
        free(PF); // Libera a memória do ponteiro de início da fila
        free(UF); // Libera a memória do ponteiro de fim da fila
    }
    return 0;
}

// Inicializa a fila
void inicia(nodo *PF, nodo *UF) {
    PF->proximo = NULL; // Define o próximo nodo como NULL
    UF->proximo = NULL; // Define o próximo nodo como NULL
    tam = 0; // Define o tamanho da fila como 0
}

// Exibe o tamanho da fila
void mostraTamanho() {
    if(tam == 0) {
        printf("Fila vazia\n");
    } else {
        printf("A fila tem %d nodos.\n", tam);
    }
}

// Verifica se a fila está vazia
int vazia(nodo *PF) {
    if(PF->proximo == NULL)
        return 1; // Retorna 1 se a fila estiver vazia
    else
        return 0; // Retorna 0 se a fila não estiver vazia
}

// Aloca memória para um novo nodo
nodo *aloca() {
    nodo *novo = (nodo *) malloc(sizeof(nodo));
    if(!novo) {
        printf("Sem memoria disponivel!\n");
        exit(1); // Sai do programa se não houver memória disponível
    } else {
        printf("Novo elemento: ");
        scanf("%d", &novo->dado); // Lê o dado do novo nodo
        return novo;
    }
}

// Exibe os elementos da fila
void exibe(nodo *PF) {
    if(vazia(PF)) {
        printf("FILA vazia!\n");
    } else {
        nodo *tmp;
        tmp = PF->proximo; // Ponteiro temporário para percorrer a fila
        int cont = 1; // Contador para a ordem dos elementos
        printf("ORDEM\tFILA:\n");
        while(tmp != NULL) {
            printf("%d >\t%5d\n", cont, tmp->dado); // Exibe a ordem e o dado do nodo
            tmp = tmp->proximo; // Avança para o próximo nodo
            cont++;
        }
    }
    printf("\n");
}

// Libera a memória de todos os nodos da fila
void libera(nodo *PF, nodo *UF) {
    if(!vazia(PF)) {
        nodo *atual;
        while(PF->proximo != NULL) {
            atual = PF->proximo; // Ponteiro para o nodo atual
            PF->proximo = atual->proximo; // Avança para o próximo nodo
            free(atual); // Libera a memória do nodo atual
        }
        UF->proximo = NULL; // Define o próximo nodo do fim como NULL
    }
    tam = 0; // Define o tamanho da fila como 0
}

// Exibe o primeiro elemento da fila
void peek(nodo *PF) {
    if(vazia(PF)) {
        printf("FILA vazia!\n\n");
    } else {
        nodo *temp;
        temp = PF->proximo; // Ponteiro para o primeiro nodo
        printf("Primeiro nodo da fila: %5d\n", temp->dado);
    }
}

// Adiciona um novo nodo à fila
void queue(nodo *PF, nodo *UF) {
    nodo *novo = aloca(); // Aloca memória para o novo nodo
    novo->proximo = NULL; // Define o próximo nodo como NULL
    nodo *temp;
    if(vazia(PF)) {
        PF->proximo = novo; // Se a fila estiver vazia, o novo nodo é o primeiro
    } else {
        temp = UF->proximo; // Ponteiro para o último nodo
        temp->proximo = novo; // O último nodo aponta para o novo nodo
    }
    UF->proximo = novo; // O novo nodo é o último da fila
    tam++; // Incrementa o tamanho da fila
}

// Remove o primeiro nodo da fila
nodo *dequeue(nodo *PF, nodo *UF) {
    if(vazia(PF)) {
        printf("A FILA ja esta vazia.\n\n");
        return NULL; // Retorna NULL se a fila estiver vazia
    } else {
        nodo *temp = PF->proximo; // Ponteiro para o primeiro nodo
        PF->proximo = temp->proximo; // Avança para o próximo nodo
        if(vazia(PF)) {
            printf("\nA FILA esvaziou.\n\n");
            UF->proximo = NULL; // Define o próximo nodo do fim como NULL se a fila estiver vazia
        }
        tam--; // Decrementa o tamanho da fila
        return temp; // Retorna o nodo removido
    }
}