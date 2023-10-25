#include <iostream>
#include <chrono>
#include <thread>
using namespace std;


int main() {
	
		system("color 1");
		int choice, score;
		char q1, q2, q3, q4, q5, q6, q7, q8, q9, q10;
		char again;
		
		
		
		do{
		
	
	
	
	
		
		cout<<"\n ________________________________";
		cout<<"\n|                                |";
		cout<<"\n|         Choose Quiz            |";
		cout<<"\n|                                |";
		cout<<"\n|    Enter 1 for History         |";
		cout<<"\n|    Enter 2 for Anime           |";
		cout<<"\n|                                |";
		cout<<"\n|                                |";
		cout<<"\n|________________________________|";
		
		cout<<"\n\nEnter your choice:";
		cin>>choice;
		
		cout<<"\nPlease wait";
	    for(int x=0; x < 6; x++){
	    	
	    	cout<<".";
	    	this_thread::sleep_for(chrono::milliseconds(500));
	    	
		}
		system("cls");
	    
	    
	    switch(choice){
	    	case 1:
	    		cout<<"\nWELCOME TO HISTORY QUIZ BEE!";
	    		
	    		cout<<"\n_____________________________";
	    		cout<<"\n";
				cout<<"\n1. Who is the Father of the Computer?";
	    		cout<<"\n\tA. Charles Babbage";
	    		cout<<"\n\tB. Steve Wozniak";
	    		cout<<"\n\tC. Steve Jobs";
	    			
	    		cout<<"\n\nEnter your answer:";
	    		cin>>q1;
	    		
	    		if(q1 == 'A' || q1 == 'a' ){
	    			score++;
				}
	    		
	    		cout<<"\n2. ______ was initially used for arithmetic tasks?";
	    		cout<<"\n\tA. Difference Machine";
	    		cout<<"\n\tB. Abacus";
	    		cout<<"\n\tC. Analytical engine";
	    		
	    		cout<<"\n\nEnter your answer:";
	    		cin>>q2;
	    		
	    		if(q2 == 'B' || q2 == 'b' ){
	    			score++;
				}
	    		
	    		cout<<"\n3. In 1833 several years the digital computer which he called _______?";
	    		cout<<"\n\tA. Difference Machine";
	    		cout<<"\n\tB. Abacus";
	    		cout<<"\n\tC. Analytical Engine";
	    		
	    		cout<<"\n\nEnter your answer:";
	    		cin>>q3;
	    		
				if(q3 == 'C' || q3 == 'c'){
	    			score++;
				}
				cout<<"\n4. Who was the two person developed ENIAC?";
	    		cout<<"\n\tA. John Presper Eckert and John Maucy";
	    		cout<<"\n\tB. Bill Gates and Paul G Allen";
	    		cout<<"\n\tC. Steve Jobs and Steve Wozniak";
	    			
	    		cout<<"\n\nEnter your answer:";
	    		cin>>q4;
	    		
	    		if(q4 == 'A' || q4 == 'a' ){
	    			score++;
				}
				cout<<"\n5. Who the two Boyhood Friends from Seattle?";
	    		cout<<"\n\tA. John Presper Eckert and John Maucy";
	    		cout<<"\n\tB. Bill Gates and Paul G Allen";
	    		cout<<"\n\tC. Steve Jobs and Steve Wozniak";
	    			
	    		cout<<"\n\nEnter your answer:";
	    		cin>>q5;
	    		
	    		if(q5 == 'B' || q5 == 'b' ){
	    			score++;
				}
				cout<<"\n6.In 2001 Microsoft released the ______?";
	    		cout<<"\n\tA. Pixar";
	    		cout<<"\n\tB. Dos";
	    		cout<<"\n\tC. Xbox";
	    			
	    		cout<<"\n\nEnter your answer:";
	    		cin>>q6;
	    		
	    		if(q6 == 'C' || q6 == 'c' ){
	    			score++;
				}
				cout<<"\n7.Who left Apple in 1983?";
	    		cout<<"\n\tA. Steve Wozniak";
	    		cout<<"\n\tB. Charles Babbage";
	    		cout<<"\n\tC. Steve Jobs";
	    			
	    		cout<<"\n\nEnter your answer:";
	    		cin>>q7;
	    		
	    		if(q7 == 'A' || q7 == 'a' ){
	    			score++;
				}
				cout<<"\n8. who left Apple in 1985?";
	    		cout<<"\n\tA. Charles Babbage";
	    		cout<<"\n\tB. Steve Jobs";
	    		cout<<"\n\tC. Steve Wozniak";
	    			
	    		cout<<"\n\nEnter your answer:";
	    		cin>>q8;
	    		
	    		if(q8 == 'B' || q8 == 'b' ){
	    			score++;
				}
				cout<<"\n9.Apple Computer Founded on ______?";
	    		cout<<"\n\tA. June 1, 1976";
	    		cout<<"\n\tB. May 1, 1976";
	    		cout<<"\n\tC. April 1, 1976";
	    			
	    		cout<<"\n\nEnter your answer:";
	    		cin>>q9;
	    		
	    		if(q9 == 'C' || q9 == 'c' ){
	    			score++;
				}
				cout<<"\n10.An Extremely Fast Computer that can perform hundreds of millions of instructions per second?";
	    		cout<<"\n\tA. Super Computer";
	    		cout<<"\n\tB. Mainframe Computer";
	    		cout<<"\n\tC. Mini Computer";
	    			
	    		cout<<"\n\nEnter your answer:";
	    		cin>>q10;
	    		
	    		if(q10 == 'A' || q10 == 'a' ){
	    			score++;
				}
				system("cls");
				cout<<"Computing Your Total score";
	    for(int x=0; x < 8; x++){
	    	
	    	cout<<".";
	    	this_thread::sleep_for(chrono::milliseconds(500));
	    }
	    system("cls");
	    
	    cout<<"Your Score is: "<<score;
	    
	    if(score >= 5) {
	    	
	    	cout<<"\nYou've passed!!";
	    	cout<<"\nCongrats!!";
		}else{
			
			cout<<"\nYou've Failed";
			cout<<"\nStudy Harder";
			
		}
		
			cout<<"\n\n\nContinuing";
	    for(int x=0; x < 10; x++){
	    	
	    	cout<<".";
	    	this_thread::sleep_for(chrono::milliseconds(500));
	    }
	    system("cls");
		
	    	
		
		
			cout<<"\nYou want to try again? \nY- Yes / N - No: ";
	 	
		 	cin>>again;
	  		system("cls");
	  	
		break;	
			
		
				
				
				
				
				
		    case 2:
				 cout<<"\nWELCOME TO ANIME QUIZ BEE!";
	    		
	    		cout<<"\n_____________________________";
	    		cout<<"\n";
				cout<<"\n1. Who is the Father of Naruto?";
	    		cout<<"\n\tA. Kamikaze Minato";
	    		cout<<"\n\tB. Uchiha Madara";
	    		cout<<"\n\tC. Might Guy";
	    			
	    		cout<<"\n\nEnter your answer:";
	    		cin>>q1;
	    		
	    		if(q1 == 'A' || q1 == 'a' ){
	    			score++;
				}
	    		
	    		cout<<"\n2. Who is the Mother of Naruto?";
	    		cout<<"\n\tA. Tsunade";
	    		cout<<"\n\tB. Kushina";
	    		cout<<"\n\tC. Kurenai";
	    		
	    		cout<<"\n\nEnter your answer:";
	    		cin>>q2;
	    		
	    		if(q2 == 'B' || q2 == 'b' ){
	    			score++;
				}
	    		
	    		cout<<"\n3. Who trained Naruto to be strong?";
	    		cout<<"\n\tA. Might Guy";
	    		cout<<"\n\tB. Kakashi";
	    		cout<<"\n\tC. Jiraiya";
	    		
	    		cout<<"\n\nEnter your answer:";
	    		cin>>q3;
	    		
				if(q3 == 'C' || q3 == 'c'){
	    			score++;
				}
				cout<<"\n4. Who is the teacher of Pain?";
	    		cout<<"\n\tA. Jiraiya";
	    		cout<<"\n\tB. Madara";
	    		cout<<"\n\tC. Obito";
	    			
	    		cout<<"\n\nEnter your answer:";
	    		cin>>q4;
	    		
	    		if(q4 == 'A' || q4 == 'a' ){
	    			score++;
				}
				cout<<"\n5. Which team Naruto belong?";
	    		cout<<"\n\tA. Team 5";
	    		cout<<"\n\tB. Team 7";
	    		cout<<"\n\tC. Team 6";
	    			
	    		cout<<"\n\nEnter your answer:";
	    		cin>>q5;
	    		
	    		if(q5 == 'B' || q5 == 'b' ){
	    			score++;
				}
				cout<<"\n6. How many members in onegroup in Naruto?";
	    		cout<<"\n\tA. 4";
	    		cout<<"\n\tB. 5";
	    		cout<<"\n\tC. 3";
	    			
	    		cout<<"\n\nEnter your answer:";
	    		cin>>q6;
	    		
	    		if(q6 == 'C' || q6 == 'c' ){
	    			score++;
				}
				cout<<"\n7.Who love of Naruto?";
	    		cout<<"\n\tA. Sakura";
	    		cout<<"\n\tB. Hinata";
	    		cout<<"\n\tC. Ino";
	    			
	    		cout<<"\n\nEnter your answer:";
	    		cin>>q7;
	    		
	    		if(q7 == 'A' || q7 == 'a' ){
	    			score++;
				}
				cout<<"\n8. Who love of Sakura?";
	    		cout<<"\n\tA. Naruto";
	    		cout<<"\n\tB. Sasuke";
	    		cout<<"\n\tC. Rocklee";
	    			
	    		cout<<"\n\nEnter your answer:";
	    		cin>>q8;
	    		
	    		if(q8 == 'B' || q8 == 'b' ){
	    			score++;
				}
				cout<<"\n9. Who First kiss of Sasuke?";
	    		cout<<"\n\tA. Sarada";
	    		cout<<"\n\tB. Sakura";
	    		cout<<"\n\tC. Naruto";
	    			
	    		cout<<"\n\nEnter your answer:";
	    		cin>>q9;
	    		
	    		if(q9 == 'C' || q9 == 'c' ){
	    			score++;
				}
				cout<<"\n10. Who is the wife of Naruto?";
	    		cout<<"\n\tA. Hinata";
	    		cout<<"\n\tB. Timari";
	    		cout<<"\n\tC. Ino";
	    			
	    		cout<<"\n\nEnter your answer:";
	    		cin>>q10;
	    		
	    		if(q10 == 'A' || q10 == 'a' ){
	    			score++;
	    			
	    			default:
	    				cout<<"INVALID OPERATOR!!";
	    				break;
				
				}
				
							system("cls");
				cout<<"Computing Your Total score";
	    for(int x=0; x < 8; x++){
	    	
	    	cout<<".";
	    	this_thread::sleep_for(chrono::milliseconds(500));
	    }
	    system("cls");
	    
	    cout<<"Your Score is: "<<score;
	    
	    if(score >= 5) {
	    	
	    	cout<<"\nYou've passed!!";
	    	cout<<"\nCongrats!!";
		}else{
			
			cout<<"\nYou've Failed";
			cout<<"\nStudy Harder";
			
		}
		
			cout<<"\n\n\nContinuing";
	    for(int x=0; x < 10; x++){
	    	
	    	cout<<".";
	    	this_thread::sleep_for(chrono::milliseconds(500));
	    }
	    system("cls");
		
	    	
		
			cout<<"\nYou want to try again? \nY- Yes / N - No: ";
	 	
		 	cin>>again;
	  		system("cls");
	  	
		break;	
		
	}
		
		
		
		
		
		
		
		
		
		
		
		}	
		while(again == 'y' || again == 'Y');
	  	
		
				
		
				
				
				

				
	    	
	    	
	 	
	
	 	
	return 0; 	
}
		

