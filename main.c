#include<unistd.h>
#include<stdio.h>
void LOL(int *,int);

int main(){
  int A[10]={1,2,2,3,4,5,5,6,7,7};
  LOL(A,10);

}
void LOL(int *arr,int size){
	
	int i=0,j=0;
	while(i<size){
		int n=0;
		while(j<size){
			if(i==j){j++;continue;}
			if(arr[i]!=arr[j]) n++;
			j++;
		}
		if(n==9) printf("%d ",arr[i]);
		i++;

	}
}
