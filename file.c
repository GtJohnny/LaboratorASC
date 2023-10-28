#include <stdio.h>


void f(char s[]){
	printf("Mesajul este: %s",s);
}

int main(){
	int a,b;
	a=0;
	b=1;
	while(a<1000){
		printf("%d",a);
		b=a+b;
		a=b-a;
	}
	f("Salutare!");
}
