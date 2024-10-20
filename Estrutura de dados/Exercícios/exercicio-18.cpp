#include<stdio.h>

#define max_compromissos 10
typedef struct{
	int hora;
	int minutos;
	int segundos;
}horario;

typedef struct{
	int dia;
	int mes;
	int ano;
}data;

typedef struct{
	horario horario;
	data data;
	char anotacao[100];
}compromisso;

int main(){
	
	compromisso compromisso1[max_compromissos];
	int c=0;
	
	printf("Quantos compromissos quer registrar(maximo %d)",max_compromissos);
	scanf("%d",&c);
	if(c>max_compromissos){
		printf("O numero de compromissos excede o limite de %d",max_compromissos);
		return 1;
	}
	for(int i=0;i<c;i++){
		printf("\nCompromisso %d:\n",i+1);
		
		printf("Informe a data(dia/mes/ano): \n");
		scanf("%d %d %d",&compromisso1[i].data.dia,
		&compromisso1[i].data.mes,&compromisso1[i].data.ano);
		
		printf("Informe o horario(hora(s)/minuto(s)/segundo(s): \n");
		scanf("%d %d %d",&compromisso1[i].horario.hora,&compromisso1[i].
		horario.minutos,&compromisso1[i].horario.segundos);
		
		printf("Informe a descricao do compromisso: ");
		scanf("%s",compromisso1[i].anotacao);
}
printf("\nCompromissos cadastrados: \n");
for(int i=0;i<c;i++){
	printf("Compromisso %d:\n", i+1);
	printf("Data:%d/%d/%d\n",compromisso1[i].data.dia,compromisso1[i].
	data.mes,compromisso1[i].data.ano);
	printf("horario:%d/%d/%d\n",compromisso1[i].horario.hora,compromisso1[i].
	horario.minutos,compromisso1[i].horario.segundos);
	printf("Descricao: %s\n",compromisso1[i].anotacao);
	
}
return 0;
}
