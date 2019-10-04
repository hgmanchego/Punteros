#include <iostream>
using namespace std;

void Swap(int *a,int *b){
	int x;
	x=*a;
	*a=*b;
	*b=x;
}

void IteInvertir(int *arr,int tam){
	int j=tam-1;
	for(int i=0;i<tam/2;i++,j--){
		Swap(arr+i,arr+j);
	}
}
int main(int argc, char *argv[]) {
	int x[5]={1,2,3,4,5};
	int *ptr;
	ptr=x;
	IteInvertir(ptr,5);
	cout<<"{";
	for(int i=0;i<5;i++){
		cout<<x[i]<<",";
	}
	cout<<"}";
	return 0;
}
		
