#include "com.h"

int main()
{    
    	int opcode; 
        printf("\n\n-------------------------------- OPERATIONS ON DISCRETE SIGNALS -- CALCULATOR ----------------------------------------\n\n\n");
        printf("Please give the serial number of the operation you want to perform : ");
    
        printf("\n\n 1.  Circular Convolution of 2 Signals.");
        printf("\n 2.  Linear Convolution of 2 Signals.");
        printf("\n 3.  Multiplication of 2 Signals.");
        printf("\n 4.  Energy and Power of a Signal.");
        printf("\n 5.  Discrete Fourier Transform of a Signal - (DFT).");
        printf("\n 6.  Inverse Discrete Fourier Transform of a Signal - (IDFT).");
       /*printf("\n 7.  Discrete Cosine Transform of a Signal - (DCT).");
        printf("\n 8.  Inverse Discrete Cosine Transform of a Signal - (IDCT).\n\n");*/
        //printf(" ............. Enter 00 to EXIT the Program ...........\n\n");
    
        
        scanf("%d",&opcode);
        if((opcode<=0)&&(isalpha(opcode)==0)&&(ispunct(opcode)==0))
	    {
	        printf("\nEnter Valid Choice\n");
	    }
	    else 
        {
            switch (opcode)
            {
                case 1:
                io_1();
                break;

                case 2:
                io_lin();
                break;

                case 3:
                io_product();
                break;

                case 4:
                io_Energy_Power();
                break;

                case 5:
                io_DFT();
                break;

                case 6:
                io_IDFT();
                break;
            
                /*case 7:
                io_DCT();
                break;

                case 8:
                io_IDCT();
                break;*/
                
                
         
                default:
                printf("\nWrong Choice, please enter again.");
            }
        }
    
    return 0;
}
