# REQUIREMNTS

## INTRODUCTION - System stability 
* System stability is one of the most important performance specification of a control system. 
* A system is considered unstable if it does not return to its initial position but continues to oscillate after it is subjected to any change in input or is subjected to undesirable disturbance.
* A stable system is designed so as to get the desired response of the system without any intolerable variation with the changes in the system parameters.
* Generally, a system is said to be stable when the poles of the transfer function of the system are located on the left side of the s-plane.
* Routh-Hurwitz Stability Criterion offers an easy method of predicting the system’s stability without completely solving the characteristic equation.

![image](https://user-images.githubusercontent.com/68493803/114610307-5ee8d000-9cbd-11eb-94b5-5929d550ed3b.png "Routh-Hurwitz criteria")

## FEATURES 




## DEFINING SYSTEM 
* Input the characteristic equation from user
* Display the Routh array and whether system stable or not along with number of poles on the right half s plane

## SWOT ANALYSIS 

![provides ease of determining the relative stability of the system  time to calculate determinants is saved by the Routh-Hurwitz criterion  the system is unstable then we can easily get the number of roots of the char](https://user-images.githubusercontent.com/68493803/114508380-e8fb4f00-9c51-11eb-9ca1-80b9a87a9bd0.png)

## 4W's AND 1'H



## DETAIL REQUIREMENTS 
### High level requirements
|Feature|Status|
|---|---|
|Degree of polynomial| Implemented|
|Characteristic Equation coefficients | Implemented|

### Low level requirements
|Feature|Status|
|---|---|
|Routh-Hurwitz matrix| Implemented|
|Check for the special cases | Implemented|
|First column element zero| Implemented|
|Complete row of zeroes | Implemented|
|Check sign changes matrix | Implemented|

