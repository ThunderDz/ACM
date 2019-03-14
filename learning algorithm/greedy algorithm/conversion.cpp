#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	void consversion(char s[],char s2[],int d1,int d2);
	char s[10],s2[10];
	scanf("%s",s);
	int d1,d2;
	scanf("%d %d",&d1,&d2);
	consversion(s,s2,d1,d2);
    printf("%s\n",s2);
    return 0;
}
void consversion(char s[],char s2[],int d1,int d2)
{
	int num=0;
	char c;
	int t;
	for(int i=0;s[i]!='\0';i++)
	{
		if(s[i]>='0'&&s[i]<='9')
		{
			t=s[i]-'0';
		}
		else
		{
			t=s[i]-'A'+10;
		}
		num=num*d1+t;
	}
	//printf("%s\n",s);
	//printf("%d\n",num);
	int i=0;
	while(true)
	{
		t=num%d2;
		if(t<=9)
		{
			s2[i]=t+'0';
		}
		else
		{
			s2[i]=t+'A'-10;
		}
		num/=d2;
		if(num==0)
		{
			break;
		}
		i++;
	}
	for(int j=0;j<i/2;j++)
	{
		c=s2[j];
		s2[j]=s2[i-j];
		s2[i-j]=c;
	}
	s2[i+1]='\0';
}
