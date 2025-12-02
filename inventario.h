#ifndef INVENTARIO_H
#define INVENTARIO_H

#define MAX_ITENS 100

typedef struct {
    char nome[50];
    int tipo;    // 1 = alimento, 2 = arma, 3 = ferramenta
    int prioridade;
} Item;

typedef struct {
    Item itens[MAX_ITENS];
    int qtd;
} Inventario;

void inicializarInventario(Inventario *inv);
void adicionarItem(Inventario *inv, Item item);
void removerItem(Inventario *inv, char nome[]);
void listarInventario(Inventario *inv);

#endif
