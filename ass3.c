#include<stdio.h>
int main()
{
	int integer;
	printf("enter the value of integer \n: ");
	scanf("%d",&integer);
	
	switch(integer%2)
	{
	   case 0:
	   	printf("%d number is even");
	   	break;
	   	case 1:
	   		printf("%d number is odd:\n");
			   break;
		   	}
		   	return 0;
}
