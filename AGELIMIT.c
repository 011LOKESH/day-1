// Day 1 
// https://www.codechef.com/problems/AGELIMIT?tab=statement
// Question link^^^

#include <stdio.h>
int main(void) {
    int t ;
	scanf("%d",&t);
	while(t--)
	{
	 int x,y,a ;
	 scanf("%d%d%d", &x,&y,&a);
	 
	 if (a>=x && a<y)
	  {
	     printf("YES\n");
	  }
	   else
	  {
	     printf("NO\n");
	  }
	    
	}
	
	return 0;
}

