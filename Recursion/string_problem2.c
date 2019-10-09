#include<stdio.h>

int arr[3];


	void fun(int k,int n){
	int i;
	if(n<1){
		for(i=0;i<k;i++)
		printf("%d ",arr[i]);
		printf("\n");
	}
	else{
		for(i=0;i<k;i++){
			arr[n-1] = i;
			fun(k,n-1);

		}
	}

	}

int main(){

	int n = 3;
	int k = 3;
	fun(k,n);

}
