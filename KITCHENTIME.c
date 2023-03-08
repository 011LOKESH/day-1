#include <stdio.h>

int main(void) {
	int a,x,y,t;
	scanf("%d",&t);
	while (t--)
	{
	    scanf("%d%d",&x,&y);
	    a =x-y;
	    a=abs(a);
	    printf("%d\n",a);
	}
	return 0;
}

