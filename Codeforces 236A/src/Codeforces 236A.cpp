//============================================================================
// Name        : Codeforces 236A.cpp
// Author      : Harshit Kumar
// Version     : 1.0
// Description : xx ms, xx kb
//============================================================================
#include <stdio.h>
#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char s1[101];
	char scanned[27];
	for(int i=0;i<26;i++)
		scanned[i]=0;
	int sum=0;
	scanf("%s", s1);
	int length = strlen(s1);
	for(int counter1=0;counter1<length;counter1++)
	{
		scanned[s1[counter1]-97]=1;
	}
	for(int counter2=0;counter2<26;counter2++)
		{
			sum+=scanned[counter2];
		}
	if(sum%2==0)
		cout<<"CHAT WITH HER!";
	else
		cout<<"IGNORE HIM!";


}
