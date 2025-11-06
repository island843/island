#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{srand(time(0));
int number=rand()%100+1;
int x,i=0;
do{
	scanf("%d",&x);
	i++;
	if(x<number){
		printf("small\n");
	} 
	else if(x>number){
		printf("big\n");
	}
	
   } while(x!=number);
   if(x==number){
   	printf("ok you're right,the number of attempts you made is %d",i);
   }
   return 0;	
	
	
}