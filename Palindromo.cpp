#include <iostream>
using namespace std;
void Swap(char *a,char *b){
	char c=*a;
	*a=*b;
	*b=c;
}
void Swap2(char &a,char &b){
	char c=a;
	a=b;
	b=c;
}
int size(char *cadena){
	if(*cadena=='\0')
		return 0;
	return 1+size(++cadena);
}
/*void inv(char *cadena){
	char *ptr=cadena+rec(cadena);
	
	for(int i=0;i<rec(cadena)/2;i++){
		Swap(cadena,ptr-1);
		cadena++;
		ptr--;
	}
}*/
bool palrec(char *cad,char *fin){
	if(cad==fin||cad==fin+1)
		return 1;
	
	if(*cad==*fin)
		return 1*palrec(++cad,--fin);
	return 0*palrec(++cad,--fin);
}	
	
bool palindromo(char *cad, char *fin){
	for(int i=0;i<=size(cad)/2;i++,cad++,fin--){
		if(*cad!=*fin)
			return 0;
	}
	return 1;
}
	
void invrec(char *cad,char *fin){
	if(cad==fin||cad==fin+1)
		return;
	Swap(cad,fin);
	invrec(++cad,--fin);
}
	
void inv(char *cad){
	char *fin=cad+size(cad)-1;
	for(int i=0;i<=size(cad)/2;i++,cad++,fin--){
		Swap(cad,fin);
	}
}
void Print(char *nom){
	for(int i=0;i<4;i++,nom++){
		cout<<*nom;
	}
}
int main(int argc, char *argv[]) {
	char nom[]={"boba"};
	char *fin=nom+size(nom)-1;
	//inv(nom);
	//Print(nom);
	//invrec(nom,fin);
	//Print(nom);
	cout<<palrec(nom,fin);
	return 0;
}

