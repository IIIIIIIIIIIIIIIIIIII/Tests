/*NOTE: Vectors
 * Vectors: an indexed set of variable with the same type. (A list of something that has the same type)
 * NOTE:Vector have to be #included
 * Syntax:
 * 			vector<data type> v;  // Declares the vector
 * 			v[i];           // The variable in indexed i (can use assignment declaration)
 * Useful Functions:
 * 			size();        // Tells the size of the vector
 * 			push_back()    // Adds another variable at the end of the vector(list)
 * Vector is a template not a datatype. i.e. Datatype is to variable, as template is to datatype
 * features: vector can dynamically grow and shrink (add the list or remove the list)*/
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;
#include <vector>
using std::vector;

void sort(vector<int>& x){
	for(size_t i = 0; i < x.size() - 1; i++){
			int indexOfsmallest = i;
			int temp = x[i];
		for( size_t j = i+1; j < x.size(); j++){
			if(x[j] < x[indexOfsmallest])
				indexOfsmallest = j;
		}
		x[i] = x[indexOfsmallest];
		x[indexOfsmallest] = temp;
	}
	for(int i = 0; i < x.size(); i++){
		cout << x[i] << ",";
	}
	cout << endl;
}
/* TODO: write a function to merge 2 sorted vectors of integers
 * into a single sorted vector.  */
vector<int> sort2(vector<int> v, vector<int> v2){

	vector<int> merged;
	int larger = v.size(), smaller = v2.size(), j;

	if(larger < smaller){
		int temp = smaller;
		smaller = larger;
		larger = smaller;
		}

	for(int i = 0; i < larger; i++){
		if(j < smaller){
			if(v[j] < v[i]){
				merged.push_back(v[j]);
				j++;
			}
			else
				merged.push_back(v[i]);
		}
		else
			merged.push_back(v[i]);
	}
	return merged;
}


/* TODO: write a *binary search* on a sorted vector.  The idea is to
 * kind of emulate the process you use to find a particular page in a book:
 * 1. open the book to some page in the middle.
 * 2. if the page number was too high, open to the middle of the pages to the
 *    left; if it was too low, open to the middle of the pages to the right
 * 3. continue as above until you found the right page.
 *
 * This might be a little challenging.  Ask questions if you get stuck.
 * */

//NOTE: This return the index of the vector to return the position in 1 to n add 1 to min in returns.
int binarySearch(vector<int> v, int x){

	int low = 0, high = v.size()-1, mid;
	while(low <= high){
		mid = (low + high)/2;
		if(x == v[mid])
			return mid+1;
		if(x > v[mid])
			low = mid-1;
		else
			high = mid;
	}
	return mid;
}

int main(){
	int x;
	vector<int> v;

	cout << "Enter some integer (ctrl D to quit): " << endl;
	while(cin>>x){
		v.push_back(x);}

	sort(v);
	//cout <<"Enter an in from the list of integer: " << endl;
	x = 2;
	cout << binarySearch(v,x) << endl;

	// Tester for sort2 function
	vector<int> s, l;                    
	for(int i = 2; i <= 20; i += 2){        // Create vector list of 2n up to 20
		s.push_back(i);
	}
	for(int i = 0; i < 20; i+= 3){          // Create vector list of 3n up to 18 starting with 0
		l.push_back(i);
	}

	cout << "First vector: ";
	for(int i = 0; i < s.size(); i++){
		cout << s[i] << " "; 
	}
	cout << endl << "Second vector: ";
	for(int i = 0; i < l.size(); i++){
		cout << l[i] << " "; 
	}

	vector<int> merged = sort2(s,l);
	cout << endl <<"Merged vector 1 and 2: ";
	for(int i = 0; i < merged.size(); i++){
		cout << merged[i] << " "; 
	}





	return 0;
}
