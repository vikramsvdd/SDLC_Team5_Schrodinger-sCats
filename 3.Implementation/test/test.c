#include "com.h"
#include "unity.h"
#include "unity_internals.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

//Test Cases:

void test_energy(void);

void test_power(void);

void test_dct(void);

void test_idct(void);

void test_cir_conv(void);

//void test_DCT_IDCT_circconvo(void)
void test_dft(void);
void test_idft(void);


void test_linear_same_length(void);
void test_linear_diff_length(void);


void test_energy(void){

int n=4;
double signal_real[4]={3,2,4,6};
double signal_imaginary[4]={-2,3,5,7};

TEST_ASSERT_EQUAL(-22,energy_r(signal_real,signal_imaginary,n));
TEST_ASSERT_EQUAL(124,energy_i(signal_real,signal_imaginary,n));

}

void test_power(void){

int n=4;
double signal_real[4]={3,2,4,6};
double signal_imaginary[4]={-2,3,5,7};
double energyReal = energy_r(signal_real,signal_imaginary,n);
double energyImaginary = energy_i(signal_real,signal_imaginary,n);
TEST_ASSERT_EQUAL(-5.5,power_r(energyReal,n));
TEST_ASSERT_EQUAL(31,power_i(energyImaginary,n));


}



void test_dft(void){

int m=4;
float inreal[4]={1,4,9,16};
float inimaginary[4]={6,8,3,-2};
float outreal[4]={30,2,-10,-18};
float outimaginary[4]={26,0,14,-24};
TEST_ASSERT_EQUAL_FLOAT_ARRAY(outreal,dft_real(inreal,inimaginary,outreal,m),m);
TEST_ASSERT_EQUAL_FLOAT_ARRAY(outimaginary,dft_imaginary(inreal,inimaginary,outimaginary,-1),m);
}

void test_idft(void){

int len=4;
float X_real[4]={1,4,9,16};
float X_imaginary[4]={6,8,3,-2};
float x_real[4];
float x_imaginary[4];
TEST_ASSERT_EQUAL_FLOAT_ARRAY(x_real,Calculate_IDFT_real(X_real,X_imaginary,x_real,len),len);
TEST_ASSERT_EQUAL_FLOAT_ARRAY(x_imaginary,Calculate_IDFT_real(X_real,X_imaginary,x_imaginary,-1),len);
}


void test_dct(void){

int N=4;
float inreal[4]={1,4,9,16};
float inimaginary[4]={6,8,3,-2};
float outreal[4];
float outimaginary[4];
TEST_ASSERT_EQUAL_FLOAT_ARRAY(outreal,dct_real(inreal,inimaginary,outreal,N),N);
TEST_ASSERT_EQUAL_FLOAT_ARRAY(outimaginary,dct_imag(inreal,inimaginary,outimaginary,N),N);
}

void test_idct(void){

int N=4;
float inreal[4]={1,4,9,16};
float inimaginary[4]={6,8,3,-2};
float outreal[4];
float outimaginary[4];
TEST_ASSERT_EQUAL_FLOAT_ARRAY(outreal,idct_real(inreal,inimaginary,outreal,N),N);
TEST_ASSERT_EQUAL_FLOAT_ARRAY(outimaginary,idct_imag(inreal,inimaginary,outimaginary,N),N);
}

void test_cir_conv(void){

int N=4;
float x[4]={1,4,9,16};
float h[4]={6,8,3};
float y[4];
TEST_ASSERT_EQUAL_FLOAT_ARRAY(y,Circ_convo(x,h,y,N),N);
}


void test_linear_same_length(void){   
    int k=9;
    float x[9]={1,2,3,4,5};
    float h[9]={5,4,3,2,1};
    float y[9]={5,14,26,40,55,40,26,14,5};

  TEST_ASSERT_EQUAL_FLOAT_ARRAY(y,linear(x,h,k),k);
  
}
void test_linear_diff_length(void){   
    int k=4;
    float x[4]={1,2,3};
    float h[4]={4,5};
    float y[4]={4,13,22,15};

  TEST_ASSERT_EQUAL_FLOAT_ARRAY(y,linear(x,h,k),k);
  
}

/*void test_DCT_IDCT_circconvo(void){
  int m;scanf("%d",&m);
  TEST_ASSERT_EQUAL(-1,validate(m));
  TEST_ASSERT_EQUAL(1,validate(m));
}*/



int main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();
  
  RUN_TEST(test_energy);
  
  RUN_TEST(test_power);
  RUN_TEST(test_dct);
  
  RUN_TEST(test_idct);
  
  RUN_TEST(test_cir_conv);
  
  //RUN_TEST(test_DCT_IDCT_circconvo);
  RUN_TEST(test_dft);
  RUN_TEST(test_idft);
  RUN_TEST(test_linear_same_length);
  RUN_TEST(test_linear_diff_length);

  return UNITY_END();
}

