#include <stdio.h>
#include <math.h>
int main(){
	int n,m,b=0;
	printf("Enter n: ");
	scanf("%d", &n);
	int original=n;
	while(n>0){
		int temp=n%10;
		b=b+temp*temp*temp;
		n/=10;
		}
	if(b==original){
		printf("%d la so Amstrong \n", original);
	}else{
	    printf("%d ko phai la so Amstrong \n", original);
	}
}
