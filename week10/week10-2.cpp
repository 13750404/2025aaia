///week10-2.cpp
#include <stdio.h>
int main()
{
	printf("請輸入1個整數: ");
	int n;
	scanf("%d",&n); ///ex. 輸入397
	///printf("個位數是 %d\n", n%10);
	///printf("十位數是 %d\n", n/10%10);
	///printf("百位數是 %d\n", n/100);
	while(n>0){///如果還有剩下n就繼續做
        printf("%d剝皮剝出:%d\n",n,n%10);///剝婆
        n = n/10; ///數字變小了變1/10
    }
}
