#include <iostream>
using namespace std;
int RecSuma(int *arr,int tam){
	if(tam==1)
		return *arr;
	else
		return *arr + RecSuma(++arr,--tam);
}
	int main(int argc, char *argv[]) {
		int x[5]={1,2,3,4,5};
		int *ptr;
		ptr=x;
		cout<<RecSuma(ptr,5);
		return 0;
	}
	
	
