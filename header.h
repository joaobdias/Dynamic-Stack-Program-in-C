typedef struct valor {
	
	int elemento;
	struct valor *prox;
	
} Valor;

typedef Valor *Pilha;

Pilha *criar_pilha();
int inserir_pilha(Pilha *topo, int valor);
int remover_pilha (Pilha *topo);
int imprimir_pilha (Pilha *topo);
