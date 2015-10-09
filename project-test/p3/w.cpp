#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <string>
using std::string;
#include <set>
using std::set;
#include <cstdio>

unsigned long countWords(const string& s, set<string>& wl){
	int wrds = 0,nlines = 0;
	string word, line;

	for(int pos = 0; pos < s.length(); pos++){
 		if(s[pos] != ' ' && s[pos] != '\t')
			word += s[pos];
		else if (s[pos] == '\t'){
				wl.insert(word);
				wrds++;
				word = "";
				continue;}
		else{
			wl.insert(word);
			wrds++;
			word = "";}

		if(pos == s.length()-1){
			wl.insert(word);
			wrds++;
			word = "";}
		}
	return wrds;
}

unsigned long countLines(const string& s, set<string>& nl){
	unsigned long lines = 0;
	string line;

	if(s.empty()){ 										// check if a line is empty
		newlines++;
		unql.insert("");

	for(unsigned int i = 0; i < s.length(); i++){
		if(s[i] != '\n')
			line += s[i];
		else{
			nl.insert(line);
			lines++;
			line = "";}
		if(i == s.length()-1){
			nl.insert(line);
			lines++;	}
		}
	return lines;
	}
	


int main()
{
	string s;
	set<string> line, word;
	unsigned long chars = 0, words = 0, lines = 0, unqw = 0, unql = 0;

	while(getline(cin, s)){

		words += countWords(s, word);
		lines += countLines(s, line);
		chars += s.length();
		unqw = word.size();
		unql = line.size();	
	}
	chars += lines;

	cout << lines << "\t" << words << "\t" << chars << "\t" << unql << "\t" << unqw << endl;

	return 0;
}

