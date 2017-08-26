/* 
Copyright (c) 2017 Kevin Bender 
Project Euler Problem 7: What is the 10 001st prime number?
https://projecteuler.net/problem=7
*/

#include <iostream>
#include <fstream>
#include <string>
#include<bits/stdc++.h>
using namespace std;
vector<int> generatePrimes(int limit){//prime number generator into vector<int> type
	std::vector<int> primes;
	primes.push_back(2);
	int i=3;
	while(primes.size()<limit){
		bool prime=true;
		for(int b=1;b<primes.size();b++){
			if(i%primes.at(b)==0){
				prime=false;
				break;
			}
			else if(i/primes.at(b)<primes.at(b-1))
				break;
		}
		if(prime){
			primes.push_back(i);
		}
		i+=2;
	}
	return primes;
}

int main(){
	vector<int> v=generatePrimes(10001);//finds list of the first 10,001st prime
	cout<<"1: "<<v.at(0)<<'\n';//prints out first prime
	cout<<"10001: "<<v.at(10000)<<'\n';//prints out 10,001st prime
	return 0;
}
