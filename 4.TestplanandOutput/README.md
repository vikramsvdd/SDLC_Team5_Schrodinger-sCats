# TEST PLAN:

## Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |  
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------| 
| H_1 | Basic UI | Integer(1-7) | SUCCESS |                | Technical |
| H_2 | Multiplication of 2 signals | 1D array signals | SUCCESS |          | Technical |
| H_3 | Linear convolution | 1D array signals | SUCCESS |         | Technical |
| H_4 | Circular convolution | 1D array signals | SUCCESS |       | Technical |
| H_5 | Discrete Time Fourier transform | 1D array signals | SUCCESS |          | Technical |
| H_6 | Fast Fourier transform | 1D array signals | SUCCESS |        | Technical |
| H_7 | Inverse Discrete Time Fourier transform | 1D array signals | SUCCESS |       | Technical |
| H_8 | Inverse Fast Fourier transform | 1D array signals | SUCCESS |      | Technical |
| H_9 | Energy & Power | Float | SUCCESS |       | Technical |

# Table no: Low level test plan
| Test ID | Description | Expected i/p | Expected o/p | Actual o/p | Type of test |
| ------- | ---------------- | ------------ | ------------ | ---------- | ------------ |
| L_1 | Choice(valid) | 1-7 | Success | | |
| L_2 | Choice(invalid) | Anything other than 1-7 | -1 | | |
| L_3 | Multiplication of 2 signals of same length | 1D signals of same length | Success | | |
| L_4 | Multiplication of 2 signals of diff length | 1D signals of diff length | Success | | |
| L_5 | Length of signals(valid) | Positive Integers | Success | | |
| L_6 | Length of signals(invalid) | Anything other than positive Integers | -1 | | |
| L_7 | Linear convolution of 2 signals | 2(1D) arrays | Success | | |
| L_8 | Circular convolution of 2 signals | 2(1D) arrays | Success | | |
| L_9 | DTFT | Real signals | Success | | |
| L_10 | DTFT | Complex | Success | | |
| L_11 | Inverse DTFT | Real | Success | | |
| L_12 | Inverse DTFT | Complex | Success | | |
| L_13 | FFT |2^n length & 1D array | Success | | |
| L_14 | Inverse FFT | 1D array | Success | | |
| L_15 | Energy & Power | 1D array | Energy or Power | | |

