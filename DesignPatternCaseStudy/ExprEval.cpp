#include "ExprEval.h"

Expr::~Expr() {}

Constant::Constant(int arg)
{
	val = arg;
}

int Constant::eval()
{
	return val;
}

Plus::Plus(Expr *arg1, Expr *arg2)
{
	left = arg1;
	right = arg2;
}

int Plus::eval()
{
	return left->eval() + right->eval();
}

Mult::Mult(Expr *arg1, Expr *arg2)
{
	left = arg1;
	right = arg2;
}

int Mult::eval()
{
	return left->eval() * right->eval();
}
