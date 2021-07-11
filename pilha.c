#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "header.h"

Pilha *criar_pilha(){
	
	Pilha *auxtopo;
	auxtopo = malloc(sizeof(Pilha));
	
	if(auxtopo != NULL)
		*auxtopo = NULL;
		
		return auxtopo;
}

int inserir_pilha(Pilha *topo, int valor){
	
	if (topo == NULL)
		return 0;
		
	Valor *auxtopo;
	auxtopo = malloc(sizeof(Valor));
	
	if (auxtopo == NULL)
		return 0;
		
	(*auxtopo).elemento = valor;
	auxtopo->prox = (*topo);
	*topo = auxtopo;	
	
}

int remover_pilha (Pilha *topo){
	
	if(topo == NULL)
		return 0;
		
	Valor *auxtopo = *topo;
	
	*topo = auxtopo->prox;
	free(auxtopo);
		
}

int imprimir_pilha (Pilha *topo){
	
	if ((topo == NULL) || (*topo == NULL))
		return 0;
		
	Valor *auxtopo = *topo;
	
	while (auxtopo != NULL){
		printf("\n- %d \n",auxtopo->elemento);
		printf("- Endereco: %p",&*auxtopo);
		auxtopo = auxtopo->prox;
	}
	
	return 0;
}
