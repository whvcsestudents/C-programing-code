#include "StdAfx.h"
#include<stdio.h>
int main()
{
  int a,b,x,y;
  printf("输入生成图形的长和宽：");
  scanf("%d,%d",&a,&b);
    for(x=0;x<a;x++)
    {
      for(y=0;y<b;y++)
        {
          printf("*");
        }
      printf("\n");
    }
	getchar();
	getchar();
}
