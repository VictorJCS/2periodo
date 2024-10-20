#include<stdio.h>

int main(){
	int i,x;
	printf("Informe um numero par: ");
	scanf("%d",&i);
	for(x=0;x<=i;x+=2){
		printf("%d->",x);
	}
	return 0;
}
