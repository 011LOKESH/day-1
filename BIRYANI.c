#include <stdio.h>

int main(void) {
    int x,y, t;
    scanf("%d",&t);
    while (t--)
    {
        scanf("%d%d",&x,&y);
        printf("%d\n",x*y);
    }
	return 0;
}

