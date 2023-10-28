#include <stdlib.h>


int f(char[20] s){
	printf("Mesajul este: %c",s);
}

int main(){
	int a,b;
	a=0;
	b=1;
	while(a<1000){
		cout<<a<<' ';
		b=a+b;
		a=b-a;
	}
	f("Salutare!");
}
