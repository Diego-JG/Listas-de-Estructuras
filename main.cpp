#include <iostream>
using namespace std;
struct nodos{
	int valor;
	nodos *ptr;
	
};
void agregar (nodos*lista,int add);
void imprimir (nodos*lista);
int main () {
	nodos dat1, dat2, dat3, dat4, dat5;	
	struct nodos *inicio;
	struct nodos  *aux;
		
		//auxiliares
	aux= new nodos();
	aux->valor=4;
	aux->ptr=NULL;
		//cout<<aux->valor;
		
	inicio=aux;
	aux= new nodos();
	aux->valor=5;
	aux->ptr=NULL;
		//cout<<aux->valor;
		
	inicio->ptr=aux;
	aux= new nodos();
	aux->valor=6;
	aux->ptr=NULL;
		//cout<<aux->valor;
		
	inicio->ptr->ptr=aux;
	aux= new nodos();
	aux->valor=7;
	aux->ptr=NULL;
		//cout<<aux->valor;
		
	inicio->ptr->ptr->ptr=aux;
	aux= new nodos();
	aux->valor=8;
	aux->ptr=NULL;
		
	inicio->ptr->ptr->ptr->ptr=aux;
		//cout<<aux->valor;
	
		
		
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
	
		
	cout<<"apuntador que apunta apuntador";
	cout<<dat1.valor<<endl;
	cout<<dat1.ptr->valor<<endl;
	cout<<dat1.ptr->ptr->valor<<endl;
	cout<<dat1.ptr->ptr->ptr->valor<<endl;
	cout<<dat1.ptr->ptr->ptr->ptr->valor<<endl;
		
	cout<<"lista dinamica"<<endl;
	cout<<inicio->valor<<endl;
	cout<<inicio->ptr->valor<<endl;
	cout<<inicio->ptr->ptr->valor<<endl;
	cout<<inicio->ptr->ptr->ptr->valor<<endl;
	cout<<inicio->ptr->ptr->ptr->ptr->valor<<endl;
	
	int opcion, add,agr,f;
	while(f!=3)
	{

	cout<<"::M E N Ú::";
	cout<<"¿Que desea realizar?"<<endl;
	cout<<"\t1.-Agregar"<<endl;
	cout<<"\t2.-Imprimir"<<endl;
	cout<<"\t3.-Salir"<<endl;
	
	nodos *lista=NULL;
	
	switch (opcion)
	{
		case 1:
			cout<<"::Agregar nodos::"<<endl;
			cout<<"¿Cuantos nodos quieres?"<<endl;
			cin>>agr;
			for (int i=0; i<agr;i++){
				cout<<"Dame valores"<<i+1<<endl;
				cin>>add;
			agregar(lista, add);
			}
			break;
			
		case 2:
			imprimir(lista);
			break;
			
				
		case 3:
			f=true;
			//exit
			break;
 
		default:
			cout << "Opcion no valida";
			break;
	}
	}
	
	
		


	
	return 0;
}

void agregar (nodos*lista,int add){
	
	nodos *nuevo=new nodos;
	nuevo->ptr=NULL;
	nuevo->valor=add;
	if(lista=NULL)lista=nuevo;
	else{
		nodos *aux=lista;
		while(aux->ptr!=NULL){
			aux=aux->ptr;
		}
		lista->ptr=nuevo;
}
}


void imprimir (nodos*lista){
	nodos *aux=lista;
	while(aux!=NULL){
		cout<<aux->valor;
		aux=aux->ptr;
	}
	cout<<endl;
}
