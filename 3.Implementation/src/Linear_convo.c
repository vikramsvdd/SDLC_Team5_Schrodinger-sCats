
#include "com.h"
 
float* linear (float x[], float h[],int k)
{
	
    int i,j;
    float *y;
    
  	y = (float*)malloc(sizeof(float)*(k));                  					        							
			
	                                 
    for(i=0;i<(k);i++)
    {          
        *(y+i)=0;

        for(j=0;j<=i;j++)
        {                           
           *(y+i) = *(y+i) + (*(x+j)*(*(h+(i-j))));                             
        } 
    }  
	                                             				  
    return y;
    free(y);
           
}                    


int io_lin()
{          
      
	int m,n;      	
    printf("\n Enter the length of the signal x:");       
    scanf("%d",&m); 
    printf("\n Enter the length of the signal h:");
    scanf("%d",&n);    
	if((m<=0) && (n<=0) && (isalpha(m)!=0) && (isalpha(n)!=0) && (ispunct(m)!=0) && (ispunct(n)!=0) ){
		printf("\n-1");
	}    
	else
  {
	  float *x, *h,*z;
    int i,k;
    x = (float*)malloc(sizeof(float)*(m+n-1));
    h = (float*)malloc(sizeof(float)*(m+n-1));  
    
      	                
    printf("\n Enter the elements of the signal x: ");
    for(i=0;i<m;i++)                           
      scanf("%f",&x[i]);  
    
    printf("\n Enter the elements of the signal h: ");
    for(i=0;i<n; i++)         
      scanf("%f",&h[i]);
            
	  k=m+n-1; 
	
	
    // zero paddding
	                
    for(i=m;i<=k;i++)
	     *(x+i)=0;

    for(i=n;i<=k;i++)
       *(h+i)=0;
       
	  // function calling
	  z = (float*)malloc(sizeof(float)*(m+n-1));           
      z=linear(x,h,k);
     
	  // displaying the output
	           
   for(i=0;i<k;i++)
        printf("\n The Value of output y[%d]=%f",i,*(z+i));
   free(x);
   free(h);
   free(z);
  }


}
        
