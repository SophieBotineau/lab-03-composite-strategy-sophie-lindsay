#include "base.h"

double add(Node* N1, Node* N2)
{
	Add* a=new Add(N1, N2);
	double res=a->evaluate();
	return res;
};

double sub(Node* N1, Node* N2)
{
	Sub* s=new Sub(N1, N2);
	double res=s->evaluate();
	return res;
};

double mult(Node* N1, Node* N2)
{
	Mult* m=new Mult(N1, N2);
	double res=m->evaluate();
	return res;
};

double div(Node* N1, Node* N2)
{
	Div* d= new Div(N1, N2);
	double res=d->evaluate();
	return res;
}
double sqrt(Node* N1)
{
	Sqr* sqr=new Sqr(N1);
	double res=sqr->evaluate();
	return res;
}
