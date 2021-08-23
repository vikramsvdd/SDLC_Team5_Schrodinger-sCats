#include "com.h"


 float* Circ_convo(float x[],float h[],float y[],int n)
{
    
    float x2[n],a[n];
    y[0]=0;
    a[0]=h[0];
    for(int j=1;j<n;j++)                            /*folding h(n) to h(-n)*/
        a[j]=h[n-j];                       
    for(int i=0;i<n;i++)                             /*Circular convolution*/
        y[0]+=x[i]*a[i];
    for(int k=1;k<n;k++)
    {
        y[k]=0;                         /*circular shift*/
        for(int j=1;j<n;j++)
            x2[j]=a[j-1];
        x2[0]=a[n-1];
        for(int i=0;i<n;i++)
        {
            a[i]=x2[i];
            y[k]+=x[i]*x2[i];
        }
    }
    return y;
}



int io_1()
{
    int m=0,n=0;
    printf("\n Enter the length of the first sequence = ");
    scanf("%d",&m);
    printf("\n Enter the length of the second sequence = ");
    scanf("%d",&n);
    
   if((m<=0) || (n<=0) || (isalpha(m)!=0) || (isalpha(n)!=0) || (ispunct(m)!=0) || (ispunct(n)!=0) )
   {
   		printf("\n-1");
	}  
   else{
   float x[m],h[n];
    printf("\nEnter the first sequence = ");
    for(int i=0;i<m;i++)
        scanf("%f",&x[i]);
    printf("\nEnter the second sequence = ");
    for(int i=0;i<n;i++)
        scanf("%f",&h[i]);
    if(m-n!=0)                                      /*If length of both sequences are not equal*/
    {
        if(m>n)                                 /* Pad the smaller sequence with zero*/
        {
            for(int i=n;i<m;i++)
                h[i]=0;
            n=m;
        }
        for(int i=m;i<n;i++)
            x[i]=0;
        m=n;
    }

    float y[n];
    Circ_convo(x,h,y,n);
    /*displaying the result*/
    printf(" \nThe circular convolution :\n");
    for(int i=0;i<n;i++)
        printf("Y[%d] : %f \n",i,y[i]);
    }
   
    
}


