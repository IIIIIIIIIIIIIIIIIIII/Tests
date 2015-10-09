#include <iostream> // make a funtion and a (fibolicci number : which can be ask for a job interview--- in projects/04/)
using namespace std;
#include <cstdio>
#include <vector>
#include <string>

//int absolute (int); // Function prototypes

       
        /* functions :ex int absolute (int) create an int functions
         *     LIKE THE MAIN(), and the math function usually needed the #include
         *     it has Implentation while it shows how its done wile fuction is whats its done
         * ---------------------------------------------------------------------------------------------------------------    
		 * function definition(constructor):
		 *
		 *               syntax: <type> <function name> <parameter list>{
                                   local declaration 
		                            sequenes of statements}         
         * functions prototypes:
		 *
		 *               syntax: <type> <funtion name> (<type list>);
		 * ----------------------------------------------------------------------------------------------------------------               
         * function call:
		 *
		 * 				 syntax: <function name>(<argument list>)
		 *                   ex: int function call (int parameter1, parameter2) 
		 *-----------------------------------------------------------------------------------------------------------------
         *     The data type recall what type of output it will have
         *     one to one correpondace between the arguments in a fuction call and the parameters in the function definition
         *     				MEANING: if the argument is int the parameter has to an int
		 *-----------------------------------------------------------------------------------------------------------------
         *     fuction definiton can be place anywhere in the program after the funtion prototype is established.
         *     if a function definition is placed before the main(), ther is no need to include the function prototype.
         *------------------------------------------------------------------------------------------------------------------  
         *  function definition needs a return statement unless if the function type is set to void.
		 *  return type can be use as the function body. ex: return pi*r*r;
		 *
		 *  constant variable type (const) is used before the data type (int. double, etc.)*/
int absolute (int num){  // function Definition
	if( num >= 0)
		return num;
	else
		return -num;
}

//void print_until_s(vector<string> v, string quit) { // Testing a void funtion and int s:v
//	for(string s : v) {
//		if (s==quit)
//		cout << s << '\n';         
//	} }

int main(){

	int x;
	cin >> x;
	string b = "quit";

	printf("Absolute value of x is %i\n", absolute(x)); // function call

	vector<string> a(10);
	for(int z = 0; z < a.size(); z++){
		if(z != 2)
			a[z] = "Oreo";
		else
			a[z] = "quit";
	}

//	print_until_s(a,b);
	
	return 0;
}



