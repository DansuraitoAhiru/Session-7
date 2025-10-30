#include <stdio.h>
#include <math.h>
int main(){
	int n;
	printf("Enter n: ");
	scanf("%d", &n);
	if(n<=0){
		printf("n phai duong");
		return 0;
	}
	for(int a=0; a*a*a<=n; a++){
		for(int b=0; b*b*b<=n; b++){
			if((a*a*a)+(b*b*b)==n)
			   printf("a= %d b= %d \n", a,b);
		}
    }
}
	
