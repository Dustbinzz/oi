#include<iostream>
#include<cstring>
#define MAXM 100
#define MAXN 1000 
using namespace std;
int ram[MAXM+1];
int artical[MAXN+1];
int m,n,t=0,a=0;
void ram_search(int x);
void out_search(int x);

int main()
{
	memset(ram,-1,sizeof(ram));
	cin>>m>>n;
	for(int i=1;i<=n;++i)
		cin>>artical[i];
	for(int i=1;i<=n;++i)
	{
		ram_search(i);
	}
	cout<<t<<endl;
	return 0;
}

void ram_search(int x)
{
	for(int i=1;i<=m;++i)
	{
		if(ram[i]==artical[x])
			return;
	}
	out_search(x);
	++t;
	return;
}

void out_search(int x)
{
	int temp=0;
	if(a<m)
	{
		ram[++a]=artical[x];
	}
	else
	{
		for(int i=1;i<=m-1;++i)
		{
			temp=ram[i];
			ram[i]=ram[i+1];
			ram[i+1]=temp;
		}
		ram[m]=artical[x];
	}
	return;
}
