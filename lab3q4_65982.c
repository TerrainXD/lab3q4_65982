#include <stdio.h>
int main() {
	int a = 1 , sum = 0 , c = 0;
	printf("enter a number : ");
	while(a > 0){
		scanf("%d" ,&a);
		if (a > 0){
			sum += a;
			c++;
		}
	}
	int avg = sum/c;
	printf("sum = %d , avg = %d\n" , sum, avg);}
