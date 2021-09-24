#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stackNode{
    int value;
    struct stackNode *next;
};

//criando protótipo dos métodos e variaveis.
void push(struct stackNode **head, int new_value);
int pop(struct stackNode **head);
int isEmptyStack(struct stackNode *head);
int seekTop(struct stackNode *head);
int getAbs(struct stackNode *head);
void printStack(struct stackNode *head);

int main(void){
    struct stackNode *head = NULL;
    char action[4];
    int extractValues=0;
    int finalValue;
    int valueAbs;
    int valueSeekTop;

    while(1){
        // scanf(" %s", &action[11]);
        fgets(action, 11, stdin);
        // printf("%s\n", action);
        
        // gets(action);

        // printf("%d", strncmp(action, "pop", strlen("pop")));

        if(strncmp(action, "pop", strlen("pop")) == 0 || strncmp(action, "abs", strlen("abs")) == 0){
            // printf("Entramos no primeiro IF\n");
            //se a pilha estiver vazia, retorna 0
            printf("%d", isEmptyStack(head));
            if(isEmptyStack(head) == 1){
                printf("A lista aparentemente está vazia");
                return 0;
            }else{
                if(strncmp(action, "pop", strlen("pop")) == 0){
                    pop(&head);
                    valueSeekTop = seekTop(head);
                    printf("%d\n", valueSeekTop);
                }
                if(strncmp(action, "abs", strlen("abs")) == 0){
                    valueAbs = getAbs(head);
                    printf("%d\n", valueAbs);
                }
            }
        }else{
            extractValues = 0;
            printf("Entramos no if do Push\n");
            //se caiu no else é um push
            //fazendo extração do inteiro na variavel
            for(int i = 0; i < 11; i++){
                if (isdigit(action[i])){
                    extractValues += (int)(action[i])-'0';
                    extractValues *= 10;
                }
            }
            finalValue = extractValues/10;

            //Empurrando um novo valor na pilha
            push(&head, finalValue);
        }
        printStack(head);
    }

}

void push(struct stackNode **head, int new_value){
    
    //alocando memória para novo nó da pilha baseado no tamanho da struct pré-definida.
    struct stackNode *new = (struct stackNode *)malloc(sizeof(struct stackNode));

    if(new != NULL){
        new->value = new_value;
        new->next = *head;
        *head = new;
    }
}

int isEmptyStack(struct stackNode *head){
    // printf("Entramos no isEmpty");
    return head == NULL;
}

int pop(struct stackNode **head){
    // printf("Tentou executar o pop");
    struct stackNode *temp;
    int aux;

    temp = *head;
    aux = (*head)->value;
    *head = (*head)->next;
    free(temp);

    return aux;
}

int seekTop(struct stackNode *head){
    int value_top = head->value;
    return value_top;
}

int getAbs(struct stackNode *head){
    struct stackNode *aux = head;

    int less = head;
    int more = head;
    int diff = 0;

    while(aux != NULL){
        if(aux->value <= less){
            less = aux->value;
            aux = aux->next;
            // printf("%d\n", less);
        }else if(aux->value >= more){
            more = aux->value;
            aux = aux->next;
            // printf("%d\n", more);
        }else{
            aux = aux->next;
        }
    }

    printf("%d valor do more\n", more);
    printf("%d valor do less\n", less);

    diff = (more - less)*-1;
    return diff;
}

void printStack(struct stackNode *head){
	
	if(head == NULL){
		printf("Lista vazia\n");
	}else{
		struct stackNode *aux = head;
		while(aux !=NULL){
			printf("%d-- ", aux->value);
			aux= aux->next;
		}		
		printf("NULL \n");
	}

}