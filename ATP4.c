#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct ContaBancaria {
    int numeroConta;
    char nomeTitular[100];
    float saldo;
    char tipoConta[20];
};


void depositar(struct ContaBancaria *conta, float valor) {
   int i;
    conta[i].saldo += valor;
    printf("Depósito de %.2f realizado com sucesso.\n", valor);
}

void sacar(struct ContaBancaria *conta, float valor) {
    int i;
    if (valor > conta[i].saldo) {
        printf("Saldo insuficiente para saque.\n");
    } else {
        conta->saldo -= valor;
        printf("Saque de %.2f realizado com sucesso.\n", valor);
    }
}

void imprimirSaldo(struct ContaBancaria conta) {
    printf("Saldo atual: %.2f\n", conta.saldo);
}

int main() {
   setlocale(LC_ALL,"");
    struct ContaBancaria minhaConta;
    int opcao;
    float valor;

    do {
        printf("\n======= Menu =======\n");
        printf("1. Depositar\n");
        printf("2. Sacar\n");
        printf("3. Verificar Saldo\n");
        printf("4. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o valor para depositar: ");
                scanf("%f", &valor);
                depositar(&minhaConta, valor);
                break;
            case 2:
                printf("Digite o valor para sacar: ");
                scanf("%f", &valor);
                sacar(&minhaConta, valor);
                break;
            case 3:
                imprimirSaldo(minhaConta);
                break;
            case 4:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
                break;
        }
    } while (opcao != 4);

    return 0;
}