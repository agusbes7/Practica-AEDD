#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
//EJERCICIOS DE LA GUIAS 4 estructuras de control seleccion y repeticion 
int menor(int x,int y){return (x<y)? x:y;}
int mayor(int x,int y){return (x>y)? x:y;}
void kasteriscos(int x,char y){cout<<setfill(y)<<setw(x)<<y<<endl;}
//---------------------------------------------------------------------
int unidad(int x){return x%10;}
int decena(int x){return unidad(x/10);}
int centena(int x){return decena(x/10);}
int udeMil(int x){return x/1000;}
int invertir(int);
int ent_bin(int);
int bin_ent(int);
void intercambiar(int&,int&);
int cifras(int x){
	if(x<10){return 1;}
	else{return 1+cifras(x/10);}
}
bool palindromo(int );
int inverso(int );
//_----------------------------------------------------------------
//----------------------------
//----------------------------
int main(int argc, char *argv[]) {
kasteriscos(5,'#');
cout<<palindromo(123321);
return 0;
}
//++++++++++++++++++++++++++++++++++++++++++++++++++
void kasteriscos2(int x){
		for(int i=0;i<x;i++){cout<<"*";}
	}
		//++++++++++++++++++++++++++++++++++++++++++++++++++
	//++++++++++++++++++++++++++++++++++++++++++++++++++
int potencia(int base ,int exponente){
	if(exponente==0){return 1;}
	else{
		return base*potencia(base,exponente-1);
	}}
	
	int invertir(int x){
		int aux=cifras(x);
		if(aux==1){return x;}
		return (x%10)*
		   potencia(10,aux-1)
		   +invertir(x/10);}
		int bin_ent(int x){ 
			int aux=cifras(x);
			if(aux==1){return x;}
			return (x%10)+2*bin_ent(x/10);}
			int ent_bin(int x){
				if(x==1){return 1;}
				else{
					return x%2+10*ent_bin(x/2);}}
int inverso(int x){
	int aux=cifras(x);
	if(aux==1){return x;}
	else{
		return (x%10)*potencia(10,cifras(x)-1)+inverso(x/10);}
	}
	
bool palindromo(int x ){
if(x==inverso(x)){return true;}
					else{return false;}
				}
		
