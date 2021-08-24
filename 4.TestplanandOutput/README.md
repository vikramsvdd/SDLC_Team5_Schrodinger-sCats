# TEST PLAN:

# Table no: High level test plan

| **Test ID** | **Description**                                              | **Expected i/p** | **Expected o/p** | **Actual o/p** |**Type Of test**  |  
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------| 
| H_1 | Basic UI | Integer(1-7) | Success | Success | Technical |
| H_2 | Multiplication of 2 signals | 1D array signals | Success |   Success | Technical  |
| H_3 | Linear convolution of 2 signals | 1D array signals | Success |  Success  | Technical  |
| H_4 | Circular convolution of 2 signals | 1D array signals | Success | Success | Technical |
| H_5 | Discrete Fourier transform | 1D array signals | Success | Success  | Technical |
| H_6 | Discrete Cosine transform | 1D array signals | Success |    |  |
| H_7 | Inverse Discrete Fourier transform | 1D array signals | Success | Success  | Technical |
| H_8 | Inverse Discrete Cosine transform | 1D array signals | Success |      |  |
| H_9 | Energy & Power | Float | Success |  Success  | Technical |

# Table no: Low level test plan
| **Test ID** | **Description** | **Expected i/p** | **Expected o/p** | **Actual o/p** | **Type of test** |
| ------- | ---------------- | ------------ | ------------ | ------------ | -------------- |
| L_1 | Choice(valid) | 1-7 | Success | Success | Requirement |
| L_2 | Choice(invalid) | Anything other than 1-7 | -1 | Success | Requirement |
| L_3 | Multiplication of 2 signals of same length | 1D signals of same length | Success | Success | Requirement |
| L_4 | Multiplication of 2 signals of diff length | 1D signals of diff length | Success | Success | Requirement |
| L_5 | Length of signals(valid) | Positive Integers | Success | Success | Requirement |
| L_6 | Length of signals(invalid) | Anything other than positive Integers | -1 | Success | Requirement |
| L_7 | Linear convolution of 2 signals | 2(1D) arrays | Success | Success | Requirement |
| L_8 | Circular convolution of 2 signals | 2(1D) arrays | Success | Success | Requirement |
| L_9 | DFT | Real signals | Success | Success | Requirement |
| L_10 | DFT | Complex | Success | Success | Requirement |
| L_11 | Inverse DTFT | Real | Success | Success | Requirement |
| L_12 | Inverse DTFT | Complex | Success | Success | Requirement |
| L_13 | DCT |2^n length & 1D array | Success |  | |
| L_14 | Inverse DCT | 1D array | Success | | |
| L_15 | Energy & Power | 1D array | Energy or Power | Success | Requirement |


