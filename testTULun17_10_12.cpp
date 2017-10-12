#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
  float i;
  double bonus,bon1,bon2,bon4,bon6,bon10;
  bon1=100000*0.1;
  bon2=bon1+100000*0.075;
  bon4=bon2+100000*0.05;
  bon6=bon4+100000*0.03;
  bon10=bon6+400000*0.015;
  printf("请输入利润:");
  scanf("%f",&i);
  if (i<=100000)
  {
     bonus=i*0.1;
  }
  else if (i<=200000)
  {
     bonus=bon1+(i-100000)*0.075;
  }
  else if (i<=400000)
  {
     bonus=bon2+(i-200000)*0.05;
  }
  else if (i<=600000)
  {
     bonus=bon4+(i-400000)*0.03;
  }
  else if (i<=1000000)
  {
     bonus=bon6+(i-600000)*0.015;
  }
  else
  {
     bonus=bon10+(i-1000000)*0.01;
  }
  printf("奖金是: %.2f\n",bonus);
 }
/*void main()
{
	char a[10];
	scanf("%s",a);
	if ('-'==a[0])
	{
		printf("不是正整数！\n");
		return ;
	}
	else 
	{
		if (strlen(a)<=5)
		{
			printf("输入正确！\n");
			printf("该数是%d位数！ \n",strlen(a));
			printf("逆序输出：");
			for (int j=strlen(a)-1;j>=0;--j)
			{
				printf("%-5c",a[j]);
			}
			putchar('\n');
		}
		else
		{
			printf("输入错误！大于5位！\n");
		}
	}
}