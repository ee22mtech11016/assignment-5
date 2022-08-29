#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<math.h>
int main(void)
 {
    int i,j;
    int size=25000;
    double n, arrayrandom[size], array[size],arrayrandomg[12],arrayrandomk[size],sum1,Y;
    srand((unsigned)time(NULL));            
    for(i = 0; i < size; i++) 
    {
        arrayrandom[i] = (double)rand() / RAND_MAX;                  
    }
    for(i=0; i<size; i++)
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
 for(i = 0; i < size; i++) 
    {
        sum1=0;
        for(j=0;j<12;j++)
        {
        arrayrandomg[j] = (double)rand() / RAND_MAX;
        sum1=sum1+arrayrandomg[j];
        }
        //printf("%f\n", sum1);
        arrayrandomk[i]=sum1-6;
        //printf("%f\n", arrayrandom[i]);
    }   
    for(i = 0; i < size; i++) 
    {
        Y = arrayrandomk[i]+ ((pow(10,0.5))*array[i]);
        printf("%f\n", Y);
    }
    }
    return 0;
}
