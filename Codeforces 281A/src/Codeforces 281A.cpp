
#include <stdio.h>
using namespace std;


int main() {
	char s1[1001];
	scanf("%s", s1);
	if((s1[0]>=97)&&(s1[0]<=122))
		s1[0]=s1[0]-32;
	printf(s1);

}
