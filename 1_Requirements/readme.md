# REQUIREMNTS

## INTRODUCTION - System stability 
* System stability is one of the most important performance specification of a control system. 
* A system is considered unstable if it does not return to its initial position but continues to oscillate after it is subjected to any change in input or is subjected to undesirable disturbance.
* A stable system is designed so as to get the desired response of the system without any intolerable variation with the changes in the system parameters.
* Generally, a system is said to be stable when the poles of the transfer function of the system are located on the left side of the s-plane.
* Routh-Hurwitz Stability Criterion offers an easy method of predicting the system’s stability without completely solving the characteristic equation.

![image](https://user-images.githubusercontent.com/68493803/114501171-1262ad80-9c47-11eb-9a25-0ed862d76f1c.png)
https://www.google.com/imgres?imgurl=https%3A%2F%2Fimage.slidesharecdn.com%2Fdeepti-160826033529%2F95%2Frh-criteria-10-638.jpg%3Fcb%3D1472182594&imgrefurl=https%3A%2F%2Fwww.slideshare.net%2Framola007%2Frh-criteria&tbnid=dUUjvijDNzVIDM&vet=10CBMQxiAoAmoXChMIkKCtxrv67wIVAAAAAB0AAAAAEA4..i&docid=jH1Pobx_fGYCxM&w=638&h=479&itg=1&q=routh%20hurwitz%20calculator&hl=en&safe=active&ved=0CBMQxiAoAmoXChMIkKCtxrv67wIVAAAAAB0AAAAAEA4

https://image.slidesharecdn.com/deepti-160826033529/95/rh-criteria-15-638.jpg?cb=1472182594

https://images.slideplayer.com/27/9233449/slides/slide_16.jpg

https://slideplayer.com/slide/5374822/17/images/5/The+Routh-Hurwitz+Stability+Criterion.jpg

## RESEARCH


## COST AND FEATURES 



## DEFINING SYSTEM 
* input the characteristic equation from user
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
* This is a faster and efficient method for determining stability alone 
* Using this method, the range of k values to make an unstable system stable can be determined 
* The number of poles lying on the right half of s plane can be found 

### Threats
* 

## 4W's AND 1'H


## DETAIL REQUIREMENTS 
### High level requirements
* The degree of the polynomial
* The characteristic Equation coefficients 

### Low level requirements
* Routh-Hurwitz matrix
* Check sign changes in matrix 
#### Check for the special cases :
1. First column element is zero and remaining are non-zero 
2. Complete row of zeroes 


