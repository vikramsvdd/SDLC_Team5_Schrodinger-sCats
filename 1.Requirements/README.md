# 1. Introduction
This project is implemented using the C programming language. The main goal is to implement the various operations on a discrete time signal using the concepts of signals and systems.

# 2. Research
In signal processing, a signal is a function that conveys information about a phenomenon in electronics and telecommunications, it refers to any time varying voltage, current, or electromagnetic wave that carries information.Even in nature, signals can be actions done by an organism to alert other organisms.

With regards to Modern day, Signal processing plays a major part in innovation and creativity. Hence it is important to understand and learn some of the basic operations that can be performed on a signal. A discrete time signal is one of the simplest form of a signal on which multiple operations can be performed .

Concepts like **Convolution** and **Fourier Transforms** are key to any signal processing application. Keeping in mind the importance of the mentioned few concepts, our project plans on implementing a few other concepts with the help of a simple user friendly interface that helps in performing these operations on a discrete time signal.

# 3. Defining The System

Our System mainly is a user friendly system that takes in the choice of a user. This choice determines what operation is to be performed. Once the valid choice is obtained from the user, the system then prompts the user to give in the input discrete time signal. Then as per the choice of the user, a particular task is performed and the obtained resultant signal is displayed. The user gets another chance to give a choice and if he chooses to quit the program ends.

# 4. Build Requirements

Since this is an user friendly project,the user gets to choose the desired operation to be performed to obtain the required output.The input given is a discrete time signal [1D array], for which the appropriate output is displayed [1D].

# 5.Identify Features

The user gets to choose between various operations which are:

1. Multiplication of 2 signals

2. Linear convolution

3. Circular convolution

4. Discrete Time Fourier Transform

5. Fast Fourier Transform

6. Inverse Discrete Fourier Transform

7. Energy and Power Calculation

# 6. State of Art

###### Ageing-Time

Gives us a fair idea about the duration in which the project can be used, up until simpler methods or formulas are invented.

###### Ageing-Cost

Showcases the possibilities of revolution or development of the project in the near future.

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
*   By selecting the suitable feature & providing the appropriate inputs to obtain the result.The user will be getting the result ouptut on the display without having knowledge on C or any other programming.

# 8. Swot Analysis
![GROUP5-SWOT analysis](https://user-images.githubusercontent.com/86190217/130079647-bde1a2c5-88e9-4880-873e-eba5a6ae6c21.jpg)

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




