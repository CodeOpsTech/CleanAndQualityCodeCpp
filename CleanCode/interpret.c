#include <stdio.h> 

enum { bipush = 0x10, imul = 0x68, idiv	= 0x6c, iadd = 0x60, isub = 0x64 }; 

struct exec_stack {
	int array[3]; 
	int top; 
}execution_stack; 

void push(int i) { execution_stack.array[execution_stack.top++] = i; }

int pop() { return execution_stack.array[--execution_stack.top]; }

void interpret(char *bytecode, int bytecode_length) {
	int pc = 0; 
	while(pc < bytecode_length) { 
		char bcode = bytecode[pc]; 
		switch(bcode) {
		case iadd: 	push(pop() + pop()); break;  
		case isub:	{ int arg1 = pop(); int arg2 = pop(); push(arg2 - arg1); } break; 
		case idiv:	{ int arg1 = pop(); int arg2 = pop(); push(arg2 / arg1); } break; 
		case imul:	push(pop() * pop()); break; 
		case bipush: 	pc++; push(bytecode[pc]); break; 
		default: printf("ERROR: Bytecode %x not implemented yet \n", bytecode); 
		} 
		pc++; 
	} 
} 

int main() {
	char bytecodes[] = { 0x10, 0x0A, 0x10, 0x14, 0x68, 0x10, 0x1E, 0x10, 0x0A, 0x6C, 0x60 };
	interpret(bytecodes, 11); 
	printf("%d", pop()); 
}
