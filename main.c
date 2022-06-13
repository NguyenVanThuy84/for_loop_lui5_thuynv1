#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int min,max;
	int result;
	printf ("\t In cac so chia het cho 7 \n");
	printf ("nhap gia tri min = \n");
	scanf ("%d", &min);
	printf ("nhap gia tri max = \n ");
	scanf ("%d", &max);
	for (result = min; result <= max; result ++ )
	{
	if (result %7 ==0){
			printf ("gia tri result = %d \n", result);
	}

}
	return 0;
}
