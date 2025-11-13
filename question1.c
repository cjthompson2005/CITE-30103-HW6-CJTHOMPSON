#include <stdio.h>

int main(void){
/*documentation gets input from user*/
	double length, width;
	printf("Enter rectangle length: ");
	
   	 if (scanf("%lf", &length) != 1) return 1;
   	 printf("Enter rectangle width: ");
   	 if (scanf("%lf", &width) != 1) return 1;
 /* computation */
   	 double area = length * width;
   	 double perimeter = 2.0 * (length + width);
 /* output */
   	 printf("Area = %.2f\n", area);
   	 printf("Perimeter = %.2f\n", perimeter);

   	 return 0;
}
