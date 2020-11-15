#include "StdAfx.h"
#include<stdio.h>
int main()
{
  int a,b,x,y;
  printf("输入生成图形的长和宽：");
  scanf("%d,%d",&a,&b);
    for(x=0;x<a;x++)//外循环 绘制竖向换行
    {
      for(y=0;y<b;y++)//内循环 绘制横向字符
        {
          printf("*");
        }
      printf("\n");
    }
	getchar();
	getchar();
}
