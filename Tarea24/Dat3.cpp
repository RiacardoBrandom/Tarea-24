#include <stdio.h>

struct registro{
	int cuenta;
	char nombre[30];
	int balance;
};

 int main (){
   	appInfoData("dat3","23/11/2017");
	
	FILE *cfPtr;
	struct registro CuentaR; //cuenta C;
	
	if((cfPtr=fopen("cuentas.dat","r"))==NULL){
		printf("no se abrio el archivo\n");
		}else{
			printf("%-6s%-16s%10s\ln","No cuenta","Nombre","balance");
			 while(!feof(cfPtr)){
			 	fread(&CuentaR, sizeof(struct registro),1,cfPtr);
			 	
			 	if(CuentaR.cuenta !=0){
			 		printf("%-6s%-16s%-10d\ln",CuentaR.cuenta,CuentaR.nombre,CuentaR.balance);
				 }
			 }
		}
		
		fclose(cfPtr);
		return 0;
	}
	

