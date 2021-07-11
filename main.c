#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "pilha.c" 


int main () {
	setlocale(LC_ALL,"Portuguese");
	
	int valor,elementos,i;
	Pilha *topo;
	
	topo = criar_pilha();
	
	printf("\nEndereco da pilha = %p\n",topo);
	
	printf("Digite a quantidade de elementos a ser inserido: ");
	scanf("%d",&elementos);
	
	while (i <= elementos-1){
	printf("\nDigite o valor a ser inserido: ");
	scanf("%d",&valor);
	inserir_pilha(topo,valor);
	i++;
}
	imprimir_pilha(topo);
	printf("\nEndereco da pilha = %p\n",topo);
}

