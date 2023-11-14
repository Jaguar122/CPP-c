#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

int main (){
	
	
	int i = 0;
	
	do{
		 
		 cout <<"\nJay-R "<<i;
    		i++;
			this_thread::sleep_for(chrono::milliseconds(100));
		
		
		
	}
	while(i <= 50);
	
	
	
	
	
	
	
	
	
	
	
	return 0;	
	
}