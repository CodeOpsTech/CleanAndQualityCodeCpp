#include "ExprEval.h"

int main(int argc, char **argv)
{
	// ((10 * 20) + 30)  
	Expr *expr = new Plus(new Mult(new Constant(10), new Constant(20)), new Constant(30)); 
	std::cout << expr->eval() << std::endl;
	return 0;
}
