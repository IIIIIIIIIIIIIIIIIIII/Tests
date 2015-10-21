/*ARRAY: kinda like vector, it is a list of elements but has no fancy
 * 		member functions and cannot increase or decrease its size.
 * 	SYNTAX:
 * 		datatype variable_name[size of the array];
 * 			ex: int A[10];
 * 		to put elements in an array use the bracket operator:
 * 			ex: A[1] = i*2;
 * 	INDEPTH of ARRAY:
 * 		if cout << A << endl;
 * 		A cout print out the memory address of the first element A[0]
 * 		NOTE: A only contains memory adresses;
 *
 * POINTERS: variables that holds memory addresses
 * 			ex: array A is a pointer
 * 		MECHANICS:
 * 			1. declare them
 * 			2. initialize them
 * 			3. read to and write from the memory cell to which the 
 * 			   pointer points
 * 		SYNTAX:
 * 			1. DELARATION:
 * 		     	have to use the * sign to declare a pointer
 * 					ex: int* p;
 * 			2. INITIALIZE:
 * 		     	much more uselful than just writing a literal address, is 
 * 		     	storing the address of an existing variable. This is done 
 * 		     	via the "address-of" operator:
 * 					ex: int x = 17;
 * 					p = &x; --> p stores the address of x
 * 						x and *p are synonyms at this point
 * 			3. READ/WRITE:
 * 				use the "dereference operator" = *
 * 					*/

// arrays and pointers.
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
void swap(int*,int*);

int main() {
	/* ARRAYS: OVERVIEW
	 * Arrays in C/C++: kind of like a "dumb" version of std::vector.
	 * It has no concept of its size.  It has no fancy member functions
	 * like push_back, etc... */

	/* DECLARATION AND USE */
	int A[10]; /* A is an array of 10 integers. */
	for (size_t i = 0; i < 10; i++) {
		/* store list of cubes in the array: */
		A[i] = i*i*i; /* use the bracket operator to
		                  access elements, just like vectors */
	}

	/* WHAT'S *REALLY* IN AN ARRAY? */
	cout << "A == " << A << endl;
	/* A only contains a memory address!  This is the address
	 * of the first element A[0] */

	/* POINTERS: OVERVIEW
	 * They are just *variables that hold a memory address*.
	 * That's it!  Very simple!  E.g., our array A is a pointer.
	 * */

	/* POINTERS: MECHANICS
	 * What kinds of things might we want to do with pointers?
	 * Well the obvious ones are:
	 * 1.  declare them
	 * 2.  initialize them
	 * 3.  read to and write from the memory cell to which the pointer
	 *     points.
	 * */

	/* 1. declarations */
	int* p; /* declare a pointer.  Note the '*'.  Also acceptable
	           (and instructive) is to declare it as int *p;  In either
			   case, *p is of type int, and p is the address of that int. */
	#if 0
	/* NOTE: you could initialize the pointer by directly writing an address
	 * like this: */
	p = (int*) 4;
	/* and then try to write to that memory cell, like this: */
	*p = 17;
	/* TODO: change the above "#if 0" to "#if 1", compile, run, and take
	 * note of the error.  Sadly, it won't be the last time you see it... */
	#endif

	/* 2. initialization via "address-of"
	 * Much more useful than just writng a literal address, is storing the
	 * address of an existing variable.  This is done via the "address-of"
	 * operator, like so: */
	int x = 17;
	p = &x; /* read: "p gets the address of x." */
	/* NOTE: at this point, x and *p are synonyms.  Whatever happens to one
	 * will happen to the other: */
	cout << "p == " << p << "\tx == " << x << endl;

	/* 3. read/write using "dereference operator" */

	cout << "this is what's at the address stored in p: " << *p  << endl;
	(*p)++;
	cout << "p == " << p << "\tx == " << x << endl;

	/* TODO: think carefully, and see if you can predict the output of
	 * the following code before you run it: */
	int y = 23;
	int* q = &y;
	cout << "p == " << p << "\tx == " << x << endl;
	cout << "q == " << q << "\ty == " << y << endl;
	p = q;
	(*q)++;
	cout << "p == " << p << "\tx == " << x << endl;
	cout << "q == " << q << "\ty == " << y << endl;

	/* Back to arrays for a moment:  what does the bracket notation (A[i])
	 * actually mean?  It is simply an addition of pointers, followed by
	 * a dereference: A[i] is the same as *(A+i) as it turns out.  There are
	 * even funny consequences of this -- instead of A[i], you can instead
	 * write i[A] (but I don't recommend it!) */
	char B[10];
	for (size_t i = 0; i < 10; i++) {
		B[i] = 'a' + i;
	}
	for (size_t i = 0; i < 10; i++) {
		cout << i << "[A] == " << i[A] << endl;
	}

	return 0;
	/* TODO: declare another pointer (say p2) to a character, initialize it
	 * just as we did before, and print out (p+i) and then (p2+i) for small
	 * values of i. Notice that the difference in memory addresses changes. */
}

/* TODO: write a function that returns void, and takes two
 * POINTERS to integers, and swaps the contents of those two
 * memory locations.  Note: part of this exercise is understanding
 * what I'm asking for...
 * */

void swap(int* p, int* c){
	int* temp = p;
	p = c;
	c = temp;
}

/* TODO: write a function that performs a "circular shift" on
 * an array of integers.  For example, if the input array
 * contained 0,1,2,3,4 and we shifted by 2, the new array would
 * contain 3,4,0,1,2.
 * NOTE: you can do this with *a constant amount of additional storage*.
 * That is, irrespective of the size of the array, your function should
 * allocate the same, fixed amount of storage.  No vectors.  No additional
 * arrays.  Just a few integers.  Try it!
 * */

void circularshift(int x[], int size){
	/*int temp;
		for(int i = 0; i < size; i++){
			int initial = x[i], count = 0;
			for(int s = i+2; s < size; s +=2){
				 count++;
				if(count == 1){
					temp = x[s];
					x[s] = x[i];
				}
				else{
					int temp2 = x[s];
					x[s] = temp;
					temp = temp2;
				}	
			}

		}*/
	int temp = ;
	for(int i = size()-1; i > 0; i--){
		x[i] = x[i-2
	}

}

