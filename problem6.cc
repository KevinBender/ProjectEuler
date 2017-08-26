/* 
Copyright (c) 2017 Kevin Bender 
Project Euler Problem 6: Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
https://projecteuler.net/problem=6
*/

#include <iostream>
#include <fstream>
#include <string>
#include<bits/stdc++.h>
using namespace std;

int main(){
	int sum1=0;
	for(int i=1;i<=100;i++){//finds sum of squares of first 100 natural numbers
		sum1+=pow(i,2);
	}
	int sum2=0;
	for(int i=1;i<=100;i++){//finds square of sum of first 100 natural numbers
		sum2+=i;
	}
	sum2=pow(sum2,2);
	cout<<sum2-sum1<<'\n';//prints difference
	return 0;
}