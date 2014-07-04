//============================================================================
// Name        : Codeforces 271A.cpp
// Author      : Harshit Kumar
// Version     : 1.0
// Description : 30 ms, 00 kb
//============================================================================

#include <iostream>

using namespace std;

int main()
{
   int inp, y[5];
   cin >> inp;
   inp+=1;
   y[0]=inp/1000;
   y[1]=(inp/100)%10;
   y[2]=(inp/10)%10;
   y[3]=inp%10;
   while (y[0] == y[1] || y[0] == y[2] || y[0] == y[3] || y[1] == y[2] || y[1] == y[3] || y[2] == y[3])
   {	  inp+=1;
	   	  y[0]=inp/1000;
	      y[1]=(inp/100)%10;
	      y[2]=(inp/10)%10;
	      y[3]=inp%10;
   }
   cout << y[0]<<y[1]<<y[2]<<y[3] << endl;
   return 0;
}
