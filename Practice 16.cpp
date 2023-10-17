#include<iostream>
using namespace std;

int main (){

    char again;
    int num1, num2;
    
    
    cout<<"\n_______________________________________"; 
    cout<<"\n       CALCULATOR  OPERATOR            ";
	cout<<"\n_______________________________________";
	
	cout<<"\n ENTER A FOR ADDITION"; 
   
	cout<<"\n ENTER S FOR SUBTRACTION"; 
	
	cout<<"\n ENTER D FOR DIVISION";
	
	cout<<"\n ENTER M FOR MULTIPLICATION"; 
	
	cout<<"\n_______________________________________"; 
	
 
	cout<<"\n SELECT AN OPERATOR: ";
	cin>> again;
	
	cout<< "\n ENTER A NUMBER: ";
	cin>> num1;
	
	cout<< "\n ENTER A NUMBER: ";
	cin>> num2;
	
	
 do{
 	switch(again){
	
	case 'A':
		cout <<"Result is: "<<num1 + num2;
	break;	
	
	case 'S':
		cout <<"Result is: "<<num1 - num2;
	break;	
	
	case 'D':
		cout <<"Result is: "<<num1 / num2;
	break;	
		
	case 'M':
		cout <<"Result is: "<<num1 * num2;
	break;	
		
	default:
		cout<< ("INVALID OPERATOR");
	} 
   
   
    cout<<"\nYou want to try again? \nY-Yes / N-No:";
    cin>>again;
    system("cls");
    
}while(again == 'y' ||  again == 'Y' );


    return 0;
}