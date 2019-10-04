#include <iostream>
using namespace std;
void Swap(int *a,int *b){
	int x;
	x=*a;
	*a=*b;
	*b=x;
}
void Burbuja(int *ptr,int tam){
	for(int i=0;i<tam;i++){
		for(int j=0;j<tam-1;j++){
			if(*(ptr+j)>*(ptr+j+1))
				Swap(ptr+j,ptr+j+1);
		}
	}
}
void Insertion(int *ptr, int tam)  {
int i,k,j;  
for (i=1;i<tam;i++) {  
	k=*(ptr+i);  
	j=i-1; 
	while(j>=0&&(*(ptr+j)>k)){  
		*(ptr+j+1)=*(ptr+j);  
		j=j-1;  
	}  
	*(ptr+j+1)=k;  
	}  
} 
int particion(int *ptr, int low, int high)  
{  
	int pivote=*(ptr+high); 
	int i=(low-1);
	for (int j=low;j<=high-1;j++){
		if (*(ptr+j) < pivote){  
			i++;
			Swap(ptr+i,ptr+j);  
		}  
	}  
	Swap((ptr+i+1),(ptr+high));  
	return (i + 1);  
} 
void Quick(int *ptr, int low, int high){  
	if (low < high){
		int pivote = particion(ptr, low, high);  
		Quick(ptr, low, pivote - 1);  
		Quick(ptr, pivote + 1, high);  
	} 
	else 
		return;
}
int main(int argc, char *argv[]) {
	int x[5]={3,5,1000,2,4};
	int *ptr;
	ptr=x;
	//Burbuja(ptr,5);
	Insertion(ptr,5);
	//Quick(ptr,0,4);
	cout<<"{";
	for(int i=0;i<5;i++){
		cout<<x[i]<<",";
	}
	cout<<"}";
	return 0;
}
