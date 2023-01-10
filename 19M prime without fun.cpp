#include<stdio.h>
int i,ch=0;
prime(int n){
	for(i=1;i<=n;i++){
		if(n%i==0){
			ch+=1;
		}
	}
	return ch;
}
main(){
	int n,r;
	printf("Enter a number :");
	scanf("%d",&n);
	if(n>0){
	r=prime(n);
	if(r==2){
		printf("Given number is prime");
	}
	else{
		printf("Given number is not prime");
	}
}
else{
	printf("Invalid input");
}
}

