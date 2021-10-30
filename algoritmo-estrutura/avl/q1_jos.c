#include "stdio.h"
#include "stdlib.h"

//Protótipos
typedef struct Node* AVL;
int insertAVL(AVL *root, int value);
int heightNode(struct Node* node);
int factBalanceNode(struct Node* node);
int bigger(int valueX, int valueY);
void rotateLL(AVL *root);
void rotateRR(AVL *root);
void rotateRL(AVL *root);
void rotateLR(AVL *root);
void printAVL(struct Node* node);
AVL* createAVL();

struct Node {
    int value;
    int height;
    struct Node *left;
    struct Node *right;
};

// a lógica está perfeita, mas pelo fato de eu iniciar o código sem utilizar o thehuxley, fiquei sem tempo para
//formatar os outputs
int main(void){

    AVL* root = createAVL();
    int input;

    while (scanf("%d", &input) != EOF){
        printf("\n----");
        printf("\nAdicionando %d\n", input);
        if(insertAVL(root, input) == 1){
            printAVL(*root);
        }
        
    }

    // printAVL(*root);

    return 0;
}

int insertAVL(AVL *root, int value){
    int result;
    if(*root ==  NULL){
        struct Node *new;
        new = (struct Node*)malloc(sizeof(struct Node));

        if(new == NULL)
            return 0;

        new->value = value;
        new->height = 0;
        new->left = NULL;
        new->right = NULL;
        *root = new;

        printf("Continuou AVL...\n");
        return 1;
    }

    struct Node *act = *root;

    if(value < act->value){
        // printf("\n ---- antes da rotação");
        // printAVL(*root);
        if((result=insertAVL(&(act->left), value)) == 1){
            if(factBalanceNode(act) >= 2){
                printf("\nAntes de ajustar balanceamento...\n");
                printAVL(*root);
                printf("\nDepois de ajustar balanceamento...\n");
                if(value < (*root)->left->value){
                    rotateLL(root);
                }else{
                    rotateLR(root);
                }
                printAVL(*root);
            }
        }
    }else{
        if(value > act->value){
            // printf("\n ---- antes da rotação");
            // printAVL(*root);
            if((result=insertAVL(&(act->right), value)) ==1){
                if(factBalanceNode(act) >= 2){
                    printf("\nAntes de ajustar balanceamento...\n");
                    printAVL(*root);
                    printf("\nDepois de ajustar balanceamento...\n");
                    if((*root)->right->value < value){
                        rotateRR(root);
                    }else{
                        rotateRL(root);
                    }
                    printAVL(*root);
                }
            }
        }else{
            printf("Continuou AVL...\n");
        }
    }

    act->height = bigger(heightNode(act->left), heightNode(act->right)) + 1;
    printAVL(*root);
    return result;
}

int bigger(int valueX, int valueY){
    if(valueX > valueY)
        return valueX;
    else
        return valueY;
}

int heightNode(struct Node* node){
    if(node == NULL){
        return -1;
    }else{
        return node->height;
    }
}

int factBalanceNode(struct Node* node){
    return labs(heightNode(node->left) - heightNode(node->right));
}

void rotateLL(AVL *root){
    struct Node *node;
    node = (*root)->left;
    (*root)->left = node->right;
    node->right = (*root);
    (*root)->height = bigger(heightNode((*root)->left), 
                             heightNode((*root)->right)) + 1;
    node->height = bigger(heightNode(node->left), (*root)->height) + 1;

    (*root) = node;
}

void rotateRR(AVL *root){
    struct Node *node;
    node = (*root)->right;
    (*root)->right = node->left;
    node->left = (*root);
    (*root)->height = bigger(heightNode((*root)->left), 
                             heightNode((*root)->right)) + 1;
    
    node->height = bigger(heightNode(node->right), 
                         (*root)->height) + 1;

    (*root) = node;
}

void rotateLR(AVL *root){
    rotateRR(&(*root)->left);
    rotateLL(root);
}

void rotateRL(AVL *root){
    rotateLL(&(*root)->right);
    rotateRR(root);
}

void printAVL(struct Node* nodeParam){
    struct Node *node = nodeParam;

    if(node != NULL){
        printf("   (");
        printf(" %d ", node->value);
        printAVL(node->left);
        printAVL(node->right);
        printf(")");
    }else{
        printf(" () ");
    }
}

AVL* createAVL(){
    AVL* root = (AVL*) malloc(sizeof(AVL));
    if(root != NULL)
        *root = NULL;
    return root;
}