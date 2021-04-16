# REQUIREMNTS

## INTRODUCTION - System stability 
* System stability is one of the most important performance specification of a control system. 
* A system is considered unstable if it does not return to its initial position but continues to oscillate after it is subjected to any change in input or is subjected to undesirable disturbance.
* A stable system is designed so as to get the desired response of the system without any intolerable variation with the changes in the system parameters.
* Generally, a system is said to be stable when the poles of the transfer function of the system are located on the left side of the s-plane.
* Routh-Hurwitz Stability Criterion offers an easy method of predicting the system’s stability without completely solving the characteristic equation.
![image](https://user-images.githubusercontent.com/68493803/114958413-92278c80-9e80-11eb-8f7e-cbe2b390e5cc.png)


## FEATURES 
# Routh-Hurwitz table:

![image](https://user-images.githubusercontent.com/68493803/114958521-d155dd80-9e80-11eb-9ac0-5a88ef661a20.png)

![image](https://user-images.githubusercontent.com/68493803/114958269-4674e300-9e80-11eb-9ae1-9ff29ba2b377.png)

# Special case 1:

![image](https://user-images.githubusercontent.com/68493803/114959747-4de9bb80-9e83-11eb-933d-be725d31868c.png)

# Special case 2:

![image](https://user-images.githubusercontent.com/68493803/114959911-a3be6380-9e83-11eb-9934-4b65ffc5541e.png)

## DEFINING SYSTEM 
* Input the characteristic equation from user
* Display the Routh array and whether system stable or not along with number of poles on the right half s plane

## SWOT ANALYSIS 

![provides ease of determining the relative stability of the system  time to calculate determinants is saved by the Routh-Hurwitz criterion  the system is unstable then we can easily get the number of roots of the char](https://user-images.githubusercontent.com/68493803/114508380-e8fb4f00-9c51-11eb-9ca1-80b9a87a9bd0.png)

## 4W's AND 1'H
# WHO
Anyone who wants to check stability of a system they have designed
# WHAT
An algorithm that checkc the routh-hurwitz condition
# WHEN
Anytime provide the transfer function/characteristic equation of the system is available
# WHERE
For closed loop transfer function, this algorithm is valid
# HOW
By building the routh table and checking for sign changes which shows the number of poles lying on the right half of s plane thereby making a system unstable

## DETAIL REQUIREMENTS 
### High level requirements
|ID|Feature|Status|
|---|---|---|
|HR01|Degree of polynomial from user| Implemented|
|HR02|Characteristic Equation coefficients from user| Implemented|

### Low level requirements
|ID|Feature|Status|
|--|---|---|
|LR01|Routh-Hurwitz matrix initalize to zero| Implemented|
|LR01|Routh-Hurwitz matrix initalize first two rows| Implemented|
|LR01|Routh-Hurwitz matrix build rest of the rows| Implemented|
|LR02|Check for the special cases | Implemented|
|LR03|CASE1: First column element zero| Implemented|
|LR04|CASE2: Complete row of zeroes | Implemented|
|LR05|Check sign changes matrix and display result | Implemented|

