#include <string.h>
#include <stdio.h>
#include "busca.h"

int buscaSequencial(Inventario *inv, char nome[]) {
    for (int i = 0; i < inv->qtd; i++) {
        if (strcmp(inv->itens[i].nome, nome) == 0)
            return i;
    }
    return -1;
}

int buscaBinariaIterativa(Item arr[], int tamanho, char nome[]) {
    int inicio = 0, fim = tamanho - 1;
    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;
        int cmp = strcmp(arr[meio].nome, nome);
        if (cmp == 0) return meio;
        if (cmp < 0) inicio = meio + 1;
        else fim = meio - 1;
    }
    return -1;
}

int buscaBinariaRecursiva(Item arr[], int inicio, int fim, char nome[]) {
    if (inicio > fim) return -1;

    int meio = (inicio + fim) / 2;
    int cmp = strcmp(arr[meio].nome, nome);

    if (cmp == 0) return meio;
    if (cmp < 0) return buscaBinariaRecursiva(arr, meio + 1, fim, nome);
    else return buscaBinariaRecursiva(arr, inicio, meio - 1, nome);
}
