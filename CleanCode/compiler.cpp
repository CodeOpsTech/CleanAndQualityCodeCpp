#include <stdio.h>
#include <stdlib.h> 
#include <string.h> 

#define IADD 0x60
#define ISUB 0x64
#define IMUL 0x68
#define IDIV 0x6C
#define BIPUSH 0x10

typedef struct ExprNode {
        struct ExprNode *left;
        char data[10];
        struct ExprNode *right;
} ExprNode;

FILE*fp; 

void codegen(ExprNode *node) {
        char bytecode = 0; 
        if(!node) 
                return;
        if((node->left != 0) || (node->right != 0)) {
                codegen(node->left);
                codegen(node->right);
                if(strcmp(node->data, "+") == 0) {
                        bytecode = IADD; 
                        fwrite(&bytecode, 1, 1, fp);
                }
                else if(strcmp(node->data, "-") == 0) {
                        bytecode = ISUB; 
                        fwrite(&bytecode, 1, 1, fp);
                }
                else if(strcmp(node->data, "*") == 0) {
                        bytecode = IMUL; 
                        fwrite(&bytecode, 1, 1, fp);
                }
                else if(strcmp(node->data, "/") == 0) {
                        bytecode = IDIV; 
                        fwrite(&bytecode, 1, 1, fp);
                }
        }
        if(atoi(node->data) != 0) {
                bytecode = BIPUSH; 
                fwrite(&bytecode, 1, 1, fp);
                bytecode = atoi(node->data); 
                fwrite(&bytecode, 1, 1, fp);
        }
}

int main() {
        // ((10 * 20) + (30 / 10))  
        ExprNode tree[] = { {tree+1, "+", tree+2},
                            {tree+3 , "*", tree+4},
                            {tree+5 , "/", tree+6},
                            {0 , "10", 0},
                            {0 , "20", 0},
                            {0 , "30", 0},
                            {0 , "10", 0},
                          };    
        fp = fopen("file.binary", "wb"); 
        codegen(tree);          
        fclose(fp); 
}
