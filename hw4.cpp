#include<stdio.h>
#include<stdlib.h>
int main()
{
	int y,m,d,total=0,n,x;
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	printf("請輸入年 月 日判斷為第幾天:");
	scanf("%d%d%d",&y,&m,&d);
	
	if(y%400==0||y%4==0&&y%100!=0==0)
	a[1]=29;
	else
	a[1]=28;
     
	
	for(x=0;x<=m-2;x++){
	total=total+a[x];}
    
   if(m==1)
    {
	    printf("為第%d日",d);
    }
	else
	{
		printf("為第%d日",total+d);
	}
	system("pause");
	return 0 ;

}
	
	
	
