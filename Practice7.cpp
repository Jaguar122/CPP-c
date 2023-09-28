#include<iostream>
using namespace std;

int main(){
	
	string x = "HELLO WORLD!";
	int x_size = x.size();
	x [0] = 'J';
	x_size-= 4;
	cout<< x <<"\n";
	cout<<x_size <<"\n";
	cout<< x[x_size] <<"\n";	
	
	return 0;
}