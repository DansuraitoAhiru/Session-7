#include <stdio.h>
#include <math.h>
int main(){
	int n, reverse=0;
	printf("Nhap so n: ");
	scanf("%d", &n);
	while(n!=0){
	   reverse=reverse*10+n%10;
	   n/=10;
	}
	printf("-> %d", reverse);
	return 0;
}
