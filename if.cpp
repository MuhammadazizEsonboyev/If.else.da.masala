#include <stdio.h>
#include <stdlib.h>
int main(void){
int a;
int b;
int c;
int d;

printf("A ga qiymat kiriting: ");
scanf("%d", &a);
printf("B ga qiymat kiriting: ");
scanf("%d", &b);



if(a > b){
printf("a qiymati b dan katta C ga qiymat kiriting 1");	
printf("%d > %d \n", a , b);
printf("C = ");
scanf("%d", &c);
d = a + b + c;
printf("%d + %d + %d = %d \n", a, b, c, d );
printf("C %d ga teng", d);
}
else if(a < b){
	printf("b qiymati a dan katta a qiymatini katta yozing ");	
}

else if(a == b){
	printf("A %d B %d  qiymatlar teng va ular manfiy son dastur tugatildi \n", a , b);
}

else if(a == b){
	printf("Bu sonlar musbat sonlar \n");	
     printf("%d > %d \n", a , b);
}

else{
	printf("xato");
} 


return 0 ;
}









