#include<iostream>
#include<cmath>
#include<time.h>
#include<stdlib.h>
using namespace std;
int main()
{
	char c;
	int win=0,loss=0,draw=0;
	do{
		int choice;
		cout<<"************************************************"<<endl;
		cout<<"*****welcome to ROCK PAPER SCISSORS**************"<<endl;
		cout<<"************************************************"<<endl;
		cout<<"press 1 for rock\npress 2 for paper\npress 3 for scissors"<<endl;
		cin>>choice;
		int comp=rand()%3+1;
		cout<<"the computer chose: "<<comp<<endl;
		if(choice==1&&comp==1){
			cout<<"rock meets rock!its a draw"<<endl;
			draw++;
			
		}
	else if(choice==1&&comp==2){
			cout<<"rock meets paper!computer wins"<<endl;
			loss++;
			
		}
	else	if(choice==1&&comp==3){
			cout<<"rock meets scissors!you win"<<endl;
			win++;
			
		}
		else if(choice==2&&comp==1){
			cout<<"paper meets rock!you win"<<endl;
			win++;
			
		}
		else if(choice==2&&comp==2){
			cout<<"paper meets paper!its a draw"<<endl;
			draw++;
			
		}
		else if(choice==2&&comp==3){
			cout<<"paper meets scissors!computer wins"<<endl;
			loss++;
			
		}
		else if(choice==3&&comp==1){
			cout<<"scissors meets rock!computer wins"<<endl;
			loss++;
			
		}
		else if(choice==3&&comp==2){
			cout<<"scissors meets paper!you win"<<endl;
			win++;
			
		}
		else if(choice==3&&comp==3){
			cout<<"scissors meets scissors!its a draw"<<endl;
			draw++;
			
		}
		else
		{
			cout<<"please select valuse form 1 2 and 3 only"<<endl;
			
		}
		cout<<"wins: "<<win<<endl;
		cout<<"loss: "<<loss<<endl;
		cout<<"draw: "<<draw<<endl;
		cout<<"would you like to play again?Y/N"<<endl;	 
		cin>>c;
		system("cls");
	}
	while(c=='y'||c=='Y');
	
	return 0;
}
