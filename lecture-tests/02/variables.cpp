/*VARIABLES
 *    variable declaration: reserve storage for the datatype and the variable.
 *        ex: int x; (no value for x)
 *            x = 17; (store value 17 to x) data flow to the left <----
 *            int y = x + 6; (can combined variable assignments)
 *    Datatypes: (size_t) (long) (int) (double) (string) (char)
 *              - numerical datatype can be signed or unsigned
 *              - unsigned int == size_t
 *              - (long > int) but the same datatype just different memory
 *              - datatypes are label that tells us what we should expect to
 *                find in that piece of memory. At lower levels, memort is 
 *                numbers but C++ can treat them differently.
 *                  ex: char c = 'A';
 *                  cout << "    c: " << c << endl;
 *                  cout << "(int)c; " << (int)c << endl;
 *                'A' have a numerical value of 65, the first cout would print
 *                'A' character but the secound cout would print out 65 b/c
 *                we are casting char c into (int) which print out the numerical
 *                value of the 'A'.
 *              - sizeof(variable with datatype): also prescribes us how much 
 *                space a value take up
 *                ex:c  cout << "an int takes " << sizeof(x) << " bytes.\n";
 *                     	cout << "a char takes " << sizeof(c) << " bytes.\n";
 *				  Prints out the amout of byte if each variable
 *				- Casting - can cast a datatype to output another datatype
 *				  ex: int x = 5,y = 2;
 *			      (x/y) will print out an int result
 *				  (double) x/y will print out an double result
 *				  (double) (x/y) the double has higher presedence so the 
 *				  result would be int */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

/*NOTE: std is a c++ *namespace* like the last the name of 
 *      the program ex: "std::cout" is analogous to "Jones::Bill" */

int main(){
 
	// string s = "hahahahhahahahahaha";
    // cout << (int)s << endl;

	/*TODO: uncomment above; make sure error messages are understandable */

	/*RESULT: this will create and error since we cannot cast a string as an int       since it is an array of characters meaning it has no numerical value*/

	/* TODO: due to rounding errors in floating point, many algebraic
	 * identities no longer hold over doubles.  Try to find an example
	 * that breaks the cancellation law: x+y == x+z implies y == z.
	 * */

	/*RESULTS: to break the cancellation laws put parenthese(x+y) or (x+z)*/
	
	/* TODO: if you're feeling ambitious, try to write a program that reads 5
     * integers and prints out (a) the maximal value, and (b) the average. */
     
//	int q,w,e,r,t;
//	cin << q << w << e << r << t;

//	int max = q;

    

	return 0;
}
