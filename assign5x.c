#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
 {
    int i,j;
    double n, arrayrandom[10000], array[10000],arrayrandomg[12],arrayrandomk[10000],sum1,Y;
    srand((unsigned)time(NULL));            
    for(i = 0; i < 10000; i++) 
    {
        arrayrandom[i] = (double)rand() / RAND_MAX;                  
    }
    for(i=0; i<10000; i++)
    {
    if(arrayrandom[i]<0.5)
    {
        array[i]= 1;
        printf("%f\n", array[i]);
    }
    else
    {
        array[i]= (-1);
        printf("%f\n", array[i]);
    }
    }
    return 0;
}
