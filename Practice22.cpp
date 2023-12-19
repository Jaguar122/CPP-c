#include<iostream>
#include<chrono>
#include<thread>
using namespace std;

void loading(){
	for(int x = 0; x < 6; x++) {
		cout <<"*";
		this_thread::sleep_for(chrono::milliseconds(500));
	}
}
	
void checker (char answer, char correct1,char correct2){
	
	if(answer== correct1 || answer == correct2){
		cout<<"Correct Answer!";
		
	}else{
		cout<<"wrong!";
	}
}		
int main(){
	
	char choice;
	cout<<"Sino pumatay kay magellan?";
	cout<<"\na.Lapo2x\t b.Rizal \t c. Layla\n";
	cin>>choice;
	
	checker(choice, 'A','a');
	loading();
	cout<<"\n";
	
	cout<<"Sino pumatay kay lapo2x?";
	cout<<"\na.Lapo2x\t b.Rizal \t c.Layla\n";
	cin>>choice;
	checker (choice,'C','c');
	
	return 0;
}




