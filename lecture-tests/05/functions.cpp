/* NOTE: Funtion Terminology
 * Function Definition: the function which include the statement (codes)
 * Function Call: How a function is called in main ie. pow(i,2)
 * Function Prototype: Intializing a function in the beginnig so that the function definition can be written
 * 					   anywhere on the code.
 * Formal Parameter: Variable that are used in the parameter list of a function
 * Actual Parameter: The variable called in int main
 * NOTE: parameters are passed by value ie. formal variable are a copy of actual variable
 *       parameters can be passed by REFERENCE meaning that the variable used in the parameter list
 *       is a synonym rather than a copy. & (ampersand) are used to pass a variable by reference.
 * NOTE: Also have function notes on TA-lectures.*/

#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;
using std::string;
bool isPrime(int);
double avg(double,double,double);
int max(int,int,int);
void swap(int,int);
int fibonacci_At(int);

int main(){
	//Tester for max function
	int x,y,z;
	cout << "Enter three integers (seperate by space): ";
	cin >> x >> y >> z;
	printf("Max: %i\n",max(x,y,z));

	//Tester for double average function
	double a, b, c;
	cout <<"Enter three doubles (seperate by space): ";
	cin >> a >> b >> c;
	printf("Average: %f\n", avg(a,b,c));

	//Tester for isPrime function
	cout <<"Enter a number:";
	cin >> x; 														//reusing x varible
	cout <<"Is it prime? " << (isPrime(x)? "Yes":"No" ) << endl;

	//Tester for swap function
	printf("Before Swap:\nx = %i\ny = %i\n",x,y);
	swap(x,y);
	
	//Tester for fibonacci_At function
	cout <<"Enter an integer:" <<endl;
	cin >> x;
	cout <<"Fibonacci at " << x << " is " << fibonacci_At(x) << endl;
return 0;
}

/* exercise: wrote a function that takes 3 integers and returns maximal value
 * TODO: write some test code for this function in main.*/
int max(int a, int b, int c){
	int max = a;
	if (b > max)
		max = b;
	if (c > max)
		max = c;
	return max;
}

/*TODO: write a function that takes 3 doubles and returns the average value.
 * also write code in main to test it. */
double avg(double a, double b, double c){
	double sum = a + b + c;
	return sum/(double)3;
}

/* TODO: write a isPrime function that takes an integer and returns a boolean
 * value indicating whether or not it is prime. */
bool isPrime(int a){
	int x = sqrt(a), y = 3;
	if(a < 2)
		return false;

	else if(a%2 == 0 && a!=2)
		return false;

	else if(a == 2 || a == 3)
		return false;

	else {
		while( y < x){
			if(a%y == 0)
				return false;
			else
				y += 2;
		}
	}
	if(a%y != 0)
		return true;
}

/* TODO: write a function that takes two integer parameters and swap the 
 * contents, i.e., if x=2 and y=5, then after calling swap(x,y), y=2 and x=5*/
void swap(int x, int y){
	int a = x; //placeholder for x
	x = y;
	y = a;
	printf("After Swap:\nx = %i\ny = %i\n",x,y);
}

/* TODO: write a function that takes an integer n and returns the
 * nth term in the fibonacci sequence. */
int fibonacci_At(int x){
	int gp = 0, p = 1, nb = 0, fib = x;
	while(fib > 0){
		fib--;
		x = gp;
		nb = gp+p;
		gp = p;
		p = nb;
	}
	return x;	
}

/* TODO:The previous exercise asked for you to compute the nth term of the
 * Fibonacci sequence.  Try to estimate approximately how many steps (number
 * of C++ statements, roughly) that your function takes to evaluate the input
 * n.  You will probably find that it is close to some constant multiple of n.*/

//NEED HELP TO DO!!!!


