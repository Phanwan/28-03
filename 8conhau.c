#include<stdio.h>
	
int row[8] = {0},TC,a,b,lineCounter;

int kiemtra_dieukien(int r,int c){
	int prev;
	for(prev = 0; prev <c;prev++){
		if(row[prev] == r || (abs(row[prev]-r)==abs(prev-c))){
		   	return 0;
		}
	}
	return 1;
}

void quaylui(int c){
	if(c == 8){
		int j;
		for(j = 0 ; j < 8;j++){
	  	 	printf("%d ",row[j]+1);
	 	}
		printf("\n");
	}else{
		int r;
		for(r = 0; r < 8;r++){
			if(kiemtra_dieukien(r,c)){
	   			row[c] = r;
	   			quaylui(c+1);
	  		}	
		} 
	}
}

int main(){
      lineCounter = 0;
      printf("Vi tri co the dat cac con Hau la:\n");
      printf("\n");
      quaylui(0);
	return 0;
}
