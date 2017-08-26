/* 
Copyright (c) 2017 Kevin Bender 
Project Euler Problem 4: Find the largest palindrome made from the product of two 3-digit numbers.
https://projecteuler.net/problem=4
*/

#include <iostream>
#include <fstream>
#include <string>
#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int num){ //checks for palindrome
	int digits=((int) log10(num))+1;
	int output=0;
	for(int i=0;i<digits;i++){ //Loop creates an int that is the reverse of the input
		output+=(int)((int)(((int)(num))-((int)(num/(pow(10,digits-i))))*pow(10,digits-i))/(pow(10,digits-i-1)))*pow(10,i);
	}
	return (output==num); //Palindromes should be equal and return TRUE
	}

int main(){

	bool canContinue=false;
	int max=0;
	
	for(int i=999;i>50;i--){
		for(int b=999;b>50;b--){
			if(isPalindrome(i*b))
			{
				if(i*b>max)
					max=i*b;//resets max if i*b if i*b is a palindrome and i*b is greater than the previous greatest palindrome
		}
		}
	}
	cout<<max<<'\n';
	
	return 0;
}