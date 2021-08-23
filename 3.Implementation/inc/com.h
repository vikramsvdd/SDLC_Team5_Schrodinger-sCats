/**
 * @file dft.h
 * @author Rachit (rachit.kulkarni@ltts.com)
 * @brief 
 * @version 0.1
 * @date 2021-08-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __COM_H__
#define __COM_H__

#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
float* mul_Real(float inreal_1[],float inimaginary_1[],float inreal_2[],float inimaginary_2[],float outreal[],int maxlen);
float* mul_Img(float inreal_1[],float inimaginary_1[],float inreal_2[],float inimaginary_2[],float outimaginary[],int maxlen);
void Simple();
void Complex();
int io_1();
int io_lin();
int io_product();
int io_DCT();
int io_IDCT();
int io_DFT();
int io_IDFT();
int io_Energy_Power();
float* Calculate_IDFT_real(float X_real[],float X_imaginary[],float x_real[],int len);
float* Calculate_IDFT_imaginary(float X_real[],float X_imaginary[],float x_imaginary[],int len);
float* dft_real(float inreal[],float inimaginary[],float outreal[],int m);
float* dft_imaginary(float inreal[],float inimaginary[],float outimaginary[],int m);
float* dct_real(float inreal[],float inimaginary[],float outreal[],int N);
float* dct_imag(float inreal[],float inimaginary[],float outimaginary[], int N);
float* idct_real(float inreal[],float inimaginary[],float outreal[],unsigned int N);
float* idct_imag(float inreal[],float inimaginary[],float outimaginary[],unsigned int N);
float* Circ_convo(float x[],float h[],float y[], int n);
float* linear(float x[], float h[],int k);
double energy_r(double signalReal[],double signalImag[],int n);
double energy_i(double signalReal[],double signalImag[],int n);
double power_r(double energyReal,int n);
double power_i(double energyImagm,int n);
float* mul_Real(float inreal_1[],float inimaginary_1[],float inreal_2[],float inimaginary_2[],float outreal[],int maxlen);
float* mul_Img(float inreal_1[],float inimaginary_1[],float inreal_2[],float inimaginary_2[],float outimaginary[],int maxlen);







#endif 

