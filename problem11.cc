/* 
Copyright (c) 2017 Kevin Bender 
Project Euler Problem 11: What is the greatest product of four adjacent numbers in the same direction (up, down, left, right, or diagonally) in the 20×20 grid?
https://projecteuler.net/problem=11
*/


#include <iostream>
#include <fstream>
#include <string>
#include<bits/stdc++.h>
using namespace std;
int maxDownRight(int matrix[][20]);
int maxUpLeft(int matrix[][20]);
int maxVertical(int matrix[][20]);
int maxHorizontal(int matrix[][20]);


int main () {
  string line;
  string matrix[20];
  
  ifstream data ("data.txt");//read info from data.txt
  if (data.is_open())
  {
	int i=0;
    while (getline(data,line))
    {
      matrix[i]=line;
	  i++;
    }
    data.close();
  }

  else cout << "Unable to open file"; 
  int intmatrix[20][20];
  
  for(int i=0;i<20;i++){//initialize 20x20 matrix
	for(int b=0;b<20;b++){
		intmatrix[i][b]=((int)(matrix[i].at(b*3))-48)*10+((int)(matrix[i].at(b*3+1))-48);
		//cout<< intmatrix[i][b]<<' ';
	}
	//cout<<'\n';
  }
  int maxArray[4];
  maxArray[0]=maxDownRight(intmatrix);
  maxArray[1]=maxUpLeft(intmatrix);
  maxArray[2]=maxVertical(intmatrix);
  maxArray[3]=maxHorizontal(intmatrix);
  int max=0;
  for(int i=0;i<4;i++){
	  if(maxArray[i]>max){
		  max=maxArray[i];
	  }
  }
  cout<<max<<'\n';
  return 0;
}

int maxDownRight(int matrix[][20]){//get max of 4 adjacent numbers going diagonally from top to bottom and left to right
	int max=0;
	for(int i=3;i<20;i++){
		for(int b=0;b<16;b++){
			int current=1;
			for(int v=0;v<4;v++){
				current=current*matrix[b+v][i-v];
			}
			if(current>max){
				max=current;
			}
		}
	}
	return max;
}

int maxUpLeft(int matrix[][20]){//get max of 4 adjacent numbers going diagonally from bottom to top and left to right
	int max=0;
	for(int i=0;i<16;i++){
		for(int b=0;b<16;b++){
			int current=1;
			for(int v=0;v<4;v++){
				current=current*matrix[b+v][i+v];
			}
			if(current>max){
				max=current;
			}
		}
	}
	return max;
}

int maxVertical(int matrix[][20]){ //get max of 4 adjacent numbers vertically
	int max=0;
	for(int i=0;i<20;i++){
		for(int b=0;b<16;b++){
			int current=1;
			for(int v=0;v<4;v++){
				current=current*matrix[i][b+v];
			}
			if(current>max){
				max=current;
			}
		}
	}
	return max;
}

int maxHorizontal(int matrix[][20]){ //get max of 4 adjacent numbers horizontally
	int max=0;
	for(int i=0;i<20;i++){
		for(int b=0;b<16;b++){
			int current=1;
			for(int v=0;v<4;v++){
				current=current*matrix[b+v][i];
			}
			if(current>max){
				max=current;
			}
		}
	}
	return max;
}