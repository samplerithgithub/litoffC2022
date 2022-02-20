#include<stdio.h>
int main()
{
	int a,b;
	int op;
	printf("1.addition\n,2.substracion\n,3.multiplication\n,4.division\n");
	printf("enter the values of a and b:\n");
	scanf("%d %d",&a,&b);
	printf("enter your choice:");
	scanf("%d",&op);
	switch(op)
     {
     	case 1:
     		printf("sum of %d and %d is : %d",a,b,a+b);
     		
     	case 2:
     		printf(" sub of %d and %d",a,b,a-b);
     	case 3:
		    printf("multiplication of %d and %d is: %d",a,b,a*b);
		case 4:
		printf("division of %d and %d is: %d",a,b,a/b);
				
		 	
}
       return 0;
}
