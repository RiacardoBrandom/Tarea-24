#include<stdio.h>
#include<conio.h>
#include "info.h"
 using namespace std;
 
 
   int main (int argc ,char *argv[]){
   	
   		appInfoData("dat1","21/11/2017");
   		
   	int dato;
   	
   	FILE *ptrArchivo;
   	ptrArchivo=fopen("datos.dat","wb");
   	
   	if(ptrArchivo==NULL){
	   
	   printf("Error al abrir el archivo\n");
}else{
	
	printf("Dame el dato a guardar al archivo");
	scanf("%d",&dato);
	
	//se guarda en archivo
	fprintf(ptrArchivo,"%d\n",dato);
	fprintf(ptrArchivo,"%d\n",++dato);
	fprintf(ptrArchivo,"%d\n",++dato);
	
	fclose(ptrArchivo);// se cierra archivo
	
}
   	return 0;
 }
