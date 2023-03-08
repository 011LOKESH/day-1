#include <stdio.h>

int main(void) {
	int a,b,t ;
	scanf("%d",&t);
	while (t--)
	{
	    scanf("%d%d",&a,&b);
	    if (a<b)
	    printf("%d\n",a);
	    else
	    printf("%d\n",b);
	}
	return 0;
}

