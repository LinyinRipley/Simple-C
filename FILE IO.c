# Simple-C
#include<stdio.h>
#include<stdlib.h>
int main(){
	char feed[20];
	char str[20];
   
	FILE *fp=fopen("data.txt","w");
	while(scanf("%s",str)!=EOF)
	{
	  fputs(str,fp);
	}
  fclose(fp);
  FILE *fp=fopen("data.txt","r");
  fscanf(fp,"%s",&feed);
  printf("%s",feed);
  fclose(fp);
system("pause");
return 0;
}
