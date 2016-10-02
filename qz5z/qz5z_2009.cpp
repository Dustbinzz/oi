#include<cstdio>
#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;
char str1[1001];
char str2[1001];

void inside(int key)
{
	int len=strlen(str1);
	for(int i=0;i<len;++i)
	{
		if(isupper(str1[i]))
		{
			if(str1[i]+key-1>'Z')
				str1[i]=64+((str1[i]+key-1)-'Z');
			else
				str1[i]+=(key-1);
		}
	}
	char temp=0;
	for(int i=0;i<len;i+=2)
	{
		temp=str1[i];
		str1[i]=str1[i+1];
		str1[i+1]=temp;
	}
	return;
}

void outside()
{
	int len=strlen(str2);
	char temp=0;
	if(len%2==0)
	{
		for(int i=len-2;i>0;i-=2)
		{
			temp=str2[i];
			str2[i]=str2[i-1];
			str2[i-1]=temp;
		}
	}
	else
	{
		for(int i=len-1;i>0;i-=2)
		{
			temp=str2[i];
			str2[i]=str2[i-1];
			str2[i-1]=temp;
		}
	}
	int key=str2[0]-64;
	for(int i=1;i<len;++i)
	{
		if(isupper(str2[i]))
		{
			if(str2[i]-key+1<65)
				str2[i]=91-(65-(str2[i]-key+1));
			else
				str2[i]-=(key-1);
		}
	}
	return;
}

int main()
{
	int n;
	fgets(str1,101,stdin);
	cin>>n;
	getchar();
	fgets(str2,101,stdin);
	int len=strlen(str2);
	inside(n);
	outside();
	printf("%c%s\n",n+64,str1);
	for(int i=1;i<len;++i)
		cout<<str2[i];
	cout<<endl;
	return 0;
}
