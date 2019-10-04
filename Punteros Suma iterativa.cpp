#include <iostream>
using namespace std;
int IteSuma(int *ptr,int tam){
	int x=0;
	for(int i=0;i<tam;i++){
		x+=*ptr;
		ptr++;
	}
	return x;
}
	int main(int argc, char *argv[]) {
		int x[5]={1,2,3,4,5};
		int *ptr;
		ptr=x;
		cout<<IteSuma(ptr,5);
		return 0;
	}
	
	
