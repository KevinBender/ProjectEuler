/* 
Copyright (c) 2017 Kevin Bender 
Project Euler Problem 5: What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
https://projecteuler.net/problem=5
*/
#include <iostream>
#include <fstream>
#include <string>
#include<bits/stdc++.h>
using namespace std;

bool isDivisible(int num){
	for(int i=11;i<=20;i++){ 
	//starts checking at 11 because the numbers between 11 and 20 contain numbers whose of multiples contain all of the numbers under 11.
	//Since the numbers between 11 and 20 are multiples of numbers under 11, a number being divisible by all of the numbers between 11 and 20 implies that number is divisible by all numbers under 11 
		if(num%i!=0)
			return false;
	}
	return true;
}
int main(){
	int num=100;
	while(true){
		if(isDivisible(num)){//checks for divisibility and prints if it is found
			cout<<num<<'\n';
			break;
		}
		num+=4;
	}
	return 0;
}