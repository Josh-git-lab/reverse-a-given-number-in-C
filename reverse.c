#include <stdio.h>
//RA2511003012176 JOSH JIBY
int main(){
	int num,rev=0,temp=0;
	printf("Enter the number to be reversed: ");
	scanf("%d",&num);
	while(0<num){
		temp=num%10;
		rev=rev*10+temp;
		num/=10;
	}
	printf("%d",rev);
	return 0;
	
}
