#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	char ID[10];
	int j=0;
	
	printf("請輸入身份證字號:");
	scanf("%s",ID);
	
	int len=strlen(ID);
	
	if(ID[0]>='A' && ID[0]<='Z' && len==10){
		if(ID[1]=='1' || ID[1]=='2'){
	    	for(int i=2;i<=9;i++){
	    		if(ID[i]>='0' && ID[i]<='9'){
				
	    		}
	    		else{
	    	        j++;
	    	    }
	    	}
	    	if(j>=1){
	    		printf("您的身份證字號是不合法的\n");
	    	}
		    else{
		        printf("您的身份證字號是合法的\n");	
	    	}
		}
	    else{
            printf("您的身份證字號是不合法的\n");	
	   	}	
	}
	else if(len>=11){
	    printf("您的身份證字號是不合法的\n");
	}
	else{
		printf("您的身份證字號是不合法的\n");
	}
	
	system("PAUSE");
	return 0;
}
