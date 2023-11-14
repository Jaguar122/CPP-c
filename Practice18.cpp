#include<iostream>
#include<chrono>
#include<thread>

using namespace std;

int main(){
	
	int x = 0;
	while (x<=50){
		
		cout<<"\nJay-R" <<x;
		x++;
		this_thread::sleep_for(chrono::milliseconds(100));
	}
	
	
	
	
	
	
	
	
	
return 0;
}