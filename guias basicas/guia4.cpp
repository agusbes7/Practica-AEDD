#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
//EJERCICIOS DE LA GUIAS 4 estructuras de control seleccion y repeticion 
int menor(int x,int y){return (x<y)? x:y;}
int mayor(int x,int y){return (x>y)? x:y;}
void impares(int ,int);
void kasteriscos(int x){cout<<setfill('*')<<setw(x)<<"*"<<endl;}
void kasteriscos2(int x);
void cuadradoAsteriscos(int x){for(int i=0;i<x;i++){cout<<setfill('*')<<setw(x)<<"*"<<endl;}}
void cuadradoAsteriscos2(int x);
void trianguloAsteriscos(int x);
int unidad(int x){return x%10;}
int decena(int x){return unidad(x/10);}
int centena(int x){return decena(x/10);}
int udeMil(int x){return x/1000;}
void problema6();
void curiosos(int);
//----------------------------
//----------------------------
int main(int argc, char *argv[]) {
/*impares(37,52);
kasteriscos(5);
kasteriscos2(5);
cuadradoAsteriscos(3);
cout<<endl;
cuadradoAsteriscos2(4);
cout<<endl;
trianguloAsteriscos(5);
problema6();*/
	
curiosos(7);
return 0;
}
//++++++++++++++++++++++++++++++++++++++++++++++++++
void impares(int x ,int y){
	
	int men=menor(x,y);
	int may=mayor(x,y);
	
for(int i=(men%2==0)?men+1:men;i<=may;i++){
	if(i%2!=0){cout<<i<<endl;}
}
}
//++++++++++++++++++++++++++++++++++++++++++++++++++
void kasteriscos2(int x){
		for(int i=0;i<x;i++){cout<<"*";}
	}
		//++++++++++++++++++++++++++++++++++++++++++++++++++
void cuadradoAsteriscos2(int x){
for(int i=0;i<x;i++){
				for(int j=0;j<x;j++){cout<<"*";}
				cout<<endl;
			}
		}
void trianguloAsteriscos(int x){
	for(int i=1;i<=x;i++){
		
	
	for(int j=x-i;j<x;j++){cout<<"*";}
cout<<endl;}}
//++++++++++++++++++++++++++++++++++++++++++++++++++
void problema6(){
	for(int i=1000;i<10000;i++){
	if(unidad(i)+centena(i)==decena(i)+udeMil(i)){cout<<i<<endl;}
	}
}
	
	
	//++++++++++++++++++++++++++++++++++++++++++++++++++
int potencia(int base ,int exponente){
	if(exponente==0){return 1;}
	else{
		return base*potencia(base,exponente-1);
	}}
	void curiosos(int x){
		int contador=0,i=1;
		int cifras;
		while(contador<x){
			int aux=potencia(i,2);
			cifras=log10(i)+1;
			if(i==aux%potencia(10,cifras)){cout<<i<<endl; contador++;}
		i++;
		}
	}
