#include<iostream>
#include<chrono>
#include<thread>
using namespace std;

int main(){
	
	string myname;
	cout<<"Enter Your Name";
	getline(cin,myname);
	cout<<"Your Name in Vertical order is:\n";
	int size = myname.size();
	
	for (int x=0; x < 10; x++){
		cout<<myname[x]<<"\n";
		this_thread::sleep_for(chrono::milliseconds(100));
	
	}
	


return 0;
}