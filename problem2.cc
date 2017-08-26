/* 
Copyright (c) 2017 Kevin Bender 
Project Euler Problem 2: By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
https://projecteuler.net/problem=2
*/
#include <iostream>
#include <fstream>
#include <string>
#include<bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
	int first=1;
	int second=2;
	int third=3;
	//Initialize fibbonacci sequence
	int sum=0;
	while(first<4000000){ 
		if(first%2==0){ //checks for even
			sum+=first;
		}
		third=first+second;
		first=second;
		second=third;
		
		
	}
	std::cout<<'\n'<<sum<<'\n';
	return 0;
}