#include <stdio.h>
 
int main() {
 
    double num[6];
    int i, count=0;
    
    for(i=0; i<6; i++)
    {
        scanf("%lf", &num[i]);
    }
    
    for(i=0; i<6; i++)
    {
        if(num[i] > 0) count++;
    }
    
    printf("%d valores positivos\n", count);
 
    return 0;
}