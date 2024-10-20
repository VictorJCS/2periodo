#include<stdio.h>

int ehDivisivel(int x, int y){
	if(y==0){
		printf("Divisao por zero nao e permitida. \n");
		return -1;
	}
	return(x%y==0)?1:0;
}
int main(){
	int x,y;
	
	printf("Digite o valor x: ");
	scanf("%d",&x);
	printf("Digite o valor y: ");
	scanf("%d",&y);
	
	int resultado=ehDivisivel(x,y);
	
	if(resultado==1){
		printf("%d e divisivel por %d.\n",x,y);
	}else if(resultado==0){
		printf("%d nao e divisivel por %d.\n",x,y);
	}
	return 0;
}
