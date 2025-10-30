#include <stdio.h>
#include <math.h>
int main(){
	int a,b;
	printf("Enter a: ");
	scanf("%d", &a);
	printf("Enter b: ");
	scanf("%d", &b);
	printf("Cac so nguyen to nam trong khoang (%d;%d) la: ", a,b);
	for(int i=a; i<=b; i++){
		if(i<=1){
			continue;
		}
		int isPrime=1;
		for(int j=2; j<i; j++){
			if(i%j==0){
			  isPrime=0;
			  break;
			}
		}
		if(isPrime==1)
		    printf("%d ", i);
		    }
}
