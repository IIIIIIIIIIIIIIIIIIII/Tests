/* <iostream> = file on your computer;
 * #include copy and paste the file inside the <>
 * comments are ingore by the compiler i.e. //
 * 
 * isostream have a lot of named things inside it like functions
 * rather than pulling all the named things from the iostream 
 * use the derective 'using' to pull out a single named thing
 *
 * Return 0 = exits the main, ending the program
 * "hello world" - messages in a double quotes are literal. not a variable
 *                 meaning it is the name of the memory
 *  backslashes - escape sequences like \n \t \0*/
#include <iostream>
using std::cout;

int main(){
	cout << "hello world";
	/* TODO: swap the double quotes with single quotes,
	 * try to compile, and see what happens. */

	/*RESULTS: error message would occur since hello world is a string
				if only single quote are use it is looking for a character 
				but but its not*/
	return 0;

}
