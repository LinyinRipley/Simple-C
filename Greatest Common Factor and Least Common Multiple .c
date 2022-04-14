#include<stdio.h>

int main()
{  int i,k,t;
int a,c,y=1,b=1;
   printf("请输入你需要进行计算的两个数字（按照'1 2'的格式）：");
   scanf("%d %d",&a,&c);
   if(a>c){t=a;a=b;b=t;}
   for(i=2;i<=a;i++){
	   if(a%i==0&&c%i==0){y=i;break;}
	  
   }
   for(k=c;k>=c;k++){
	   if(k%a==0&&k%c==0){b=k;break;}
   }
   printf("%d与%d",a,c);
   if(y==1){printf("公因数只有1\n");}
   else printf("最小公因数是:%d\n",y);
    printf("%d与%d",a,c);
	if(b==1){printf("没有公约数\n");}
	else printf("最大公倍数是:%d\n",b);

return 0;}
