/* 
Copyright (c) 2017 Kevin Bender 
Project Euler Problem 9: There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product a*b*c.
https://projecteuler.net/problem=9
*/

#include <iostream>
#include <fstream>
#include <string>
#include<bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
	int finala=0;
	int finalb=0;
	int finalc=0;
	for(int a=1;a<1000;a++){
		for(int b=1;b<1000-a;b++){
			if(a+b<1000){
			int c=1000-a-b;//ensures a+b+c equals 1000

			if(pow(a,2)+pow(b,2)==pow(c,2)){//checks for pythagorean triple
				finala=a;
				finalb=b;
				finalc=c;
				break;
			}
			}
		}
		if(finala!=0){//break out of second loop on the condition that the triple has been found
			`break;
		}
	}
	cout<<finala*finalb*finalc<<'\n';
	return 0;
}