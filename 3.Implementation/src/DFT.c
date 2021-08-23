#include"com.h"




float* dft_real(float inreal[],float inimaginary[],float outreal[],int m){
	for(int k=0;k<m;k++){
		float sumreal = 0;
		for(int t=0;t<m;t++){
			double angle = 2 * 3.14152 * t * k / m;
        	sumreal +=  inreal[t] * cos(angle) + inimaginary[t] * sin(angle);
        }
        outreal[k] = sumreal;
	}

return outreal;

}


float* dft_imaginary(float inreal[],float inimaginary[],float outimaginary[],int m){
	for(int k=0;k<m;k++){
		float sumimaginary = 0;
		for(int t=0;t<m;t++){
			double angle = 2 * 3.14152 * t * k / m;
        	sumimaginary += -inreal[t] * sin(angle) + inimaginary[t] * cos(angle);
        }
        outimaginary[k] = sumimaginary;
	}

return outimaginary;

}






int io_DFT(){

	int  m;
	printf("Enter the length of Discrete signal: ");
	scanf("%d",&m);
	
	if((m<=0)&&(isalpha(m)==0)&&(ispunct(m)==0))
	{
	printf("\nEnter Valid M\n");
	}
	else {
		printf("\nEnter The Real And Imaginary part of the Signal:\n");
		float inreal[m],inimaginary[m],outreal[m],outimaginary[m];
		for(int i=0;i<m;i++){
			scanf("%f %f",&inreal[i],&inimaginary[i]);
		}
		dft_real(inreal,inimaginary,outreal,m);
		dft_imaginary(inreal,inimaginary,outimaginary,m);
		for(int i = 0;i<m;i++){
			printf("\n%f + (%fj)\n",outreal[i],outimaginary[i]);
		}
	
	}

	
}


