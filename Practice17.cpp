#include<iostream>
#include<chrono>
#include<thread>

using namespace std;

int main(){
	
	for(int i= 1; i <= 50; i++) {
		cout<<"\n Puhon, Padayon!"<<i;
		this_thread::sleep_for(chrono::milliseconds(100));
	}
	
	
	
	
	
	
	
	
return 0;
}