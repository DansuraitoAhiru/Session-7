#include <stdio.h>
#include <math.h>
int main(){
	int n;
	int x, count=0;
	printf("Enter n: ");
	scanf("%d", &n);
	do {
	printf("Enter x: ");
	scanf("%d", &x);
	}
	while(x<0 || x>9);
	while(n!=0){
		int temp=n%10;
		if(x==temp)
		   count++;
		n/=10;
	}
	printf("Chu so %d da xuat hien %d trong n", x, count);
}
