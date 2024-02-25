//#include<stdio.h>
//int main(){
//	int n,i;
//	int fact;
//	printf("enter number:");
//	scanf("%d",&n);
//	for(i=1;i<=n;i++){
//		fact = fact * i;
//	}
//	printf("Factorial of %d is %d",n,fact);
//}
//#include<stdio.h>
//int fact(n){
//	if(n>=1){
//		return n*fact(n-1);
//	}
//	else{
//		return 1;
//	}
//	
//}
//void main(){
//	int n;
//	printf("enter number:");
//	scanf("%d",&n);
//	int ans = fact(n);
//	printf("Factorial of %d is %d",n,ans);
//}
//Fibonaci
#include<stdio.h>
int main(){
	int n,n1,n2,i,fibo;
	printf("Enter value:");
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		if(i==0){
			n1 = 0;
			printf("%d\t",n1);
		}
		if(i==1){
			n2 = 1;
			printf("%d\t",n2);
		}
		else{
			fibo = n1+n2;
			printf("%d\t",fibo);
			n1=n2;
			n2=fibo;
		}
		
	}	
}
//#include<stdio.h>
//int fibo(n){
//	int f;
//	if(n==0){
//		return 0;
//	}
//	if(n==1){
//		return 1;
//	}
//	else{
//		f =  fibo(n-2)+fibo(n-1);
//		return f;
//	}
//	
//}
//void main(){
//	int n,i;
//	printf("enter number:");
//	scanf("%d",&n);
//	for(i = 0; i < n; i++){
//		printf("%d\t", fibo(i));
//	}
//}
