#include <stdio.h>
#include <string.h>
#include "inventario.h"

void inicializarInventario(Inventario *inv) {
    inv->qtd = 0;
}

void adicionarItem(Inventario *inv, Item item) {
    if (inv->qtd < MAX_ITENS) {
        inv->itens[inv->qtd] = item;
        inv->qtd++;
        printf("Item '%s' adicionado!\n", item.nome);
    } else {
        printf("Inventário cheio!\n");
    }
}

void removerItem(Inventario*inv, char nome[]) {
    for (int i = 0; i < inv->qtd; i++) {
        if (strcmp(inv->itens[i].nome, nome) == 0) {
            inv->itens[i] = inv->itens[inv->qtd - 1];
            inv->qtd--;
            printf("Item '%s' removido!\n", nome);
            return;
        }
    }
    printf("Item não encontrado!\n");
}

void listarInventario(Inventario*inv) {
    printf("\nItens do inventário:\n");
    for (int i = 0; i < inv->qtd; i++) {
        printf("%d - %s (tipo %d, prioridade %d)\n",
               i, inv->itens[i].nome, inv->itens[i].tipo, inv->itens[i].prioridade);
    }
}
