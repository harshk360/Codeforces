//============================================================================
// Name        : Codeforces 228A.cpp
// Author      : Harshit Kumar
// Version     : 1.0
// Description : 30 ms, 00 kb
//============================================================================

#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	long int scanned[5], existing[5];
	int count{0};
	scanf("%ld %ld %ld %ld", &scanned[0], &scanned[1], &scanned[2], &scanned[3]);
	if(scanned[0]==scanned[1])
	{
		existing[0]=scanned[0];
		count+=1;
	}
	else
		{
		existing[0]=scanned[0];
		existing[1]=scanned[1];
		count+=2;
		}
	for(int i=2;i<4;i++)
	{
		if(scanned[i]==existing[0]||scanned[i]==existing[1]||scanned[i]==existing[2])
			continue;
		else
		{
			existing[2]=scanned[i];
			count+=1;
	}
	}
cout<<4-count;
}
