# Requirements

## Introduction
Engineering Mathematics can be a daunting subject for many students during the initial years of their technical education. Students go through various topics during a short span of time. Usually, the problems are based on various different complex concepts. To apply a particular concept and solve a problem, it requires one to thoroughly understand the concepts and remember all the parameters and the formulas associated with it. To find the solution, the student spends a lot of time and effort into it. With this project, we try to enhance the learning experience of the students by showing the step by step solution with the accurate final answer. This will enable the students to practice alot more questions and with alot more confidence. Not only students, but even faculty members can use this project to quickly validate their student's answers without having to worry about accuracy.

## Research

* Numerical methods are used to solve equations, evaluate integrals and solve differential equations.
* In numerical solutions ,instead of directly writing the answer in terms of formulae,we perform stepwise calculations using numerical procedures.
* The advantage is that these procedures work on wider range of problems as compared to analytical solutions
* Numerical approach helps to address complex problems by dividing it into smaller and simpler sub operations.Thus it is easier to implement it with the help of computers and hence is chosen as one of our main topics.
* Various matrix operations such as multiplication, addition, subtraction, inverse and identifying type of matrix have been implemented.

## Features

* Main menu function with user choice
  * Matrix Operations 
    * Addition of matrices
    * Subtraction of matrices
    * Multiplication of matrices
    * Inverse of matrix 
    * Determinant of matrix
    * Transpose of matrix
    * Symmetric Matrix

  * Numerical methods
    * Newton Raphson method
    * Gauss Jordan Elimination Method
    * Power Method
    * Bisection Method
    * LU Decomposition Method
    * 4th order Runge Kutta
    * Trapezoid Method
    * Simpson 1/3 Rule
    * Newton Forward  Interpolation
    * Regula Falsi method
    * Newton divided difference
    * Euler Method
   
## State of Art

### Ageing - Time

The matrices are an age old concept that have been used extensively throughout history with the earliest reports of matrix use being between 300 BC and AD 200 in China. Today matrices plays a crucial role in Linear Systems and in all aspects of engineering and mathematics. Matrix operations and numerical methods although simple for small dimensions but with increase in dimension there is an increase in time of calculation and error percentage which is undesirable. In the modern day applications, massive matrices are used routinely in a large number of fields and by developing a program for it, the efficiency, accuracy and calculation time are improved drastically and also reduces the cost of operation of the system.  Mathematical models are a central piece of science and engineering. Some models have closed-form solutions, therefore they can be solved analytically. Many models can not be solved analytically or the analytic solution is too expensive to be of practical use. All models can be solved computationally and the result may not be the exact answer but it can be useful. Numerical methods were introduced for the formulation of model of physical situations that can be solved by arithmetic operations. Development of  more efficient programming algorithms and mathematical techniques in matrix theory, will ensure that this branch of mathematics will continue to develop rapidly in the future as well.

## Requirements

## 4W and 1H

### Who
* Sudents and Professionals interested in or in need of performing complex matrix operations and numerical methods  

### What
* Quickly performs matrix operations and numerical methods. It is more reliable than manual calculation that is tedious and prone to errors
*  * Numerical method approach for solving complex mathematical problems using simple arithmetic operations.

### When
* Matrices have been around for thousands of years although the term "matrix" was coined only in 1850 by James Joseph Sylvester.The matrix theory was further developed by Gottfried Leibniz,Carl Gauss and Arthur Cayley.

### Why
* Matrices find a wide array of uses in a variety of fields such as Crytography,Robotics,Computer Graphics,Wireless communication and many more.
* Design and analysis for numerically solving mathematical problems in science and engineering. 

### How
* This program takes a matrix and relevant inputs that are processed as per selected operation to provide the corresponding output 


## SWOT Analysis

![SWOT-Analysis](https://github.com/GENESIS2021Q1/sdlc2-team-17/blob/main/1_Requirements/SWOT.png)
## High Level requirements

|ID|Feature|Status|
|---|---|---|
HR01|Program code independent of OS|Completed|
HR02| Main menu display |Completed|
HR03| Function to perform matrix operations|Completed|
HR04| Function to calculate Inverse, Determinant and Transpose of matrix|Completed|
HR05| Function to check type of matrix|Completed|
HR06| Function to calculate roots|Completed|
HR07| Function to calculate solution of ODE|Completed|
HR08| Function to perform approximation for integrals|Completed|
HR09| Function to calculate eigen values and vectors|Completed|
HR10| Function for interpolation technique|Completed|

### Low Level requirements
|ID|Feature|High Level ID|Status|
|--|---|---|---|
LR01| Switch case for user's choice|HR01|Completed|
LR02| Check the convergence conditions for Newton-Raphson method|HR06|Completed|
LR03| Function to calculate Determinant of matrix|HR03|Completed|
LR04| Function to calculate Inverse of matrix using Gauss-Jordan elimination |HR03|Completed|
LR05| Function to calculate Transpose of matrix|HR03|Completed|
LR06| Function to check whether matrix is Orthogonal|HR05|Completed|
LR07| Function to check whether matrix is Idempotent|HR05|Completed|
LR08| Function to calculate roots of eqaution using Newton-Raphson method|HR06|Completed|
LR09| Function to calculate Inverse of matrix using adjoint method| HR03|Completed|
LR10| Function to calculate sum of matrices| HR03|Completed|
LR11| Function to calculate differences of matrices| HR03|Completed|
LR12| Function to calculate eigen value and eigen vectors through Power method| HR09|Completed|
LR13| Function to multi variable linear equations using Gauss Jordan Elimination | HR06|Completed|
LR14| Function to find roots using  bisection method | HR06 |Completed|
LR15| Function to find roots using Regula Falsi method | HR06 |Completed|
LR16| Function to find roots using Gauss-Jordan elimination | HR06 |Completed|
LR17| Function to find value of integrals using Simpson's 1/3 rule | HR08 |Completed|
LR18| Function to find value of integrals using Trapezoidal rule | HR08 |Completed|
LR19| Function to check whether matrix is Symmetric | HR05 |Completed|
LR20| Function to solve linear equation by LU Decomposition| HR06|Completed|
LR21| Funtion to solve Ordinary Differntial Equations by Euler Method| HR07|Completed|
LR22| Funtion to solve Ordinary Differntial Equations by Runge Kutta Method| HR07|Completed|
LR23| Function to calculate product of matrices| HR03|Completed|
LR24| Function for Newton Forward Interpolation| HR10|Completed|





