#include"com.h"

float* Calculate_IDFT_real(float X_real[],float X_imaginary[],float x_real[],int len){
    for (int i= 0; i < len; i++)
    {
        x_real[i] = 0;
        
        for(int k = 0; k < len; k++)
        {
            float theta = (2 *3.141592 *k * i)/ len;
            x_real[i] = x_real[i] + (X_real[k] * cos (theta) - X_imaginary[k] *sin(theta));
            
        }
        x_real[i] = x_real[i]/len;
    }  
    return x_real;
}

float* Calculate_IDFT_imaginary(float X_real[],float X_imaginary[],float x_imaginary[],int len){
    
    

    for (int i= 0; i < len; i++)
    {
        x_imaginary[i] = 0;
        
        for(int k = 0; k < len; k++)
        {
            float theta = (2 *3.141592 *k * i)/ len;
            x_imaginary[i] = x_imaginary[i] + (X_real[k] * sin (theta) + X_imaginary[k] *cos(theta));
            
        }
        x_imaginary[i] = x_imaginary[i]/len;
    }  
    return x_imaginary;
}

int io_IDFT()
{
    
    int len;
    printf("Enter the length of the sequence: ");
    scanf("%d", &len);
    if((len<=0) && (isalpha(len)==0) && (ispunct(len)==0)){
	    printf("-1");
	  }
    else{
      printf("\nEnter The Real And Imaginary part of the X(w):\n");
      float x_real[len];
      float x_imaginary[len];
      float X_real[len];
      float X_imaginary[len];
      for(int i=0;i<len;i++){
			  scanf("%f %f",&X_real[i],&X_imaginary[i]);
		  }
      Calculate_IDFT_real(X_real,X_imaginary,x_real,len);
		  Calculate_IDFT_imaginary(X_real,X_imaginary,x_imaginary,len);
      for(int i=0;i<len;i++){
			  printf("%f +(%fj)\n",x_real[i],x_imaginary[i]);
		  }

    }
    

    
}
