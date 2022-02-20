 #include <stdio.h>
 #define PI 3.14
 int main()
 {
   float radius,area,circumference,diametre;
   printf("enter the value of radius");
   scanf("%f",&radius);
   
   diametre =2*radius;
   circumference=2*PI*radius;
   area = PI*radius*radius;
   
   printf("\n diametre of a circle =%.2f",diametre);
   printf("\n circumference of the circle =%.2f",circumference);
   printf("\n area of the circle of the circle=%.2f",area);
   
   
   return 0;
     	
 	
 }
