/* 
Copyright (c) 2017 Kevin Bender 
Project Euler Problem 1: Find the sum of all the multiples of 3 or 5 below 1000
https://projecteuler.net/problem=1
*/
#include <iostream>
#include <fstream>
#include <string>
#include<bits/stdc++.h>
#include <vector>
using namespace std;



int main(){
	int sum=0;
	int num=0;
	int multiplier=0;
	int limit=1000;
	do{
		sum=sum+num; //adds multiple of 3 to sum
		multiplier++;
		num=multiplier*3; //creates incremental multiples of three under the limit

	}while(num<limit);
		
	num=0;
	multiplier=0;
	do{
		if(num%3!=0) //makes sure that the multiple of 5 is not a multiple of 3 as well
			sum=sum+num;
		multiplier++;
		num=multiplier*5;
	}while(num<limit);
	std::cout<<'\n'<<sum<<'\n';
}