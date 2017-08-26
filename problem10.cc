/* 
Copyright (c) 2017 Kevin Bender 
Project Euler Problem 10: Find the sum of all the primes below two million.
https://projecteuler.net/problem=10
*/

#include <iostream>
#include <fstream>
#include <string>
#include<bits/stdc++.h>
#include <vector>
using namespace std;

vector<long int> generatePrimes(int limit){//generate primes below <int limit>
	std::vector<long int> primes;
	primes.push_back(2);
	for(int i=3;i<=limit;i+=2){
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
	}
	return primes;
}

long int sum(vector<long int> v){//sum of vector<long int>
	long int sums=0;
	for(int i=0;i<v.size();i++){
		sums+=v.at(i);
	}
	return sums;
}

int main(){
	vector<long int> v=generatePrimes(2000000);
	cout<<sum(v)<<'\n';
	return 0;

}