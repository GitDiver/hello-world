#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main(){

int t,i,a,b,c,s ;

do {
    scanf("%d",&t);
}
while(t<1 && t<10000);
s=0;

for(i=0;i<t;i++){
    scanf("%d %d %d",&a,&b,&c);
    s=a+b+c;
     if (s % 2==0){
        printf("Second");

     }
     else{
        printf("First");
     }
}



    
}