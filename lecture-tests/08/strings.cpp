#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <string>
using std::string;


/* TODO:  write a function that takes a string and a character
 * and returns the number of occurences of the character in the string.
 * Here's a plausible function header:
 * */
int countChars(const string& s, char c){
	int count = 0;
	for(int i = 0; i < s.length(); i++){
		if(s[i] == c)
			count++;
	}
	return count;
}

/* TODO: write a function that takes a string and returns a boolean
 * indicating whether or not it was a palindrome.
 * */

bool isPalindrome(const string& s){

	for(int i = 0; i < s.length()/2; i++){
		if(s[i] != s[s.length()-i-1])
			return false;
	}
	return true;
}

/* TODO: write a function that takes two strings and returns an
 * integer value indicating whether or not the first was a substring
 * of the second; the integer should be the index at which the string
 * was found, or -1 to indicate that the string was not found.
 * For example, findSubstr("def", "abcdef") would return 3.  (We did
 * most of this in lecture, but returned a bool...)
 * */
# if 1
int substring(const string& s1, const string& s2){
	int x = 0;
	for(int i = 0; i <= s2.length() - s1.length(); i++){
		for(int j = 0; j < s1.length(); j++,x++){
			if(s1[j] != s2[j+i])
				break;
			}
		 if(x == s1.length()){
		 	return i;
		 }
	}
		return -1;	
	}
# endif

/* TODO: without looking at what we did in lecture, write a function that
 * takes a string by reference and reverses it.
 * */

void reverse(string& s){
	int	i = s.length();
	for(int x = 0; x < i/2;x++ ){
		char temp = s[x];
		s[x] = s[i-1-x];
		s[i-1-x] = temp;
	}
}

int main(){
	string s;
	cin >> s;
		cout << "Is " << isPalindrome(s) << " a Palidrome" << endl;
	reverse(s);
		cout << s << endl;
	
	string s1 = "def";
	string s2 = "abcdef";
		cout << substring(s1,s2) << endl;
	return 0;

}
