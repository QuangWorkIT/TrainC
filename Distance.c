#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// kiem tra so nhap tu ban phim co phai so nguyen to ko?
int main() {
	int n; 
	printf("Nhap n: ");
	scanf("%d", &n); 
	printf("%d\n", n);
	//printf("%u", &n);
	
	int i, flag = 0;
	for(i=2; i <= sqrt(n); i++){
		if(n%i == 0) 
		{
		flag = 1;
		}
	}
	if(flag == 0 ) printf("%d la so nguyen to", n);
	else printf("%d ko la so nguyen to", n);
	return 0;
}


