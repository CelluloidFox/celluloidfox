#include <stdio.h>

int main()
{
	float a;
	int b;
	printf("Please input a:");
	scanf("%f", &a);
	if(a > 0)
	{ 
	  switch(b = a / 10) //best project: { b = a / 10; switch(b) }
	  {
	    case 0:
		case 1:
		case 2: printf("m = 1\n"); break;
		case 3: printf("m = 2\n"); break;
		case 4: printf("m = 3\n"); break;
		case 5: printf("m = 4\n"); break;
		default: printf("m = 5\n"); break;
	  }
	}
	else
	  printf("Error,please input again!");
	return 0;
}
