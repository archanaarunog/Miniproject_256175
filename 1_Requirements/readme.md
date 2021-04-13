# REQUIREMNTS

## INTRODUCTION - System stability 
* System stability is one of the most important performance specification of a control system. 
* A system is considered unstable if it does not return to its initial position but continues to oscillate after it is subjected to any change in input or is subjected to undesirable disturbance.
* A stable system is designed so as to get the desired response of the system without any intolerable variation with the changes in the system parameters.
* Generally, a system is said to be stable when the poles of the transfer function of the system are located on the left side of the s-plane.
* Routh-Hurwitz Stability Criterion offers an easy method of predicting the system’s stability without completely solving the characteristic equation.
## RESEARCH
1.

## COST AND FEATURES 



## DEFINING SYSTEM 
* input the ce from user
* menu contains following: display steps, answer directly, description which case 

## SWOT ANALYSIS 
### Strength 
* provides ease of determining the relative stability of the system.
* time to calculate determinants is saved by the Routh-Hurwitz criterion.
* the system is unstable then we can easily get the number of roots of the characteristic equation that has a positive real part.
* using this we can get the range of values of K.

### Weaknesses
* polynomials with degree greater than 10 are not within the scope of this code
* It determines the stability but does not offer the method to stabilize an unstable system.
* This method suits checking the stability of only linear systems.
* It is applicable only when there is a characteristic equation having real coefficients.

### Opportunities
* this is a faster and efficient method for determining stability alone 
* using this method, the range of k values to make an unstable system stable can be determined 

### Threats
* 

## 4W's AND 1'H


## DETAIL REQUIREMENTS 
### High level requirements
* The degree of the polynomial
* The characteristic Equation coefficients 

### Low level requirements
* Create the routh array with the co-efficient of the characteristic equation coefficient initiallised into a matrix 
* Find each matrix elements by using the formula 
* Check for sign changes in the first column
#### * Check for the special cases :
1. First column element is zero and remaining are non-zero 
2. Complete row of zeroes 


