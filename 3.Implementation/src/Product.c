#include "com.h"

float* mul_Real(float inreal_1[],float inimaginary_1[],float inreal_2[],float inimaginary_2[],float outreal[],int maxlen)
{
    
    for (int i=0;i<maxlen;i++)
        outreal[i] = inreal_1[i]*inreal_2[i] - inimaginary_1[i]*inimaginary_2[i];
    //return outreal;
    
}

float* mul_Img(float inreal_1[],float inimaginary_1[],float inreal_2[],float inimaginary_2[],float outimaginary[],int maxlen)
{
    for (int i=0;i<maxlen;i++)
        outimaginary[i] = inreal_1[i]*inimaginary_2[i] + inimaginary_1[i]*inreal_2[i];
    return outimaginary;
}


int io_product()
{
    int  m=0,n=0;

	printf("Enter the length of Discrete signal 1 : ");
	scanf("%d",&m);
    printf("Enter the length of Discrete signal 2 : ");
	scanf("%d",&n);

    float inreal_1[m],inimaginary_1[m],inreal_2[n],inimaginary_2[n];

	if (((m<=0)&&(isalpha(m)==0)&&(ispunct(m)==0)) && ((n<=0)&&(isalpha(n)==0)&&(ispunct(n)==0)))
	{
	printf("\nEnter Valid lengths for both Signals.\n");
	}
	else {
        int i;
		printf("\nEnter The Real And Imaginary part of the Signal:\n");
		for(i=0;i<m;i++)
			scanf("%f %f",&inreal_1[i],&inimaginary_1[i]);
        printf("\nEnter The Real And Imaginary part of the Signal:\n");
		for(i=0;i<n;i++)
			scanf("%f %f",&inreal_2[i],&inimaginary_2[i]);
        
        int maxlen=m;
        if (m>n)
        {
           maxlen = m;
           for (i=n;i<maxlen;i++)
           {
              inreal_2[i]=0;
              inimaginary_2[i]=0;
           }
        }
        else if(m<n)
        {
           maxlen = n;
           for (i=m;i<maxlen;i++)
           {
              inreal_1[i]=0;
              inimaginary_1[i]=0;
           }
        }
        
        float outreal[maxlen],outimaginary[maxlen];
        for ( i=0;i<maxlen;i++)
       {printf("%f\n",inreal_1[i]);
       printf("%f\n",inreal_2[i]);}
        mul_Real(inreal_1,inimaginary_1,inreal_2,inimaginary_2,outreal,maxlen);
        mul_Img(inreal_1,inimaginary_1,inreal_2,inimaginary_2,outimaginary,maxlen);

        for (i=0;i<maxlen;i++)
        {
            printf("\nThe product is :\n");
            printf("Y[%d] = %.4f + (%0.4fj)\n",i,outreal[i],outimaginary[i]);
        }
    
     
}
}

