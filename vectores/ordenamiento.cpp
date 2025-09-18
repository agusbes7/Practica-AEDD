#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

#define tam 50

void cargarvector(int [],int);
void cargarvectorrand(int [],int);
void mostrar(int [],int);
//----------------------
int mayor(int x,int y){ return (x>=y)? x:y;}
//----------------------
void intercambio(int &x,int &y){ int aux=x; x=y; y=aux;}
//----------------------
void rotacionIzq(int [],int);
void rotacionDer(int [],int);
//---------------------------------
void seleccionDirectaMam(int[],int);
void seleccionDirectamaM(int[],int);
int busquedaSecuencial(int [],int ,int );
int busquedaBinaria(int [],int ,int );
int main(int argc, char *argv[]) {
	int a[tam],tl=25;
	cargarvectorrand(a,tl);
	mostrar(a,tl);
	seleccionDirectamaM(a,tl);
	mostrar(a,tl);
	int aux;
	cin>>aux;
	int buscado=busquedaBinaria(a,tl,aux);
	cout<<buscado<<endl;
	if(buscado!=-1){
	cout<<"el numoero buscado "<<a[buscado]<<" en la posicion "<<buscado<<endl;
	}
	
	return 0;
}

void mostrar( int a[],int tl){
	for(int i=0;i<tl;i++){
		cout<<a[i]<<"-";
	}
	cout<<endl;
}
void cargarvector( int a[],int tl){
		for(int i=0;i<tl;i++){
			cin>>a[i];
			
		}
		cout<<endl;
	}	
void cargarvectorrand( int a[],int tl){
	srand(time(NULL));
	for(int i=0;i<tl;i++){
		a[i]=rand()%100;
	
	}
	cout<<endl;}
//-------------------------------------------------------------
		void rotacionIzq(int a[],int tl){
			int aux=a[0];
			for(int i=1;i<tl;i++){
				a[i-1]=a[i];
			}
			a[tl-1]=aux;
		}
		void rotacionDer(int a[],int tl){
			int aux=a[tl-1];
			for(int i=tl-1;i>0;i--){
				a[i]=a[i-1];
			}
			a[0]=aux;
		}
		
		
		
//---------------------------------------------------------
void seleccionDirectaMam(int a[],int tl){
for(int j=0;j<tl;j++){
	int may=j;
	for(int i=j+1;i<tl;i++){
		if(a[may]<a[i]){may=i;}
		}
	intercambio(a[may],a[j]);
	
}}
void seleccionDirectamaM(int a[],int tl){
	for(int j=0;j<tl;j++){
		int men=j;
		for(int i=j+1;i<tl;i++){
			if(a[men]>a[i]){men=i;}
		}
		intercambio(a[men],a[j]);}}
void insercionDirectamaM(int a[],int tl){
	for(int i=1;i<tl;i++){
		for(int j=i;j>=0;j--){
		}}}
int busquedaSecuencial(int a[],int tl,int elemento){
			int b=-1,j=0;
			while(b==-1 and j<tl){
				if(a[j]==elemento){b=j;}
				j++;
			}
		return b;}
			
int busquedaBinaria(int a[],int tl,int elemento){
	
	int izq=0,der=tl-1;
	int medio=(izq+der)/2;
	while(a[medio]!=elemento and izq<=der){
		if(a[medio]>elemento){
			der=medio-1;}
		else{
			izq=medio+1;}
		medio=(izq+der)/2;
			
		}
	if(a[medio]==elemento){return medio;}
	else{
		return -1;
	}}
	
