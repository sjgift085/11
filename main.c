#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
 		int i;
 		int grade[5];
 		
 		for(i=0; i<5; i++){
		 printf("input value[%i] = ", i);
		 scanf("%d", &grade[i]);
		 }
		 
		 int count;
		 count = 0;
		 
		 for(i=0; i<5; i++){
			printf("grade[%i] = %i\n", i, *(grade+i));
			count = count + *(grade+i);
			}
		 
		 printf("\naverage : %i\n", count/i);
		 
 		
  system("PAUSE");	
  return 0;
}
