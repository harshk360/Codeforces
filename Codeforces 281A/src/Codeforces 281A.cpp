//============================================================================
// Name        : Codeforces 281A.cpp
// Author      : Harshit Kumar
// Version     : 1.0
// Description : 30 ms, 00 kb
//============================================================================
#include <stdio.h>
using namespace std;


int main() {
	char s1[1001];
	scanf("%s", s1);
	if((s1[0]>=97)&&(s1[0]<=122))
		s1[0]=s1[0]-32;
	printf(s1);

}
