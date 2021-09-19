#include <stdio.h>
#include <stdlib.h>
//#include "myStack.h"

struct stackNode{
	int valor;
	struct stackNode *next;
};

void push(struct stackNode **head, int a);
void printStack(struct stackNode *head);
int isEmpty(struct stackNode *head);
int pop(struct stackNode **head);
void printMenu(void);

int main(){

	struct stackNode *head = NULL;
	int choice, value;
	
	do{
	
		printMenu();
		scanf("%d",&choice);
		
		if(choice == 1){
			printf("Que valor voce quer inserir?\n");
			scanf("%d",&value);
			push(&head,value);
			printStack(head);
		}else if(choice == 2){
			if(isEmpty(head)){
				printf("Lista vazia. Nao podemos retirar valores\n");
				
			}else{
				printf("O valor retirado foi %d\n", pop(&head));			printStack(head);
			}
		}else if(choice == 3){
			printf("Adios!\n");
      free(head);
		
		}else{
			printf("Opcao invalida\n");
		}
	
	}while(choice != 3);
	
	return 0;

} 

void push(struct stackNode **head, int a){

	struct stackNode *novo = (struct stackNode *)malloc(sizeof(struct stackNode));
	if(novo !=NULL){ //verifica se o espaco de memoria foi reservado
		novo->valor = a;
		novo->next = *head;
		*head = novo;
	}else{
		printf("Nao existe memoria disponivel\n");
	}

}

void printStack(struct stackNode *head){
	
	if(head == NULL){
	
		printf("Lista vazia\n");
	}else{
		struct stackNode *aux = head;
		while(aux !=NULL){
			printf("%d-- ", aux->valor);
			aux= aux->next;
		}		
		printf("NULL \n");
	}

}

int isEmpty(struct stackNode *head){
	return head == NULL;
}

int pop(struct stackNode **head){
	struct stackNode *temp;
	int aux;
	
	temp = *head;
	aux = (*head)->valor;
	*head = (*head)->next;
	free(temp); //desalocando o espaco de memoria usado
		
	return aux;
}

void printMenu(void){

	printf("Digite uma escolha\n"
		"1 para colocar um valor na pilha\n"
		"2 para retira um valor da pilha\n"
		"3 para finalizar o programa\n");

}
