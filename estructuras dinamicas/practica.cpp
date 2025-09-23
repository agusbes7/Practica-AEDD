#include <iostream>
#include <string>
using namespace std;
struct Nodo{
	int edad;
	char nombre[20];
	Nodo * sig;
};
typedef Nodo * Nptr;

Nodo inicializar(){
	Nodo p;
	cin>>p.edad;
	cin>>ws;
	cin.getline(p.nombre,20,'\n');
	p.sig=NULL;
	return p;
}
void mostrar(Nodo p){
	
	cout<<"nombre: "<<p.nombre<<" edad: "<<p.edad<<endl;}
void mostrar2(Nptr p){
	cout<<"nombre: "<<p->nombre<<" edad: "<<p->edad<<endl;}

void mostrarTodos(Nodo L){
	while(L.sig!=NULL){
		mostrar(L);

	}
	
}
int main(int argc, char *argv[]) {
	Nptr L=NULL;
L= new Nodo;
if(L!=NULL){
	*(L)=inicializar();}
L->sig=new Nodo;
*(L)->sig=inicializar();
mostrar(*L);
mostrar2(L);
mostrarTodos(*L);
	return 0;
}

