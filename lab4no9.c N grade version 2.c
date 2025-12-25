#include <stdio.h>

int main (){
	int score;
	
	
	while(score!=-1){
		scanf("%d",&score);
		
		if(score>100){
			printf("error");
		}else if(score<0){
			printf("error");
		}else if(score>67){
			if(score<68){
				printf("%d(D)\n",score);
			}else if(score>=68){
				if(score<75){
					printf("%d(C)\n",score);
				}else if(score>=75){
					if(score<=85){
						printf("%d(B)\n",score);
					}else{
						printf("%d(A)\n",score);
					}
				}
				
			}else{
				printf("%d(D)\n",score);
			}
	   	}else{
	   		if(score>=55){
	   			printf("%d(D)\n",score);
			}else{
				printf("%d(F)\n",score);	
			   }
		}
				
		
	}
	

}
		
	



