#include <math.h>

int float_display_array(float f_array[])
{
 int x;
 printf("Floating point array:\n");
 for(x=0;x<20;x++){
    if(f_array[x] >= 15){
        f_array[x]= f_array[x] * M_PI * M_PI;
    }
    else if(f_array[x] <= 15){
        f_array[x] =  fabs(f_array[x]);
    }
        printf("Float[%d] = %.3f\n",x,f_array[x]);
 }
}

int integer_display_array(float f_array[],int m_array[]){

    printf("Integer array: \n");
    for (int i = 0; i < 20; ++i)
    {
       m_array[i]= round(f_array[i]);
        printf(" integer[%d] =%d \n",i, m_array[i]);
    }
}

int float_evens(int f_even,  float f_array[]){
    int i;
     for (i = 0; i < 20; i++)
        {
            if (fmod(f_array[i],2)==0)
            {
                f_even ++;
            }
        }
       printf("%d",f_even);
}
int integer_evens(int i_even, int m_array[]){
    int i;
     for (i = 0; i < 20; i++)
        {
            if ((m_array[i]%2) == 0)
            {
                i_even ++;
            }
        }
       printf("%d", i_even);
}
