# Ritangle 2021 
https://integralmaths.org/ritangle

## Question 1: [🔗](https://github.com/KenanBouvier/Ritangle-2021/blob/main/Stage-1/question_1.cpp)
### Result format: ABC DEF GHI

	16 number of solutions
	102 365 467
	105 362 467
	162 305 467
	165 302 467
	201 563 764
	203 561 764
	261 503 764
	263 501 764
	302 165 467
	305 162 467
	362 105 467
	365 102 467
	501 263 764
	503 261 764
	561 203 764
	563 201 764

	We can see that despite the multiple solutions, the values of G,H,I are 4,6,7 in some order.
	Multiplying them out you get 168.
	From there you can multiply by the given value, 447.2, where you get 75129.6
	Taking int of that value you get 75129

## Question 2: [🔗](https://github.com/KenanBouvier/Ritangle-2021/blob/main/Stage-1/question_2.cpp)
### Answer Output:

	1 25 55 are the original ages
	6 25 55 are the original ages
	
	Conditions you can use to identify the types of numbers:
	Fibonacci number: true if 5 * fib^2 +/- 4 is a perfect square.
	Triangle number: true if 8 * triangle + 1 is a perfect square.
	There seems to be two possible ages where the differences in ages are possible.
	Taking the smallest combination, multiplying by given value, 13254.1 and take the int.


## Question 3: [🔗](https://github.com/KenanBouvier/Ritangle-2021/blob/main/Stage-1/question_3.cpp)
### Answer Output:

	1024375869
	1024375968
	1024376859
	1024376958
	1024385769
	1024385967
	1024386759
	1024386957
	1024395768
	1024395867
	1024396758
	1024396857
	1024573869
	. . . . . .
	. . . . . .

	The first solution we get is 1024375869.
	Given that the program is incrementing from the smallest possible number, 1023456789,
	this means that the first value you get is the smallest.
	From there you can multipy by the given value, 0.000025, where you get 25,609.396725.
	Taking int of that value you get 25609

## Question 8: [🔗](https://github.com/KenanBouvier/Ritangle-2021/blob/main/Stage-1/question_8.cpp)
### Answer Output:

	0.152152 is min gap   with n value: 15
	
	We first need to generalise an equation to get the perpendicular distance from the center of a n-sided polygon.
	Firstly, we know that 180(n-2)/n is the internal angle of a n-sided polygon. 
	So now if we split that angle in 2 that angle will now go to the center.
	As the total perimeter is P, each side is p/n where n is the number of sides.
	Halving that side we get a right angled triangle. From here we just do some trig:
	D = tan(180(n-2)/n*2) * p/2n
	Where D is the distance from center to polygon side (perp).
	Now if we do the same with the new perimeter Q. We get a second distance.
	Getting the difference now is the Gap length. 
	So we can iterate through all n values and apply the formula and get max gap.
	We can just let p = 1 for simplicity as it needs a value. Therefore Q = 1 + (1 - n/1000)^2
	
	Finally multiply by the given value 4541.62 to get 68124.3 and taking int: 68124

## Question 13: [🔗](https://github.com/KenanBouvier/Ritangle-2021/blob/main/Stage-1/question_13.cpp)
### Result format: Lhs Rhs
### a b c d e fg h i j
	
	322560 322560
	2 3 6 7 8 10 4 5 9
	
	Take the value x, multiply by the given value 0.22 to get 70963.2 and taking int: 70963
	
## Question 17: [🔗](https://github.com/KenanBouvier/Ritangle-2021/blob/main/Stage-1/question_17.cpp)
### Answer Output
	
	17 is the value of n. With average 1533
	
	Take 17, multiply by the given value 4124.7 to get 70119.9 and taking int: 70119
	
## Question 19: [🔗](https://github.com/KenanBouvier/Ritangle-2021/blob/main/Stage-1/question_19.cpp)
### Answer Output:

	1104 four-digit numbers satisfy
	
	A faster solution to checking the sums instead of doing 4 choose 2:
	Sorted array arr: arr[0]+arr[3] == arr[1]+arr[2]
	This is because any other combination will never be possible to have the same sum.
	Taking 1104, multiplying by 26.3 and taking int we get 29035.
	
## Question 29: [🔗](https://github.com/KenanBouvier/Ritangle-2021/blob/main/Stage-2/question_29.cpp)
### Answer Output:

	val of x is: 421
	val of y is: 2001
	
	Summing these values we get 2422, multiplying by 6.7 and taking int we get 16227.

## Question 32: [🔗](https://github.com/KenanBouvier/Ritangle-2021/blob/main/Stage-2/question_32.cpp)
### Result format: x[i]:y[i]
### Answer Output:

	1:1 3:9 5:21 7:15 11:19 17:23 25:25
	31515
	
	Putting these pairs into a string, str, we have 1139521715111917232525.
	Now we can take the positions: s[2],s[6],s[9],s[12],s[19] to get 31515.
