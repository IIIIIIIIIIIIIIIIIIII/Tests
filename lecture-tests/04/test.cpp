#include <iostream>
using namespace std;
#include <cstdio>
#include <vector>

int main(){
	// Exercise: caclulate the sum of the n odd cubes
	
	int n, sum = 0;
	cout << "Enter a number: ";
	cin >> n;

	for(int count = 1; n > 0; n--){
		sum += count*count*count;
		count += 2;
	}
	printf("sum: %i\n", sum);
	

	//Excercise: Takes an n integer from the user and prints out the nth tern of the 
	//fibonacci sequence
	
	cout<< "Enter the amount of the fibonacci sequence number you desire: ";
	cin >> n;

	int gp = 0, p = 1, newb, fib = n;
	
	while(fib > 0){
		cout << gp;
		fib--;
			if(fib > 0)
				cout<< ", ";
		newb = gp + p;
		gp = p;
		p = newb;
		
	}
	cout << endl;


	// Testing vector arrays
	
	vector<int> x(5);
	int y = 1;

	for(int a = 0; a <  x.size(); a++,y *= a){
		x[a] = y;

		cout<< x[a] << "|";
	}
	return 0;
	
}
