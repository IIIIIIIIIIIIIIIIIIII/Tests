/*
 * CSc103 Project 3: wordcount++
 * See readme.html for details.
 * Please list all references you made use of in order to complete the
 * assignment: your classmates, websites, etc.  Aside from the lecture notes
 * and the book, please list everything.  And remember- citing a source does
 * NOT mean it is okay to COPY THAT SOURCE.  What you submit here **MUST BE
 * YOUR OWN WORK**.
 * References:
 *
 *
 * Finally, please indicate approximately how many hours you spent on this:
 * #hours: 
 */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <string>
using std::string;
#include <set>
using std::set;
#include <cstdio>


// write this function to help you out with the computation.
# if 0
unsigned long countWords(const string& s, set<string>& unqw){
	set<string> uniqw;
	set<string> unql;

	string newstr, word, sentence; //newstr2;
	unsigned int pos = 0, spacepos, length = 0, pos2 = 0, nlpos, nlength = 0; // variable use to get seperate the strings
	unsigned int chars = 0, newlines = 0, wrds = 0, unqwrds = 0, unqlines = 0; // counters

	while(pos < s.length()){
		if(pos == 0)
			spacepos = s.find(' ',pos);
		else{
			spacepos = s.find(' ',pos+1);
			pos++;}
			
	
			length = spacepos - pos;
			word = s.substr(pos,length);
			unqw.insert(word);
			wrds++;
			pos += length;	

			}

	while(pos2 < s.length()){
			if(pos2 == 0)
			nlpos = s.find("\n",pos2);
		else{
			nlpos = s.find("\n",pos2+1);
			pos2++;}
			
			cout << pos2 << " " << nlpos << endl;
			nlength = nlpos - pos2;
			sentence = s.substr(pos2,nlength);
			unql.insert(sentence);
			newlines++;
			pos2 += nlength;
	}

		chars = s.length()+ newlines;
		unqwrds = unqw.size();
		unqlines = unql.size();
		
		
		return words;

}
		
# endif
int main()
{
	
    //string s;
	set<string> unqw;
	set<string> unql;

	string newstr, word, sentence, newstr2;
	unsigned int pos = 0, spacepos, length = 0, pos2 = 0, nlpos, nlength = 0; // variable use to get seperate the strings
	unsigned int chars = 0, newlines = 0, wrds = 0, unqwrds = 0, unqlines = 0; // counters

	string s ="this is another example\nthis example has multiple lines\nand some blank lines too\n\n\nthe lines are not unique\n the lines are not unique ";
	//string s = "this is a test";

	while(pos < s.length()){
		if(pos == 0)
			spacepos = s.find(' ',pos);
		else{
			spacepos = s.find(' ',pos+1);
			pos++;}
			
		//	cout << pos << " " << spacepos << endl;
			length = spacepos - pos;
			word = s.substr(pos,length);
		//	newstr += word;
		//	cout << newstr << endl;
			unqw.insert(word);
			wrds += 1;
			pos += length;	

			}	

	while(pos2 < s.length()){
			if(pos2 == 0)
			nlpos = s.find("\n",pos2);
		else{
			nlpos = s.find("\n",pos2+1);
			pos2++;}
			
		//	cout << pos2 << " " << nlpos << endl;
			nlength = nlpos - pos2;
			sentence = s.substr(pos2,nlength);
			 newstr2 += sentence;
			cout << newstr2 << endl;
			unql.insert(sentence);
			newlines++;
			pos2 += nlength;
	}

		//wrds += countWords(line, unqw);
		//newlines += countlines(line, unql);
		chars += s.length()+newlines;
		unqwrds = unqw.size();
		unqlines = unql.size();

		cout << newlines << "\t" << wrds << "\t" << chars << "\t" << unqlines << "\t" << unqwrds << endl;
	return 0;
}


