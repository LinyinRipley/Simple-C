# Simple-C
#include<stdio.h>
int main()
{int a,s=0,t,i,n;
printf("(共有a个,且a在0到9之间)S=a+aa+aaa+aaaa......\n请输入a：");
scanf("%d",&a);
t=0;
for(i=0;i<a;i++){
t=10*t+a;
s+=t;
}
printf("S=%d",t);
for(n=2;n<=a;n++){
	t/=10;
	printf("+%d",t);
}
printf("=%d",s);
return 0;}
