#include<iostream>
#include<cstring>
#include<math.h>
#define MAXN 100
#define INF 10000000
using namespace std;
char word[MAXN + 1];
void search(int len,int &max,int &min);
bool prime(int max,int min);

int main()
{
	int max = -INF, min = INF;
	cin.getline(word, MAXN + 1);
	int len = strlen(word);
	search(len,max,min);
	if (prime(max,min))
	{
		cout << "Lucky Word" << endl;
		cout << max - min << endl;
	}
	else
	{
		cout << "No Answer" << endl;
		cout << 0 << endl;
	}
	return 0;
}

void search(int len,int &max,int &min)
{
	int temp = 0;
	char ctemp = 0;
	for (int i=0;i<len;++i)
	{
		temp = 0;
		if (word[i] != ' ')
		{
			ctemp = word[i];
			for (int j=i;j<len;++j)
			{
				if (ctemp == word[j])
				{
					++temp;
					word[j] = ' ';
				}
			}
			if (temp > max)	max = temp;
			if (temp < min)min = temp;
		}
	}
}

bool prime(int max,int min)
{
	int temp = max - min;
	if (temp < 2)
		return false;
	else
	{
		for (int i = 2; i <= floor(sqrt(temp)); ++i)
		{
			if (temp%i == 0)
				return false;
		}
	}
	return true;
}
