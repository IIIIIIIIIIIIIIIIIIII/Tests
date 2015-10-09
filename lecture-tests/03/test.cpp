#include <iostream>
using std::cout;
using std::endl;
using std::cin;

//Test for the if.while.cpp
int main()

 // Code that prints out the square of the first 10 odd integer
{
 int num = 1;

 for(int x=1;x<=10;num++){
  if(num%2!=0){
   cout<< num*num << endl;
   x++;
 
  }
 
 }
 cout << endl;

 //Finds the exponent of the largest power of two that divides n.
 cout<<"Enter a number: ";
 cin>>num;
 int x = 0;

 while(num%2==0){
  x++;
  num = num/2;

 }
 cout<<"The number contain " << x << " of 2" << endl;
 cout << endl;
 
 
 /* Read an Integer from the user until a negative number is entered
  * which then computes the average, max, and min of the non-negative
  * integer*/
 
 int posnum, sum = 0, max = 0, min = 0, counter = 0;
 double average;
 cout<<"Enter some number (enter a negative to quit): " << endl;

 
 while(posnum >= 0){
 
  cin>> posnum;
  // makes sure the negative integer does not add to the average and add another counter
  if (posnum < 0)
   break;


