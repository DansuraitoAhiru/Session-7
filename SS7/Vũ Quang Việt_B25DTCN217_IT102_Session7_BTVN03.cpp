#include <stdio.h>
#include <math.h>
int main(){
	int n, original,reverse;
	printf("Nhap so n: ");
	scanf("%d", &n);
	if(n<=0){
	   printf("n phai la so duong");
	   return 1;
	}
	original=n;
	while(n>0){
		reverse=reverse*10+n%10;
		n/=10;
	}
	
	if(original==reverse)
	    printf("%d co doi xung", original);
	else
	    printf("%d ko doi xung", original);
	return 0;
}
