#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
#define n 100
void inicializar(int [],int);
void mostrar(int [],int);
int main(int argc, char *argv[]) {
int *a=NULL;
/*int c=25;
a=&c;
*a=(*a)+1;
cout<<*a<<"  c: "<<c;
*/

int b[n]={0}, tl=15;
inicializar(b,tl);
mostrar(b,tl);
a=*b;
cout<<"a:"<<a<<endl;;

mostrar(a,tl);
	return 0;
}

void inicializar(int a[],int tl){
	srand(time(NULL));
	for(int i=0;i<tl;i++) { a[i]=rand()%200; }
}
void mostrar(int a[],int tl){
	for(int i=0;i<tl;i++) { cout<<a[i]<<" "; }
}
