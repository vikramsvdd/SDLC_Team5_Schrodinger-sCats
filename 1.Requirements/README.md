# 1. Introduction
This project is implemented using the C programming language. The main goal of the project is to implement the various operations on a discrete time signal using the concepts of signals and systems.

# 2. Research
In signal processing, A signal is a function which conveys information about a phenomenon in electronics and telecommunications, it refers to any time varying voltage, current, or electromagnetic wave that carries information.Even in nature, signals can be actions done by an organism to alert other organisms.

In Modern days, Signal processing plays a major role in innovation and creativity. Hence it is important to understand and learn some of the basic operations that can be performed on a signal. A discrete time signal is one of the simplest form of a signal on which multiple operations can be performed .

Concepts like **Convolution** and **Fourier Transforms** are key to any signal processing application. Keeping in mind with the importance of the mentioned few concepts, our project plans upon implementing a few other concepts with the help of a simple user friendly interface that helps in performing these operations on a discrete time signal.

# 3. Defining The System

Our System mainly, it's a user friendly system that takes in the choice of a user. This choice determines what operation is to be performed. Once the valid choice is obtained from the user, the system then prompts the user to give in the input discrete time signal. Then as per the choice of the user, a particular task is performed and the obtained resultant signal is displayed. The user gets another chance to give a choice and if he chooses to quit the program ends.

 The discrete Fourier transform (DFT) converts a finite list of equally spaced samples of a function into the list of coefficients of a finite combination of complex sinusoids, ordered by their frequencies, that has those same sample values. It can be said to convert the sampled function from its original domain (often time or position along a line) to the frequency domain.

# 4. Build Requirements

Accordinglt to the project it may contains user friendly nature,which helps that the user gets to choose the desired operation to be performed to obtain the required output.The input given is a discrete time signal [1D array], for which the appropriate output is displayed [1D].

# 5.Identify Features

The user gets to choose between various operations which are:

1. Multiplication of 2 signals

2. Linear convolution

3. Circular convolution

4. Discrete Fourier Transform

5. Inverse Discrete Fourier Transform

6. Discrete cosine Transform

7. Inverse Discrete cosine Transform

8. Energy and Power Calculation 

# 6. State of Art

### Ageing-Time

Gives us a fair idea about the duration upto which the project can be used, until whenever the simpler methods or formulas are invented.

### Ageing-Cost

Showcases for the possibilities of revolution or development of the project in the near future.

# 7. 4W&#39;s and 1&#39;H
## Who	
*   All students/learners can use this interface to learn the concepts and verify their learnings.
## What
*   It is UI project that takes input Discrete signals and does the required operations which are mentioned above.
## When
*   User can use at any time for enhancing conceptual knowledge. 
## Where
*   This is a calculator interface for signals, mostly it can be used by educational institutions. This Project can be used by the users anywhere with a computer having windows or linux Operating system.
## How
*   By selecting the suitable features & providing the some appropriate inputs to obtain the result.The user will be getting the result ouptut on the display without having knowledge on C or any other programming.

# 8. Swot Analysis
![GROUP5_SWOT_analysis](https://user-images.githubusercontent.com/86190217/130079647-bde1a2c5-88e9-4880-873e-eba5a6ae6c21.jpg)

# 9. Detailed Requirements

## High Level Requirements:
|  ID           |  Description        |  Status (Implemented/Future)   |    
| :------------- | :---------- | :-----------: |
|  H01             | User Interface   |    |
|  H02             | Operation Inputs  |    |
|  H03             | Signal Inputs   |    |
|  H04             | Output      |       |
|  H05             | Signal Operations |   |

## Low Level Requirements:
|  ID  |  Description        |  Status (Implemented/Future)      | 
| :-------| :---------- | :-----------: |
|  L01      |   Oeration Choice - Type : Unsigned int (1 to 7) |     | 
|  L02      |   Signal Inputs in the form of [1D] array - Type : Signed float (can be complex) |      |
|  L03      |   Multiplication of 2 signals  |      |
|  L04      |   Linear Convolution of 2 signals |      |
|  L05      |   Circular Convolution of 2 signals|      |
|  L06      |   Discrete Time Fourier Transform of a signal |      |
|  L07      |   Fast Fourier Transform of a signal |     |
|  L08      |   Inverse Discrete Fourier Transform of a signal |     |
|  L09      |   Energy and Power of a signal |     |
|  L10      |   Resultant Output in the form of [1D] array or singular value - Type : Signed float (can be complex) |     |
|  L11      |   Display Choice - To terminate program or go to User Interface again  |    |
|  L12      |   User Input - Choice to terminate or return to User Interface |    |




