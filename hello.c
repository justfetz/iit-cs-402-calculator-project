#include <stdio.h>  
#include <math.h>

//fetzer,jason, 402_iit

int calculate(int x, int y);



int main()  
{  
	
	int op=0;
	double x, y, result;
	do {
    printf("Please make a selection:\n");
    printf("type corresponding number: '1. +','2. -','3. *','4. /','5. 1/X','6. X^2', '7. X^Y', '8. N!', '9. quit'\n");
    scanf("%d", &op);
    
    switch(op) {
		case 1:
			printf("Enter first number:\n");
			scanf("%lf", &x);
			printf("Enter second number:\n");
			scanf("%lf", &y);
			result = (double)x + (double)y;
			printf(" %.1lf, %.1lf, %.1lf\n", x,y,result); 
			// return result;
			 break;
		case 2:
			printf("Enter first number:\n");
			scanf("%lf", &x);
			printf("Enter second number:\n");
			scanf("%lf", &y);
			result = x - y;
			printf("%.1lf - %.1lf = %.1lf\n", x, y, result); 
			 //return result;
			 break;
		case 3:
			printf("Enter first number:\n");
			scanf("%lf", &x);
			printf("Enter second number:\n");
			scanf("%lf", &y);
			result = x * y;
			printf("%.1lf * %.1lf = %.1lf\n", x, y, result); 
			//return result;
			break;
		case 4:
			printf("Enter first number:\n");
			scanf("%lf", &x);
			printf("Enter second number:\n");
			scanf("%lf", &y);
			result = x / y;
			printf("%.1lf / %.1lf = %.1lf\n", x, y, result); 
			//return result;
			break;	 
		case 5:
			printf("Enter operand number:\n");
			scanf("%lf", &x);
			result = 1/x;
			//result = pow(x,y);
			printf("1 / %.1lf = %.1lf\n", x, result); 
			//return result;
			break;	 
		case 6:
			printf("Enter first number:\n");
			scanf("%lf", &x);
			
			result = pow(x,2);
			printf("%.1lf ^ 2 = %.1lf\n", x, result); 
			//return result;
			break;	
		case 7:
			printf("Enter first number:\n");
			scanf("%lf", &x);
			printf("Enter second number:\n");
			scanf("%lf", &y);
			result = pow(x,y);
			printf("%.1lf ^ %.1lf = %.1lf\n", x, y, result); 
			//return result;
			break;	
		case 8:
			printf("Enter factorial number:\n");
			scanf("%lf", &x);
			int i;
			double factorial=1;
			if(x < 0) {
				printf("Can't factorial a negative number.");
			}
			else {
				for(i=2;i<=x;++i) {
					factorial *= i;
				}

			printf("factorial of your value: %.1lf\n", factorial);
			}
			//printf("%.2d / %.2d = %.2d\n", x, y, result); 
			//return result;
			break;		
		case 9:
			exit();
			//break;
		default:
			printf("Not recognized.");
			break;
	}
}		while(op!=9);
		return 0;
}
	
	
 





