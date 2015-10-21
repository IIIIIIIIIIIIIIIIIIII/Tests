/*SETS = like a vector but does not contain a repeated element value.
 * 	- need to initialize i.e. #include <set> and use std::set;
 * 	 SYNTAX:
 * 				set<data type> variable_name;
 * 	Functions:
 * 				insert() = same as push_back()
 * 				find(n)  = finds if n is in the set
 * 				end()    = past the end of the last element of the set
 * 				begin()  = beginning of an element
 * 	Iterator:
 * 				- used to go threw each element
 * 		Syntax:
 * 				set<datatype>::iterator variable_name(i.e i);
 * 				for(i = s1.begin(); i != s1.end(); i++){
 * 					if(s2.find(*i) != s2.end()){
 * 					I.insert(*i);}
 * 				}
 * 				- i the iterator in this case is like the index # of vector
 * 				- *i is like the value in the i index */
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <set>
using std::set;
#include <string>
using std::string;
#include <cstdio>
#include<vector>
using std::vector;

/*finds the intersection of two sets meaning creates a new set that would
 * contain each common element inside both sets*/
set<int> intersect(const set<int>& s1, const set<int>& s2){  
/* NOTE: const with & is const by reference which is an idiom often used to 
 * "fake" a by value call efficiently.*/
	set<int> I;
	for(set<int>::iterator i = s1.begin(); i != s1.end(); i++){
		if(s2.find(*i) != s2.end()){
			I.insert(*i);
		}
	}
	return I;
}
/* TODO: assuming that the size() function of the set takes
	 * a (small) constant amount of time, make this go faster
	 * by iterating through the contents of the smaller set, rather
	 * than always going through s1*/
set<int> intesect2(const set<int>& s1, const set<int>& s2){
	if(s1.size() > s2.size())
		return intersect(s2,s1);
	else
		return intersect(s1,s2);
}

/** TODO: also do the math to see why this would be faster, and
	 * note that in the analogous problem for vectors, it
	 * wouldn't make any difference. */
//NOTE: NEED TO DO!!!!

/* TODO: write a function that returns the union of two sets */
set<int> Union(const set<int>& s1, const set<int>& s2){
	set<int> U(s1); //the U(s1) copies set s1 to set U
	for(set<int>::iterator i = s2.begin(); i != s2.end(); i++){
		U.insert(*i);
	}
	return U;
}

/* TODO: emulate the insert function for the set, but for a vector.
 * That is, write a function that takes a vector (say of integers)
 * and a single integer x, and adds x to the vector *only if it was
 * not already present*. You can return a boolean indicating whether
 * or not x insertion took place. */
bool emulate(vector<int> v, int x){
	for(int i = 0; i < v.size(); i++){
		if(v[i] == x)
			return false;
	}
	v.push_back(x);
	return true;
}

/* TODO: write a function that removes a value from a vector if it
 * is present.  It should take a vector and a value x, and remove
 * x if it is in the vector. NOTE: you don't have to preserve the
 * order of the other elements. */

void remove(vector<int> v, int x){
	for(int i = 0; i < v.size(); i++){
		if(v[i] == x){
			v[i] = v[v.size()-1];
			v.pop_back();
		}
	}
}
int main(void)
{
//	setTest();
//	setTest2();
//	intTest();

		set<int> s1 = {1,2,3,4,5,6};
	set<int> s2 = {2,4,6,8,10,22,32};
	set<int> s3 = fast(s1, s2);

	cout << "First set: ";
	for(set<int>::iterator i = s1.begin(); i != s1.end(); i++){
		cout << *i << " ";
	}
	cout << endl;

	cout << "Second set: ";
	for(set<int>::iterator i = s2.begin(); i != s2.end(); i++){
		cout << *i << " ";
	}
	cout << endl;
	
	cout << "Faster Intesection of two sets: ";
	for(set<int>::iterator i = s3.begin(); i != s3.end(); i++){
		cout << *i << " ";
	}
	cout << endl;

	s3 = Union(s1,s2);
	cout << "Union of set 1 and 2: ";
	for(set<int>::iterator i = s3.begin(); i != s3.end(); i++){
		cout << *i << " ";
	}
	cout << endl;

	vector<int> v = {1,2,3,4,5,6};
	int x;
	cout << "Vector contains: ";
	for(int i = 0; i < v.size(); i++){
		cout << v[i] << " ";
	}
	cout << endl;

	cout << "Enter an int that is not in the vector: " << endl;
	cin >> x;

	cout << "Emulate for " << x << " is "<< emulate(v,x) << endl;
	cout << "Vector now contains: ";
	for(int i = 0; i < v.size(); i++){
		cout << v[i] << " ";
	}
	cout << endl;

	cout << "removing " << x << " from the list" << endl;
	remove(v,x);
	cout << "Vector now contains: ";
	for(int i = 0; i < v.size(); i++){
		cout << v[i] << " ";
	}
	cout << endl;
	
	cout <<"Enter an int that is in the vector: " << endl;
	cin >> x;

	cout << "Emulate for " << x << " is "<< emulate(v,x) << endl;
	cout << "Vector now contains: ";
	for(int i = 0; i < v.size(); i++){
		cout << v[i] << " ";
	}
	cout << endl;
	cout << "removing " << x << "if the list" << endl;
	remove(v,x);
	cout << "Vector now contains: ";
	for(int i = 0; i < v.size(); i++){
		cout << v[i] << " ";
	}
	cout << endl;

	return 0;
}
