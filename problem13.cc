/* 
Copyright (c) 2017 Kevin Bender 
Project Euler Problem 13: Work out the first ten digits of the sum of the following one-hundred 50-digit numbers. numbers stored in "data2.txt" file
https://projecteuler.net/problem=13

This solution is based off of long addition using strings to store the numbers
*/

#include <iostream>
#include <fstream>
#include<bits/stdc++.h>
#include <string>
#include <vector>

using namespace std;

int main(){
	
	std::string line;
	std::string matrix[100];
	vector<int> s;
  
	ifstream data("data2.txt");
	if(data.is_open()){
		int i=0;
		while(getline(data,line)){
			matrix[i]=line;
			i++;
		}
	}
	int previousSum=0;
	int sum=0;
	
	for(int i=0;i<10;i++){
		previousSum=(sum-((int)(sum/pow(10,5)))*pow(10,5));//remove overflow from previous sum
			sum=sum/pow(10,5);//overflow into sum

		for(int v=0;v<100;v++){
			int num=0;
			for(int b=0;b<5;b++){
				num+=((int)(matrix[v].at((49-b-i*5)))-48)*pow(10,b);//construct num from digits at position b+i*5
			}
			sum+=num;//add num to sum
		}

		//cout<<((int)(sum/pow(10,5)))*pow(10,5)<<'\n';
		
	}
	cout<<sum<<((int)(previousSum/pow(10,10-(int)(log10(sum))+2)))<<'\n';//get first 10 digits and print out
	
  return 0;
}