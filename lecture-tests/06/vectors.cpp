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

void sort(vector<int> x){
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
		cout << x[i] << endl;
	}
}

int binarySearch(vector<int> v, int x){
	int y = v.size();
	for(size_t i = 0; i < size(); i++){ 
	}
}

int main(){
	int x;
	vector<int> v;

	while(cin>>x){
		v.push_back(x);}

	sort(v);
	return 0;
}
