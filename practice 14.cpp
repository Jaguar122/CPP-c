#include<iostream>
using namespace std;

int main(){
	
	char choice;
	int num1, num2;
	
	cout<<"\n******************************************************************";
	cout<<"\n*                                                                *";
	cout<<"\n*                                                                *";
	cout<<"\n*                      CALCULATOR                                *";
	cout<<"\n******************************************************************";
	cout<<"\n*          ENTER + FOR ADDITION                                  *";
	cout<<"\n*          ENTER - FOR SUBTRACTION                               *";
	cout<<"\n*	        ENTER / FOR DIVISION                                  *";
	cout<<"\n*          ENTER * MULTIPLICATION                                *";
	cout<<"\n*		                                                          *"; 
	cout<<"\n*	                                                              *";
	cout<<"\n******************************************************************";
	
	cout<<"\nSELECT AN OPERATOR:";
	cin>>choice;
	
	cout<<"\n Enter a number:";
	cin>>num1;
	
	cout<<"Enter a number:";
	cin>>num2;
	
	if (choice == '1'){
		
		cout<<"\n \n RESULT IS:"<<num1+num2;
		
	}else if (choice =='2'){
		
		cout<<"\n \n RESULT IS:"<<num1-num2;
		
	}else if (choice =='3'){
		
		cout<<"\n \n RESULT IS:"<<num1/num2;
		
	}else if (choice =='4'){
		
		cout<<"\n \n RESULT IS:"<<num1*num2;
	}
	
		
		
	
return 0;	
}

	
		
	

