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

int integer_display_array(float f_array[],int i_array[]){

    printf("Integer array: \n");
    for (int i = 0; i < 20; ++i)
    {
       i_array[i]= round(f_array[i]);
        printf(" integer[%d] =%d \n",i, i_array[i]);
    }
}

int float_evens(float f_array[]){
    int i, f_even = 0;
     for (i = 0; i < 20; i++)
        {
            if ((int)f_array[i]%2==0)
            {
                f_even ++;
            }
        }
       return f_even;
}
int integer_evens(int i_array[]){
    int i,i_even = 0;
     for (i = 0; i < 20; i++)
        {
            if ( i_array[i]%2 == 0)
            {
                i_even ++;
            }
        }
       return i_even;
}

int make_array(int m_array[],int range,int exp,int md){
    int i,j, freq[25], count;

    for(i = 0;i<range;i++){
        m_array[i] = i;
        freq[i]=-1;
        m_array[i] = (long long int)pow(exp,m_array[i])% (long long int)md;
    }
        for(i=0;i<range;i++){
            printf("arr[%d] = %ld\n",i,m_array[i]);
            count = 1;
            for(j=i+1;j<range;j++){
                if(m_array[i]==m_array[j]){
                    count++;
                    freq[j]=0;
                }
            }
            if(freq[i]!=0){
                freq[i]=count;
            }
        }
        for(i=0;i<range;i++){
            if(freq[i]!=0){

                printf("Value %d is a most frequently occuring value (%d times).\n",m_array[i],freq[i]);
            }
        }
    }
