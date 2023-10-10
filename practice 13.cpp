#include<iostream>
using namespace std;

int main(){
	
	int grade;
	
	cout<<"Enter your grade:";
	cin>>grade;
	
	if (grade >=100){
		
		cout<<"Class S";
		
	}else if (grade >90){
		
		cout<<"Class A";
			
	}else if(grade >80){
		
		cout<<"Class B";
		
	}else if (grade >70){
		
		cout<<"Class C";
		
	}else if(grade >60){
		
		cout<<"Class D";
		
	}else{
		
		cout<<"Class E";
		
	}
		
	return 0;	
	

}