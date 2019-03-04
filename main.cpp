#include <iostream>
#include "base.h"
#include "container.h"

using namespace std;

int main(int argv, char** argc) {
	Op* op7=new Op(7);
	Op* op4=new Op(4);
	Op* op3=new Op(3);
	Op* op2=new Op(2);
	Mult* A=new Mult(op7, op4);
	Add* B=new Add(op3,A);
	Sub* C=new Sub(B, op2);
	Sqr* D=new Sqr(C);
	
	if(argc[1] == "vector")
	{		
		VectorContainer* container = new VectorContainer();
		container->add_element(A);
		container->add_element(B);
		container->add_element(C);
		container->add_element(D);
		
		cout << "Container before Sort:" << endl;
		container->print();

		cout << "Container after Sort:" << endl;

		if(argc[2] == "selection")
		{
			container->set_sort_function(new selectionSort());
		}
		if(argc[2] == "bubble")
		{
			container->set_sort_function(new bubbleSort());
		}

		container->sort();
		container->print();

	}
	if(argc[1] == "list")
	{
		ListContainer* container = new ListContainer();
		container->add_element(A);
		container->add_element(B);
		container->add_element(C);
		container->add_element(D);	
	
		cout << "Container before Sort:" <<endl;
		container->print();

		cout<< "Container after Sort:" << endl;
		if(argc[2] == "selection")
		{
		container->set_sort_function(new selectionSort());
		}
		if(argc[2] == "bubble")
		{
			container->set_sort_function(new bubbleSort());
		}
		container->sort();
		container->print();

	}
};
