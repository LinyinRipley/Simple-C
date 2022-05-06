# Simple-C
#include<stdio.h>

//void regular(int s[10],int n)
//{int j,k;
//for(j=0;j<7;j++)
//{
//	if(n>=s[j]&&n<=s[j+1]){
//		for(k=j+1;k<8;k++)
//		{
//			s[k+1]=s[k];
//		}	
//		s[j+1]=n;
//	}
//	else continue;
//}
//}


int main(){
	 int i;
	 int t;
    FILE  *wf ,*in;
	int a[8];//={4,6,8,41,56,77,102};
    in=fopen("data.txt","r");
	for(i=0;i<7;i++)
    { fscanf(in,"%d",&a[i]);}
	 fclose(in);

	 for(i=0;i<7;i++)
    { printf("%d\t",a[i]);}   //look

	 printf("请输入你需要插入的一个数字：");
     scanf("%d",&t);

	
	 /*regular(a,t);*/
	 int j,k;
   for(j=0;j<7;j++)
{
	if(t>=a[j]&&t<=a[j+1]){
		for(k=7;k>j+1;k--)
		{
			a[k]=a[k-1];
		}
		
		a[k]=t;
		break;
	}
	
}
   for(i=0;i<8;i++)
    { printf("%d\t",a[i]);} //look
   
   wf = fopen("data.txt", "w"); 
   for(i=0;i<8;i++)
    { fprintf(wf,"%d\n",a[i]);}
    fclose(wf) ;
	
	return 0;}



