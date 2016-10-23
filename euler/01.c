#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int t; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        long long int three=0, five=0, fif=0;
        long long int n, sum=0; 
        scanf("%lld",&n);
        
        three = (n-1)/3;
        five = (n-1)/5;
        fif=(n-1)/15;
	    sum = 3*(three*(three+1)/2)+5*(five*(five+1)/2)-15*(fif*(fif+1)/2);
	    printf("%lld\n",sum);
    }
    return 0;
}
