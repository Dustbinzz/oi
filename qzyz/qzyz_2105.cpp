#include<iostream>
#include<string.h>
#include<cctype>
#define ARTICAL 1000000
#define WORD 10
using namespace std;
char word[WORD+1];
char artical[ARTICAL+1];
bool compare(int x,int y);

int main()
{
	cin.getline(word,WORD+1);
	cin.getline(artical,ARTICAL+1);
	int len1=strlen(word);
	int len2=strlen(artical);
	int i=0,t=0,first=ARTICAL-1,appr=0;
	while(i<len2)
	{
		int start=i,len3=0;
		for(;artical[i]!=' ';++i)
		{
			++len3;
		}
		if(len3==len1)
		{
			if(compare(len1,start))
			{
				if(start<first)
					first=start;
				appr=1;
				++t;
			}
		}
		++i;
	}
	if(appr)
		cout<<t<<" "<<first<<endl;
	else
		cout<<-1<<endl;
	return 0;
}

bool compare(int x,int y)
{
	int j=0;
	bool bl=true;
	for(int i=y;i<y+x;++i)
	{
		if(tolower(artical[i])!=tolower(word[j]))
			bl=false;
		++j;
	}
	if(bl)
		return true;
	else 
		return false;
}
