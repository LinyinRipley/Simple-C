//一个初学者的简单小实验
#include <stdio.h>
int main(){
	int n=0,i,j,k=1;
	int a,b;
	int y[10];
	int flag=0;
	printf("请输入你需要计算质因数（质因数最多只能有十个）：");
	scanf("%d",&a);
	b=a;
	for(i=2;b!=1;i++){
		if(b%i==0){
			if(i==2){flag=1;}
			for(j=2;j<i;j++){
				if(i%j==0){break;}
			    flag=1;
			}
			if(flag){y[n]=i;b=b/i;n++;i=1;flag=0;}
		}
	
	}
	if(n>=1)printf("%d=%d",a,y[0]);
	
	for(k=1;k<n;k++){
    printf("*%d",y[k]);
	}

return 0;}
