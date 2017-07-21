#include <cstdlib>
#include <cstdio> 
#include <stack> 
using namespace std; 

using uchar = unsigned char; 

enum { BIPUSH =	0x10, IMUL = 0x68, IDIV = 0x6c, IADD = 0x60, ISUB = 0x64 };

class BytecodeInterpreter { 
private: 
	stack<int> exec_stack;
	void imul() {
        	int arg1 = exec_stack.top(); exec_stack.pop(); 
                int arg2 = exec_stack.top(); exec_stack.pop(); 
                int res = arg1 * arg2;
                exec_stack.push(res);
	}
	void idiv() {
                int arg1 = exec_stack.top(); exec_stack.pop(); 
                int arg2 = exec_stack.top(); exec_stack.pop(); 
                int res = arg2 / arg1;
                exec_stack.push(res);
	}
	void iadd() { 
                int arg1 = exec_stack.top(); exec_stack.pop(); 
                int arg2 = exec_stack.top(); exec_stack.pop(); 
                int res = arg1 + arg2;
                exec_stack.push(res);
	} 
	void isub() {
                int arg1 = exec_stack.top(); exec_stack.pop(); 
                int arg2 = exec_stack.top(); exec_stack.pop(); 
                int res = arg2 - arg1;
                exec_stack.push(res);
	} 
public: 
	void interpret(uchar bytecodes[], int num_bytecodes) {
		int pc = 0;  // program counter 
		while(pc < num_bytecodes) { 
		switch(bytecodes[pc]) {
		case BIPUSH: {
        		exec_stack.push(bytecodes[++pc]);
                        break;
                        }
                case IMUL:  {
			imul(); 
                        break;
                        }
                case IDIV: {
			idiv(); 
                        break;
                        }
                case IADD: {
			iadd(); 
                        break;
                        }
                case ISUB: {
			isub(); 
                        break;
                        }
		} 
		pc++; 
		}
		printf("The execution result is %d \n", exec_stack.top()); 
	} 
};

int main() {
	// (10 + (30 - 20))
	unsigned char bytecodes[] = { 
		BIPUSH, 10, 
		BIPUSH, 30, 
		BIPUSH, 20, 
		ISUB, 
		IADD }; 
	int num_bytecodes = 8; 
	BytecodeInterpreter interpreter;
	interpreter.interpret(bytecodes, num_bytecodes); 
} 
