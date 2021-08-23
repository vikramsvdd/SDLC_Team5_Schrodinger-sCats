/**
 * @file idft.c
 * @author Shivali Gokhale (shivaligokhale.4@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-08-22
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include"idft.h"

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
