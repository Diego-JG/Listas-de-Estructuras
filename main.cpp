#include <iostream>
using namespace std;
struct nodos{
	int valor;
	nodos *ptr;
	
};

int main () {
	nodos dat1, dat2, dat3, dat4, dat5;
	dat1.valor=3;
	dat1.ptr=NULL;
	dat1.ptr=&dat2;
	
	dat2.valor=7;
	dat2.ptr=NULL;
	dat2.ptr=&dat3;
	
	dat3.valor=9;
	dat3.ptr=&dat4;
	
	dat4.valor=10;
	dat4.ptr=NULL;
	dat4.ptr=&dat5;
	
	dat5.valor=16;
	dat5.ptr=NULL;

	
	
	cout<<dat1.valor<<endl;
	cout<<dat1.ptr->valor<<endl;
	cout<<dat1.ptr->ptr->valor<<endl;
	cout<<dat1.ptr->ptr->ptr->valor<<endl;
	cout<<dat1.ptr->ptr->ptr->ptr->valor<<endl;

	
	return 0;
}