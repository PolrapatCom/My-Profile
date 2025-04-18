#include <stdio.h>

main(){
	int x,y;
	scanf("%d",&x);
	switch(x){
	case 1:
		y = 2*x + 1;
		break;
	case 2:
		y = 2*x + 1;
		break;
	case 4:
		y = 4*x;
		break;
	case 6:
		y = 4*x;
		break;
	case 7:
		y = 4*x;
		break;
	case 8:
		y = 4*x;
		break;
	case 9:
		y = 20 - x;
		break;
	case 10:
		y = 20 - x;
		break;
	case 12:
		y = 20 - x;
		break;
	case 15:
		y = 20 - x;
		break;
	case 16:
		y = 20 - x;
		break;
	case 17:
		y = 20 - x;
		break;
	case 18:
		y = 20 - x;
		break;
	default:
		y = x;		
	}
	printf("%d",y);
}

