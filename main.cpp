#include<iostream>
using namespace std;

struct Nodo{
  int valor;
   struct Nodo *ptr=NULL;
   }*lista;

void agregar(int add);
void imprimir();

int main(){
    int opcion, add;
    char repetir='s';
    while(repetir!='n'){
        cout<<"::M E N Ú::";
		cout<<"¿Que desea realizar?"<<endl;
		cout<<"\t1.-Agregar"<<endl;
		cout<<"\t2.-Imprimir"<<endl;
		cout<<"\t3.-Salir"<<endl;
        cout<<"Que es lo que desea?: "; cin>>opcion;
        switch(opcion){
        case 1:
            cout<<"Introduzca el valor que deseas agregar: "; cin>>add;
            agregar(add);
            break;
        case 2:
            cout<<"\tLista de numeros: "<<endl;
            imprimir();
            break;
        default:
            cout<<"Good bye"<<endl;
        return 0;
    }

    }
    }

void agregar(int add){
    Nodo *nuevo=new Nodo;
    nuevo->ptr=NULL;
    nuevo->valor=add;
    if(lista==NULL)
        lista=nuevo;
    else{
        Nodo *aux=lista;
        while(aux->ptr!=NULL){
                aux=aux->ptr;
    }aux->ptr=nuevo;
    }
}
void imprimir(){
    Nodo *aux=lista;
    while(aux!=NULL){
            cout<<aux->valor<<'\t';
            aux=aux->ptr;
    }
    }
	
