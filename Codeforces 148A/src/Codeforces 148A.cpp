//============================================================================
// Name        : Codeforces 148A.cpp
// Author      : Harshit Kumar
// Version     : 1.0
// Description : xx ms, xx kb
//============================================================================
#include <stdio.h>
using namespace std;


int main() {
	int k,l,m,n,d, count(0);
	scanf("%d", &k);
	scanf("%d", &l);
	scanf("%d", &m);
	scanf("%d", &n);
	scanf("%d", &d);

	for(int i=1;i<=d;i++)
	{
		if(i%k==0||i%l==0||i%m==0||i%n==0)
			count+=1;
	}
	printf("%d",count);
	return 0;
}
