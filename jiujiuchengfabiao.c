#include<stdio.h>
void main()
{
	int i,j,n;
	scanf("%d",&n);
//	for(n=1;n<=9;n++){
//			printf(" "); 
//		
	for(i=1;i<=n;i++){
		
		for(j=1;j<=n;j++ ){
			
			if(j<i){
				printf("\t");
		}else{
			printf("%d*%d=%2d ",i,j,i*j);
		}
	}
		printf("\n");
	}
//}

	
	
}