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
  printf("����������:");
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
  printf("������: %.2f\n",bonus);
 }
/*void main()
{
	char a[10];
	scanf("%s",a);
	if ('-'==a[0])
	{
		printf("������������\n");
		return ;
	}
	else 
	{
		if (strlen(a)<=5)
		{
			printf("������ȷ��\n");
			printf("������%dλ���� \n",strlen(a));
			printf("���������");
			for (int j=strlen(a)-1;j>=0;--j)
			{
				printf("%-5c",a[j]);
			}
			putchar('\n');
		}
		else
		{
			printf("������󣡴���5λ��\n");
		}
	}
}