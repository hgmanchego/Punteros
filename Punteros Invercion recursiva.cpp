#include <iostream>
using namespace std;
void Swap(int *a,int *b){
	int x;
	x=*a;
	*a=*b;
	*b=x;
}
void RecInvertir(int *ptr,int i,int tam){
	if(i==tam||tam-i==1)
		return;
	Swap(ptr+i,ptr+tam-1);
	RecInvertir(ptr,i+1,tam-1);
}
int main(int argc, char *argv[]) {
	int x[6]={1,2,3,7,8,9};
	int *ptr;
	ptr=x;
	RecInvertir(ptr,0,6);
	cout<<"{";
	for(int i=0;i<6;i++){
		cout<<x[i]<<",";
	}
	cout<<"}";
	return 0;
}
		
