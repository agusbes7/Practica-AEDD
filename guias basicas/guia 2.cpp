#include <iostream>
#include <iomanip>
using namespace std;
//EJERCICIOS DE LA GUIAS 2-5/6 VARIADOS PARA REFRESCAR SOLO ALGUNOS Y ANALIZANDO EL NIVEL 

void guia2Porcentaje();
void mostrar(int,int,int);
void ejemplos(int ,int ,int );
void operadorPrefijoPostfijo(int ,int ,int );
void dobleAsignacion(int ,int ,int );
int main(int argc, char *argv[]) {

//	guia2Porcentaje();
	int a=2,b=1,c=3;
	
	cout<<"a:"<<a<<endl;
	cout<<"b:"<<b<<endl;
	cout<<"c:"<<c<<endl;
	cout<<"cambios en las variables solo dentro de la funcion son pasadas por copia"<<endl;
	
	ejemplos(a,b,c);
	operadorPrefijoPostfijo(a,b,c);
	dobleAsignacion(a,b,c);
	
	

	return 0;
}
//-----------------------------------------------------------
void guia2Porcentaje(){
	int m,f;
	
	cout<<"Ingrese el numero de mujeres en el curso:";
	cin>>f;
	cout<<endl<<"Ingrese el numero de hombres en el curso:";
	cin>>m;
	if(f!=0 or m!=0){
	float Pmujeres=f*100/float(m+f);
	cout<<"porcentaje de mujeres:"<<fixed<<setprecision(2)<<Pmujeres<<"%"<<endl;
	cout<<"porcentaje de varones:"<<fixed<<setprecision(2)<<(float)100-Pmujeres<<"%"<<endl;}
	else{cout<<"error no hay personas en el curso"<<endl;}
	return;}
	//-----------------------------------------------------------
	void mostrar(int a,int b,int c){
		cout<<"a:"<<a<<endl;
		cout<<"b:"<<b<<endl;
		cout<<"c:"<<c<<endl;
	}
		void ejemplos(int a,int b,int c){
			b+=(a>0)? c: -1;
			a=(b>c)? b:c;
			c=a+b;
			mostrar(a,b,c);
		}
void operadorPrefijoPostfijo(int a,int b,int c){
	cout<<"operadores de pre y postincremento "<<endl;
	a-=--c;
	b+=c;
	cout<<"a - c decrementa con operador de predecremento :"<<a<<endl;
	cout<<"b sumarle c :"<<b<<endl;
	cout<<"c:"<<c<<endl;
	}
void dobleAsignacion(int a,int b,int c){
	
	cout<<"caso particular estudiar bien asociatividad"<<endl;
	cout<<"expresion a=b=a+3*c+50"<<endl;
	a=b=a+3*c+50;
mostrar(a,b,c);}
