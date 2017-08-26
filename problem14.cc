/* 
Copyright (c) 2017 Kevin Bender 
Project Euler Problem 14: 
The following iterative sequence is defined for the set of positive integers:

n → n/2 (n is even)
n → 3n + 1 (n is odd)

Using the rule above and starting with 13, we generate the following sequence:

13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1
It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.

Which starting number, under one million, produces the longest chain?
https://projecteuler.net/problem=14

*/

#include <iostream>
#include <fstream>
#include<bits/stdc++.h>
#include <string>
#include <vector>

using namespace std;

long long int collatz(long long int num, int length){//recursive function for collatz sequence
	//cout<<num<<'\n';
	if(num==1){
		return length;
	}
	else if(num%2==0){
		return collatz(num/2,length+1);
	}
	else{
		return collatz(num*3+1,length+1);
	}
	
}

int main(){
	int maxstart=1;
	int maxlength=1;
	for(long long int i=3;i<1000000;i++){//determine longest starting point under limit of 1,000,000
		int num=collatz(i,1);
		if(maxlength<num){
			maxlength=num;
			maxstart=i;
		}
		
	}
	cout<<"Start: "<<maxstart<<'\n';
	cout<<"Length: "<<maxlength<<'\n';
}