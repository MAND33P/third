#include<iostream>
#include<process.h>
#include<stdio.h>
#include<fstream>
#include<stdlib.h>
#include<string.h>
#include<valarray>
using namespace std;
char nam[100];
int amountw = 0;
void rules()                      //to display game rules
{
	cout<<"The Rules of the game are:\n  -> To qualify you need to first give the correct order for the qualifing question to qualify for the game.\n  -> There are 10 questions in the game.\n  -> Each question has some amount alloted to it that you will get on giving the correct answer.\n  -> There are two stages in the game first is at Rs. 20,000 second at Rs. 12,50,000 if you cross these two levels then you would definately take the amount you have crossed even if you give an incorrect answer.\n  -> If you get puzzled in any question you can either use lifeline using 6 or quit using 5.\n  -> You will get two lifelines:\n    1. Double Tip (2X): Using this you can answer a question twice.\n    2. Expert Advice: Using this you can take advice from expert.\n  -> You can use only one lifeline in a question.\n -> If you use the lifeline second time the remaining lifeline will automaticaly be selected.\n -> You will not be able to use lifeline in 7 Crore Question.\n";
	cout << "\n\n\nEnter your name: ";
	cin >> nam;
	cout<<"\n\n\nPress any key to Continue: ";
	getch();
}


class leaderboard                      //Leaderboard
{
	char name[100];
	int amountwon;

	void addleaderboard()
	{
		strcpy(name,nam);
		amountwon = amountw;
	}
};
class questionbank          //class for each question
{
	public:
		char question[200];
		char opt1[100];
		char opt2[100];
		char opt3[100];
		char opt4[100];
		int correct;
		void addqualifyques()           //member function to add qualfying question
		{
			cout<<"Enter Question: ";
			gets(question);
			cout<<"Enter Option 1: ";
			gets(opt1);
			cout<<"Enter Option 2: ";
			gets(opt2);
			cout<<"Enter Option 3: ";
			gets(opt3);
			cout<<"Enter Option 4: ";
			gets(opt4);
			cout<<"Enter Correct Order (example 1234): ";
			cin>>correct;
		}


		void addques()                      //member function to add question
		{
			cout<<"Enter Question: ";
			gets(question);
			cout<<"Enter Option 1: ";
			gets(opt1);
			cout<<"Enter Option 2: ";
			gets(opt2);
			cout<<"Enter Option 3: ";
			gets(opt3);
			cout<<"Enter Option 4: ";
			gets(opt4);
			cout<<"Enter Correct Option (from 1,2,3,4): ";
			cin>>correct;
		}
};






void qqualify()           //Qualifying Question Adding File
{
	ofstream f("qqualify.dat",ios::app|ios::binary);
	if(!f)
	{
		cout<<"Error in Opening file";
		return;
	}
	questionbank a;
	a.addqualifyques();
	f.write((char*)&a,sizeof(a));
	f.close();
}

void q5000()             //Rs. 5000 Question Adding File
{
	ofstream f("q5000.dat",ios::app|ios::binary);
	if(!f)
	{
		cout<<"Error in Opening file";
		return;
	}
	questionbank a;
	a.addques();
	f.write((char*)&a,sizeof(a));
	f.close();
}


void q20000()             //Rs. 20000 Question Adding File
{
	ofstream f("q20000.dat",ios::app|ios::binary);
	if(!f)
	{
		cout<<"Error in Opening file";
		return;
	}
	questionbank a;
	a.addques();
	f.write((char*)&a,sizeof(a));
	f.close();
}


void q80000()             //Rs. 80000 Question Adding File
{
	ofstream f("q80000.dat",ios::app|ios::binary);
	if(!f)
	{
		cout<<"Error in Opening file";
		return;
	}
	questionbank a;
	a.addques();
	f.write((char*)&a,sizeof(a));
	f.close();
}


void q320000()             //Rs. 320000 Question Adding File
{
	ofstream f("q320000.dat",ios::app|ios::binary);
	if(!f)
	{
		cout<<"Error in Opening file";
		return;
	}
	questionbank a;
	a.addques();
	f.write((char*)&a,sizeof(a));
	f.close();
}


void q640000()             //Rs. 640000 Question Adding File
{
	ofstream f("q640000.dat",ios::app|ios::binary);
	if(!f)
	{
		cout<<"Error in Opening file";
		return;
	}
	questionbank a;
	a.addques();
	f.write((char*)&a,sizeof(a));
	f.close();
}


void q1250000()             //Rs. 1250000 Question Adding File
{
	ofstream f("q1250000.dat",ios::app|ios::binary);
	if(!f)
	{
		cout<<"Error in Opening file";
		return;
	}
	questionbank a;
	a.addques();
	f.write((char*)&a,sizeof(a));
	f.close();
}


void q2500000()             //Rs. 2500000 Question Adding File
{
	ofstream f("q2500000.dat",ios::app|ios::binary);
	if(!f)
	{
		cout<<"Error in Opening file";
		return;
	}
	questionbank a;
	a.addques();
	f.write((char*)&a,sizeof(a));
	f.close();
}


void q5000000()             //Rs. 5000000 Question Adding File
{
	ofstream f("q5000000.dat",ios::app|ios::binary);
	if(!f)
	{
		cout<<"Error in Opening file";
		return;
	}
	questionbank a;
	a.addques();
	f.write((char*)&a,sizeof(a));
	f.close();
}


void q1cr()             //Rs. 1 Crore Question Adding File
{
	ofstream f("q1cr.dat",ios::app|ios::binary);
	if(!f)
	{
		cout<<"Error in Opening file";
		return;
	}
	questionbank a;
	a.addques();
	f.write((char*)&a,sizeof(a));
	f.close();
}


void q7cr()             //Rs. 7 Crore Question Adding File
{
	ofstream f("q7cr.dat",ios::app|ios::binary);
	if(!f)
	{
		cout<<"Error in Opening file";
		return;
	}
	questionbank a;
	a.addques();
	f.write((char*)&a,sizeof(a));
	f.close();
}



void addquestion()           //Initial question adding function to get which question to add
{
	cout<<"\nList Of Questions:\n 1. Qualifying Question\n 2. 5,000\n 3. 20,000\n 4. 80,000\n 5. 3,20,000\n 6. 6,40,000\n 7. 12,50,000\n 8. 25,00,000\n 9. 50,00,000\n 10. 1 Crore\n 11. 7 Crore\n";
	int amount;
	cout<<"Enter The Question Number To Be Entered: ";
	cin>>amount;
	switch(amount)
	{
		case 1:qqualify();
			   break;
		case 2:q5000();
			   break;
		case 3:q20000();
			   break;
		case 4:	q80000();
			break;
		case 5:	q320000();
			break;
		case 6:	q640000();
			break;
		case 7:	q1250000();
			break;
		case 8:	q2500000();
			break;
		case 9:	q5000000();
			break;
		case 10:q1cr();
			break;
		case 11:q7cr();
			break;
		default:cout<<"Incorrect Input";exit(0);
	}
}


void view_question()        //function to view all questions in selected file
{
	cout<<"\nList Of Questions:\n 1. Qualifying Question\n 2. 5,000\n 3. 20,000\n 4. 80,000\n 5. 3,20,000\n 6. 6,40,000\n 7. 12,50,000\n 8. 25,00,000\n 9. 50,00,000\n 10. 1 Crore\n 11. 7 Crore\n";
	int amount;
	cout<<"Enter The Question Number to see all questions in that file: ";
	cin>>amount;
	int r;
	if (amount==1)
	{
		clrscr();
		ifstream f("qqualify.dat",ios::binary);
		if(!f)
		{
			cout<<"Error in opening File\n Exiting program";
			getch();
			exit(0);
		}
		questionbank a;
		r=1;
		f.read((char*)&a,sizeof(a));
		while(f)
		{
			clrscr();
			cout<<"Ques "<<r<<". "<<a.question<<"\n1. "<<a.opt1<<"\n2. "<<a.opt2<<"\n3. "<<a.opt3<<"\n4. "<<a.opt4<<"\n\nCorrect Answer is: "<<a.correct;
			getch();
			r++;
			f.read((char*)&a,sizeof(a));
		}
		f.close();
	}

	else if (amount==2)
	{
		clrscr();
		ifstream f1("q5000.dat",ios::binary);
		if(!f1)
		{
			cout<<"Error in opening File\n Exiting program";
			getch();
			exit(0);
		}
		questionbank a;
		r=1;
		f1.read((char*)&a,sizeof(a));
		while(f1)
		{
			clrscr();
			cout<<"Ques "<<r<<". "<<a.question<<"\n1. "<<a.opt1<<"\n2. "<<a.opt2<<"\n3. "<<a.opt3<<"\n4. "<<a.opt4<<"\n\nCorrect Answer is: "<<a.correct;
			getch();
			r++;
			f1.read((char*)&a,sizeof(a));
		}
		f1.close();
	}

	else if (amount==3)
	{
		clrscr();
		ifstream f2("q20000.dat",ios::binary);
		if(!f2)
		{
			cout<<"Error in opening File\n Exiting program";
			getch();
			exit(0);
		}
		questionbank a;
		r=1;
		f2.read((char*)&a,sizeof(a));
		while(f2)
		{
			clrscr();
			cout<<"Ques "<<r<<". "<<a.question<<"\n1. "<<a.opt1<<"\n2. "<<a.opt2<<"\n3. "<<a.opt3<<"\n4. "<<a.opt4<<"\n\nCorrect Answer is: "<<a.correct;
			getch();
			r++;
			f2.read((char*)&a,sizeof(a));
		}
		f2.close();
	}

	else if (amount==4)
	{
		clrscr();
		ifstream f3("q80000.dat",ios::binary);
		if(!f3)
		{
			cout<<"Error in opening File\n Exiting program";
			getch();
			exit(0);
		}
		questionbank a;
		r=1;
		f3.read((char*)&a,sizeof(a));
		while(f3)
		{
			clrscr();
			cout<<"Ques "<<r<<". "<<a.question<<"\n1. "<<a.opt1<<"\n2. "<<a.opt2<<"\n3. "<<a.opt3<<"\n4. "<<a.opt4<<"\n\nCorrect Answer is: "<<a.correct;
			getch();
			r++;
			f3.read((char*)&a,sizeof(a));
		}
		f3.close();
	}

	else if (amount==5)
	{
		clrscr();
		ifstream f4("q320000.dat",ios::binary);
		if(!f4)
		{
			cout<<"Error in opening File\n Exiting program";
			getch();
			exit(0);
		}
		questionbank a;
		r=1;
		f4.read((char*)&a,sizeof(a));
		while(f4)
		{
			clrscr();
			cout<<"Ques "<<r<<". "<<a.question<<"\n1. "<<a.opt1<<"\n2. "<<a.opt2<<"\n3. "<<a.opt3<<"\n4. "<<a.opt4<<"\n\nCorrect Answer is: "<<a.correct;
			getch();
			r++;
			f4.read((char*)&a,sizeof(a));
		}
		f4.close();
	}

	else
	if (amount==6)
	{
		clrscr();
		ifstream f5("q640000.dat",ios::binary);
		if(!f5)
		{
			cout<<"Error in opening File\n Exiting program";
			getch();
			exit(0);
		}
		questionbank a;
		r=1;
		f5.read((char*)&a,sizeof(a));
		while(f5)
		{
			clrscr();
			cout<<"Ques "<<r<<". "<<a.question<<"\n1. "<<a.opt1<<"\n2. "<<a.opt2<<"\n3. "<<a.opt3<<"\n4. "<<a.opt4<<"\n\nCorrect Answer is: "<<a.correct;
			getch();
			r++;
			f5.read((char*)&a,sizeof(a));
		}
		f5.close();
	}

	else
	if (amount==7)
	{
		clrscr();
		ifstream f6("q1250000.dat",ios::binary);
		if(!f6)
		{
			cout<<"Error in opening File\n Exiting program";
			getch();
			exit(0);
		}
		questionbank a;
		r=1;
		f6.read((char*)&a,sizeof(a));
		while(f6)
		{
			clrscr();
			cout<<"Ques "<<r<<". "<<a.question<<"\n1. "<<a.opt1<<"\n2. "<<a.opt2<<"\n3. "<<a.opt3<<"\n4. "<<a.opt4<<"\n\nCorrect Answer is: "<<a.correct;
			getch();
			r++;
			f6.read((char*)&a,sizeof(a));
		}
		f6.close();
	}

	else
	if (amount==8)
	{
		clrscr();
		ifstream f7("q2500000.dat",ios::binary);
		if(!f7)
		{
			cout<<"Error in opening File\n Exiting program";
			getch();
			exit(0);
		}
		questionbank a;
		r=1;
		f7.read((char*)&a,sizeof(a));
		while(f7)
		{
			clrscr();
			cout<<"Ques "<<r<<". "<<a.question<<"\n1. "<<a.opt1<<"\n2. "<<a.opt2<<"\n3. "<<a.opt3<<"\n4. "<<a.opt4<<"\n\nCorrect Answer is: "<<a.correct;
			getch();
			r++;
			f7.read((char*)&a,sizeof(a));
		}
		f7.close();
	}

	else
	if (amount==9)
	{
		clrscr();
		ifstream f8("q5000000.dat",ios::binary);
		if(!f8)
		{
			cout<<"Error in opening File\n Exiting program";
			getch();
			exit(0);
		}
		questionbank a;
		r=1;
		f8.read((char*)&a,sizeof(a));
		while(f8)
		{
			clrscr();
			cout<<"Ques "<<r<<". "<<a.question<<"\n1. "<<a.opt1<<"\n2. "<<a.opt2<<"\n3. "<<a.opt3<<"\n4. "<<a.opt4<<"\n\nCorrect Answer is: "<<a.correct;
			getch();
			r++;
			f8.read((char*)&a,sizeof(a));
		}
		f8.close();
	}

	else
	if (amount==10)
	{
		clrscr();
		ifstream f9("q1cr.dat",ios::binary);
		if(!f9)
		{
			cout<<"Error in opening File\n Exiting program";
			getch();
			exit(0);
		}
		questionbank a;
		r=1;
		f9.read((char*)&a,sizeof(a));
		while(f9)
		{
			clrscr();
			cout<<"Ques "<<r<<". "<<a.question<<"\n1. "<<a.opt1<<"\n2. "<<a.opt2<<"\n3. "<<a.opt3<<"\n4. "<<a.opt4<<"\n\nCorrect Answer is: "<<a.correct;
			getch();
			r++;
			f9.read((char*)&a,sizeof(a));
		}
		f9.close();
	}

	else
	if (amount==11)
	{
		clrscr();
		ifstream f10("q7cr.dat",ios::binary);
		if(!f10)
		{
			cout<<"Error in opening File\n Exiting program";
			getch();
			exit(0);
		}
		questionbank a;
		r=1;
		f10.read((char*)&a,sizeof(a));
		while(f10)
		{
			clrscr();
			cout<<"Ques "<<r<<". "<<a.question<<"\n1. "<<a.opt1<<"\n2. "<<a.opt2<<"\n3. "<<a.opt3<<"\n4. "<<a.opt4<<"\n\nCorrect Answer is: "<<a.correct;
			getch();
			r++;
			f10.read((char*)&a,sizeof(a));
		}
		f10.close();
	}
}

void gamestart()
{
	{
		clrscr();
		ifstream f("qqualify.dat",ios::binary|ios::ate);
		questionbank a;
		int ans;
		int no=f.tellg()/sizeof(a);		      //602 is size of questionbank class. no. of questions in file q5000
		randomize();
		f.seekg(sizeof(a)*random(no),ios::beg);
		f.read((char*)&a,sizeof(a));
		cout<<"				      Qualifying Question\n\n";
		cout<<"You can't use any lifeline for qualifying question\n";
		cout<<a.question<<"\n";
		cout<<"1. "<<a.opt1<<"\n";
		cout<<"2. "<<a.opt2<<"\n";
		cout<<"3. "<<a.opt3<<"\n";
		cout<<"4. "<<a.opt4<<"\n";
		cout<<"Enter Your Answer In format given here (Example 1234): ";
		cin>>ans;
		if(a.correct==ans)                                   //answer is correct
		{
			cout<<"This is the correct sequence. You are qualified for the Game.";
			getch();
		}
		else
		if(a.correct!=ans)                     //Answer Is Wrong
		{
			cout<<"This is incorrect suquence. Sorry, You are not qualified for the game\nThe Correct sequence is: "<<a.correct<<"\nExiting Program\nThank You";
			getch();
			exit(0);
		}
		f.close();
	}

	int expert=0,doub=0;


	{
		clrscr();
		ifstream f("q5000.dat",ios::binary|ios::ate);
		questionbank a;
		int ans;
		int no=f.tellg()/sizeof(a);		      //602 is size of questionbank class. no. of questions in file q5000
		randomize();
		f.seekg(sizeof(a)*random(no),ios::beg);
		f.read((char*)&a,sizeof(a));
		a2:
		cout<<"				     Rs. 5,000 Question\n\n";
		cout<<"Press '6' for lifeline\n";
		cout<<a.question<<"\n";
		cout<<"1. "<<a.opt1<<"\n";
		cout<<"2. "<<a.opt2<<"\n";
		cout<<"3. "<<a.opt3<<"\n";
		cout<<"4. "<<a.opt4<<"\n";
		cout<<"Enter Your Answer (1,2,3,4,6): ";
		cin>>ans;
		if(a.correct==ans)                                   //answer is correct
		{
			cout<<"Congratulation! You won Rs. 5000\nEnter Any no. to get your next question: ";
			getch();
		}
		else
		if(ans==6)                                         //LifeLine Is Taken
		{
			int x,y;
			if(expert==0&&doub==0)
			{
				cout<<"Available Lifelines: \n1. Expert Advice\n2. Double Tip\nEnter Your Choice: ";
				cin>>x;
				if(x==1)                                          //Expert Advice is taken
				{
				expert=1;
				cout<<"Expert Suggest you to go with option: "<<a.correct<<" (He is 99% Sure)";
				cout<<"\nEnter Your Answer (1,2,3,4): ";
				cin>>y;
				if(a.correct==y)                                   //answer is correct
				{
				cout<<"Congratulation! You won Rs. 5000\nEnter Any no. to get your next question: ";
				getch();
				}
				else
				if(a.correct!=y)                     //Answer Is Wrong
				{
				cout<<"Sorry, You Lost The Game\nThe Correct Answer Is: "<<a.correct<<"\nYou Won Rs.0\nExiting Program\nThank You";
				getch();
				exit(0);
				}
				}
				if(x==2)                                           //Double tip is chosen
				{
					doub=1;
					cout<<"Enter Your First Answer (1,2,3,4): ";
					cin>>y;
					if(a.correct==y)                                   //answer is correct
					{
					cout<<"Congratulation! You won Rs. 5000\nEnter Any no. to get your next question: ";
					getch();
					}
					else
					{
						cout<<"\nYour Answer Is Incorrect\nEnter Your Second Answer (1,2,3,4): ";
						cin>>y;
						if(a.correct==y)                                   //answer is correct
						{
							cout<<"Congratulation! You won Rs. 5000\nEnter Any no. to get your next question: ";
							getch();
						}
						else
						if(a.correct!=y)                     //Answer Is Wrong
						{
							cout<<"Sorry, You Lost The Game\nThe Correct Answer Is: "<<a.correct<<"\nYou Won Rs.0\nExiting Program\nThank You";
							getch();
							exit(0);
						}
					}
				}
			}
			else
			if(expert==0&&doub==1)
			{
				cout<<"Available Lifelines: \n1. Expert Advice\nChoosing Expert Advice ";					//Expert Advice is taken
				expert=1;
				cout<<"Expert Suggest you to go with option: "<<a.correct<<" (He is 99% Sure)";
				cout<<"\nEnter Your Answer (1,2,3,4): ";
				cin>>y;
				if(a.correct==y)                                   //answer is correct
				{
					cout<<"Congratulation! You won Rs. 5000\nEnter Any no. to get your next question: ";
					getch();
				}
			}
			else
			if(expert==1&&doub==0)
			{
				cout<<"Available Lifelines: \n1. Double Tip\nChoosing Double Tip ";					//Expert Advice is taken
				doub=1;
				cout<<"Enter Your First Answer (1,2,3,4): ";
				cin>>y;
				if(a.correct==y)                                   //answer is correct
				{
					cout<<"Congratulation! You won Rs. 5000\nEnter Any no. to get your next question: ";
					getch();
				}
				else
				{
					cout<<"\nYour Answer Is Incorrect\nEnter Your Second Answer (1,2,3,4): ";
					cin>>y;
					if(a.correct==y)                                   //answer is correct
					{
					cout<<"Congratulation! You won Rs. 5000\nEnter Any no. to get your next question: ";
					getch();
					}
					else
					if(a.correct!=y)                     //Answer Is Wrong
					{
						cout<<"Sorry, You Lost The Game\nThe Correct Answer Is: "<<a.correct<<"\nYou Won Rs.0\nExiting Program\nThank You";
						getch();
						exit(0);
					}
				}
			}
			else
			{
				cout<<"Sorry, No LifeLine Available Reverting Back To The Question";
				getch();
				clrscr();
				goto a2;
			}
		}
		else
		if(a.correct!=ans)                     //Answer Is Wrong
		{
			cout<<"Sorry, You Lost The Game\nThe Correct Answer Is: "<<a.correct<<"\nYou Won Rs.0\nExiting Program\nThank You";
			getch();
			exit(0);
		}
		f.close();
	}            //q5000 end


	{
		clrscr();
		ifstream f("q20000.dat",ios::binary|ios::ate);
		questionbank a;
		int ans;
		int no=f.tellg()/sizeof(a);		      //602 is size of questionbank class. no. of questions in file q5000
		randomize();
		f.seekg(sizeof(a)*random(no),ios::beg);
		f.read((char*)&a,sizeof(a));
		a3:
		cout<<"			       Rs. 20,000 Question\n\n";
		cout<<"Press '5' for quit\nPress '6' for lifeline\n";
		cout<<a.question<<"\n";
		cout<<"1. "<<a.opt1<<"\n";
		cout<<"2. "<<a.opt2<<"\n";
		cout<<"3. "<<a.opt3<<"\n";
		cout<<"4. "<<a.opt4<<"\n";
		cout<<"Enter Your Answer (1,2,3,4,5,6): ";
		cin>>ans;
		if(a.correct==ans)                                   //answer is correct
		{
			cout<<"Amazing! You cleared First level. Now, You would definitely take Rs. 20,000 with you\n";
			cout<<"Congratulation! You won Rs. 20000\nEnter Any no. to get your next question: ";
			getch();
		}
		else
		if(ans==6)                                         //LifeLine Is Taken
		{
			int x,y;
			if(expert==0&&doub==0)
			{
				cout<<"Available Lifelines: \n1. Expert Advice\n2. Double Tip\nEnter Your Choice: ";
				cin>>x;
				if(x==1)                                          //Expert Advice is taken
				{
					expert=1;
					cout<<"Expert Suggest you to go with option: "<<a.correct<<" (He is 95% Sure)";
					cout<<"\nEnter Your Answer (1,2,3,4): ";
					cin>>y;
					if(a.correct==y)                                   //answer is correct
					{
						cout<<"Amazing! You cleared First level. Now, You would definitely take Rs. 20,000 with you\n";
						cout<<"Congratulation! You won Rs. 20000\nEnter Any no. to get your next question: ";
						getch();
					}
					else
					if(a.correct!=y)                     //Answer Is Wrong
					{
						cout<<"Sorry, You Lost The Game\nThe Correct Answer Is: "<<a.correct<<"\nYou Won Rs.0\nExiting Program\nThank You";
						getch();
						exit(0);
					}
				}
				if(x==2)                                           //Double tip is chosen
				{
					doub=1;
					cout<<"Enter Your First Answer (1,2,3,4): ";
					cin>>y;
					if(a.correct==y)                                   //answer is correct
					{
					cout<<"Amazing! You cleared First level. Now, You would definitely take Rs. 20,000 with you\n";
					cout<<"Congratulation! You won Rs. 20000\nEnter Any no. to get your next question: ";
					getch();
					}
					else
					{
						cout<<"\nYour Answer Is Incorrect\nEnter Your Second Answer (1,2,3,4): ";
						cin>>y;
						if(a.correct==y)                                   //answer is correct
						{
							cout<<"Amazing! You cleared First level. Now, You would definitely take Rs. 20,000 with you\n";
							cout<<"Congratulation! You won Rs. 20000\nEnter Any no. to get your next question: ";
							getch();
						}
						else
						if(a.correct!=y)                     //Answer Is Wrong
						{
							cout<<"Sorry, You Lost The Game\nThe Correct Answer Is: "<<a.correct<<"\nYou Won Rs. 0\nExiting Program\nThank You";
							getch();
							exit(0);
						}
					}
				}
			}
			else
			if(expert==0&&doub==1)
			{
				cout<<"Available Lifelines: \n1. Expert Advice\nChoosing Expert Advice ";					//Expert Advice is taken
				expert=1;
				cout<<"Expert Suggest you to go with option: "<<a.correct<<" (He is 95% Sure)";
				cout<<"\nEnter Your Answer (1,2,3,4): ";
				cin>>y;
				if(a.correct==y)                                   //answer is correct
				{
					cout<<"Amazing! You cleared First level. Now, You would definitely take Rs. 20,000 with you\n";
					cout<<"Congratulation! You won Rs. 20000\nEnter Any no. to get your next question: ";
					getch();
				}
			}
			else
			if(expert==1&&doub==0)
			{
				cout<<"Available Lifelines: \n1. Double Tip\nChoosing Double Tip ";					//Expert Advice is taken
				doub=1;
				cout<<"Enter Your First Answer (1,2,3,4): ";
				cin>>y;
				if(a.correct==y)                                   //answer is correct
				{
					cout<<"Amazing! You cleared First level. Now, You would definitely take Rs. 20,000 with you\n";
					cout<<"Congratulation! You won Rs. 20000\nEnter Any no. to get your next question: ";
					getch();
				}
				else
				{
					cout<<"\nYour Answer Is Incorrect\nEnter Your Second Answer (1,2,3,4): ";
					cin>>y;
					if(a.correct==y)                                   //answer is correct
					{
						cout<<"Amazing! You cleared First level. Now, You would definitely take Rs. 20,000 with you\n";
						cout<<"Congratulation! You won Rs. 20000\nEnter Any no. to get your next question: ";
						getch();
					}
					else
					if(a.correct!=y)                     //Answer Is Wrong
					{
						cout<<"Sorry, You Lost The Game\nThe Correct Answer Is: "<<a.correct<<"\nYou Won Rs. 0\nExiting Program\nThank You";
						getch();
						exit(0);
					}
				}
			}
			else
			{
				cout<<"Sorry, No LifeLine Available Reverting Back To Question";
				getch();
				clrscr();
				goto a3;
			}
		}
		else
		if(ans==5)
		{
			cout<<"We Respect your decision of quitting\nYou are taking Rs. 5000 with you\nThank You For Playing\nThe Correct Option Is: "<<a.correct;
			getch();
			exit(0);
		}
		else
		if(a.correct!=ans)                     //Answer Is Wrong
		{
			cout<<"Sorry, You Lost The Game\nThe Correct Answer Is: "<<a.correct<<"\nYou Won Rs. 0\nExiting Program\nThank You";
			getch();
			exit(0);
		}
		f.close();
	}                              //q20000 end



	{
		clrscr();
		ifstream f("q80000.dat",ios::binary|ios::ate);
		questionbank a;
		int ans;
		int no=f.tellg()/sizeof(a);		      //602 is size of questionbank class. no. of questions in file q5000
		randomize();
		f.seekg(sizeof(a)*random(no),ios::beg);
		f.read((char*)&a,sizeof(a));
		a4:
		cout<<"			      Rs. 80,000 Question\n\n";
		cout<<"Press '5' for quitting\nPress '6' for lifeline\n";
		cout<<a.question<<"\n";
		cout<<"1. "<<a.opt1<<"\n";
		cout<<"2. "<<a.opt2<<"\n";
		cout<<"3. "<<a.opt3<<"\n";
		cout<<"4. "<<a.opt4<<"\n";
		cout<<"Enter Your Answer (1,2,3,4,5,6): ";
		cin>>ans;
		if(a.correct==ans)                                   //answer is correct
		{
		cout<<"Congratulation! You won Rs. 80000\nEnter Any no. to get your next question: ";
		getch();
		}
		else
		if(ans==6)                                         //LifeLine Is Taken
		{
			int x,y;
			if(expert==0&&doub==0)
			{
				cout<<"Available Lifelines: \n1. Expert Advice\n2. Double Tip\nEnter Your Choice: ";
				cin>>x;
				if(x==1)                                          //Expert Advice is taken
				{
					expert=1;
					cout<<"Expert Suggest you to go with option: "<<a.correct<<" (He is 90% Sure)";
					cout<<"\nEnter Your Answer (1,2,3,4): ";
					cin>>y;
					if(a.correct==y)                                   //answer is correct
					{
						cout<<"Congratulation! You won Rs. 80000\nEnter Any no. to get your next question: ";
						getch();
					}
					else
					if(a.correct!=y)                     //Answer Is Wrong
					{
						cout<<"Sorry, You Lost The Game\nThe Correct Answer Is: "<<a.correct<<"\nYou Won Rs. 20,000\nExiting Program\nThank You";
						getch();
						exit(0);
					}
				}
				if(x==2)                                           //Double tip is chosen
				{
					doub=1;
					cout<<"Enter Your First Answer (1,2,3,4): ";
					cin>>y;
					if(a.correct==y)                                   //answer is correct
					{
						cout<<"Congratulation! You won Rs. 80000\nEnter Any no. to get your next question: ";
						getch();
					}
					else
					{
						cout<<"\nYour Answer Is Incorrect\nEnter Your Second Answer (1,2,3,4): ";
						cin>>y;
						if(a.correct==y)                                   //answer is correct
						{
							cout<<"Congratulation! You won Rs. 80000\nEnter Any no. to get your next question: ";
							getch();
						}
						else
						if(a.correct!=y)                     //Answer Is Wrong
						{
							cout<<"Sorry, You Lost The Game\nThe Correct Answer Is: "<<a.correct<<"\nYou Won Rs. 20,000\nExiting Program\nThank You";
							getch();
							exit(0);
						}
					}
				}
			}
			else
			if(expert==0&&doub==1)
			{
				cout<<"Available Lifelines: \n1. Expert Advice\nChoosing Expert Advice ";					//Expert Advice is taken
				expert=1;
				cout<<"Expert Suggest you to go with option: "<<a.correct<<" (He is 99% Sure)";
				cout<<"\nEnter Your Answer (1,2,3,4): ";
				cin>>y;
				if(a.correct==y)                                   //answer is correct
				{
					cout<<"Congratulation! You won Rs. 80000\nEnter Any no. to get your next question: ";
					getch();
				}
			}
			else
			if(expert==1&&doub==0)
			{
				cout<<"Available Lifelines: \n1. Double Tip\nChoosing Double Tip ";					//Expert Advice is taken
				doub=1;
				cout<<"Enter Your First Answer (1,2,3,4): ";
				cin>>y;
				if(a.correct==y)                                   //answer is correct
				{
					cout<<"Congratulation! You won Rs. 80000\nEnter Any no. to get your next question: ";
					getch();
				}
				else
				{
					cout<<"\nYour Answer Is Incorrect\nEnter Your Second Answer (1,2,3,4): ";
					cin>>y;
					if(a.correct==y)                                   //answer is correct
					{
						cout<<"Congratulation! You won Rs. 80000\nEnter Any no. to get your next question: ";
						getch();
					}
					else
					if(a.correct!=y)                     //Answer Is Wrong
					{
						cout<<"Sorry, You Lost The Game\nThe Correct Answer Is: "<<a.correct<<"\nYou Won Rs. 20,000\nExiting Program\nThank You";
						getch();
						exit(0);
					}
				}
			}
			else
			{
				cout<<"Sorry, No LifeLine Available Reverting Back To Question";
				getch();
				clrscr();
				goto a4;
			}
		}
		else
		if(ans==5)
		{
			cout<<"We Respect your decision of quitting\nYou are taking Rs. 20000 with you\nThank You For Playing\nThe Correct Option Is: "<<a.correct;
			getch();
			exit(0);
		}
		else
		if(a.correct!=ans)                     //Answer Is Wrong
		{
			cout<<"Sorry, You Lost The Game\nThe Correct Answer Is: "<<a.correct<<"\nYou Won Rs. 20,000\nExiting Program\nThank You";
			getch();
			exit(0);
		}
		f.close();
	}                              //q80000 end




	{
		clrscr();
		ifstream f("q320000.dat",ios::binary|ios::ate);
		questionbank a;
		int ans;
		int no=f.tellg()/sizeof(a);		      //602 is size of questionbank class. no. of questions in file q5000
		randomize();
		f.seekg(sizeof(a)*random(no),ios::beg);
		f.read((char*)&a,sizeof(a));
		a5:
		cout<<"			       Rs. 3,20,000 Question\n\n";
		cout<<"Press '5' for quitting\nPress '6' for lifeline\n";
		cout<<a.question<<"\n";
		cout<<"1. "<<a.opt1<<"\n";
		cout<<"2. "<<a.opt2<<"\n";
		cout<<"3. "<<a.opt3<<"\n";
		cout<<"4. "<<a.opt4<<"\n";
		cout<<"Enter Your Answer (1,2,3,4,6): ";
		cin>>ans;
		if(a.correct==ans)                                   //answer is correct
		{
			cout<<"Congratulation! You won Rs. 320000\nEnter Any no. to get your next question: ";
			getch();
		}
		else
		if(ans==6)                                         //LifeLine Is Taken
		{
			int x,y;
			if(expert==0&&doub==0)
			{
				cout<<"Available Lifelines: \n1. Expert Advice\n2. Double Tip\nEnter Your Choice: ";
				cin>>x;
				if(x==1)                                          //Expert Advice is taken
				{
					expert=1;
					cout<<"Expert Suggest you to go with option: "<<a.correct<<" (He is 99% Sure)";
					cout<<"\nEnter Your Answer (1,2,3,4): ";
					cin>>y;
					if(a.correct==y)                                   //answer is correct
					{
						cout<<"Congratulation! You won Rs. 320000\nEnter Any no. to get your next question: ";
						getch();
					}
					else
					if(a.correct!=y)                     //Answer Is Wrong
					{
						cout<<"Sorry, You Lost The Game\nThe Correct Answer Is: "<<a.correct<<"\nYou Won Rs. 20,000\nExiting Program\nThank You";
						getch();
						exit(0);
					}
				}
				if(x==2)                                           //Double tip is chosen
				{
					doub=1;
					cout<<"Enter Your First Answer (1,2,3,4): ";
					cin>>y;
					if(a.correct==y)                                   //answer is correct
					{
						cout<<"Congratulation! You won Rs. 320000\nEnter Any no. to get your next question: ";
						getch();
					}
					else
					{
						cout<<"\nYour Answer Is Incorrect\nEnter Your Second Answer (1,2,3,4): ";
						cin>>y;
						if(a.correct==y)                                   //answer is correct
						{
							cout<<"Congratulation! You won Rs. 320000\nEnter Any no. to get your next question: ";
							getch();
						}
						else
						if(a.correct!=y)                     //Answer Is Wrong
						{
							cout<<"Sorry, You Lost The Game\nThe Correct Answer Is: "<<a.correct<<"\nYou Won Rs. 20,000\nExiting Program\nThank You";
							getch();
							exit(0);
						}
					}
				}
			}
			else
			if(expert==0&&doub==1)
			{
				cout<<"Available Lifelines: \n1. Expert Advice\nChoosing Expert Advice ";					//Expert Advice is taken
				expert=1;
				cout<<"Expert Suggest you to go with option: "<<a.correct<<" (He is 94% Sure)";
				cout<<"\nEnter Your Answer (1,2,3,4): ";
				cin>>y;
				if(a.correct==y)                                   //answer is correct
				{
					cout<<"Congratulation! You won Rs. 320000\nEnter Any no. to get your next question: ";
					getch();
				}
			}
			else
			if(expert==1&&doub==0)
			{
				cout<<"Available Lifelines: \n1. Double Tip\nChoosing Double Tip ";					//Expert Advice is taken
				doub=1;
				cout<<"Enter Your First Answer (1,2,3,4): ";
				cin>>y;
				if(a.correct==y)                                   //answer is correct
				{
					cout<<"Congratulation! You won Rs. 320000\nEnter Any no. to get your next question: ";
					getch();
				}
				else
				{
					cout<<"\nYour Answer Is Incorrect\nEnter Your Second Answer (1,2,3,4): ";
					cin>>y;
					if(a.correct==y)                                   //answer is correct
					{
						cout<<"Congratulation! You won Rs. 320000\nEnter Any no. to get your next question: ";
						getch();
					}
					else
					if(a.correct!=y)                     //Answer Is Wrong
					{
						cout<<"Sorry, You Lost The Game\nThe Correct Answer Is: "<<a.correct<<"\nYou Won Rs. 20,000\nExiting Program\nThank You";
						getch();
						exit(0);
					}
				}
			}
			else
			{
				cout<<"Sorry, No LifeLine Available Reverting Back To the Question";
				getch();
				clrscr();
				goto a5;
			}
		}
		else
		if(ans==5)
		{
			cout<<"We Respect your decision of quitting\nYou are taking Rs. 80000 with you\nThank You For Playing\nThe Correct Option Is: "<<a.correct;
			getch();
			exit(0);
		}
		else
		if(a.correct!=ans)                     //Answer Is Wrong
		{
			cout<<"Sorry, You Lost The Game\nThe Correct Answer Is: "<<a.correct<<"\nYou Won Rs.0\nExiting Program\nThank You";
			getch();
			exit(0);
		}
		f.close();
	}




	{
		clrscr();
		ifstream f("q640000.dat",ios::binary|ios::ate);
		questionbank a;
		int no=f.tellg()/sizeof(a);		      //602 is size of questionbank class. no. of questions in file q5000
		randomize();
		f.seekg(sizeof(a)*random(no),ios::beg);
		f.read((char*)&a,sizeof(a));
		int ans;
		a6:
		cout<<"			     Rs. 6,40,000 Question\n\n\n\n\n";
		cout<<"Press '5' for quitting\nPress '6' for lifeline\n";
		cout<<a.question<<"\n";
		cout<<"1. "<<a.opt1<<"\n";
		cout<<"2. "<<a.opt2<<"\n";
		cout<<"3. "<<a.opt3<<"\n";
		cout<<"4. "<<a.opt4<<"\n";
		cout<<"Enter Your Answer (1,2,3,4,6): ";
		cin>>ans;
		if(a.correct==ans)                                   //answer is correct
		{
			cout<<"Congratulation! You won Rs. 640000\nEnter Any no. to get your next question: ";
			getch();
		}
		else
		if(ans==6)                                         //LifeLine Is Taken
		{
			int x,y;
			if(expert==0&&doub==0)
			{
				cout<<"Available Lifelines: \n1. Expert Advice\n2. Double Tip\nEnter Your Choice: ";
				cin>>x;
				if(x==1)                                          //Expert Advice is taken
				{
					expert=1;
					cout<<"Expert Suggest you to go with option: "<<a.correct<<" (He is 92% Sure)";
					cout<<"\nEnter Your Answer (1,2,3,4): ";
					cin>>y;
					if(a.correct==y)                                   //answer is correct
					{
						cout<<"Congratulation! You won Rs. 640000\nEnter Any no. to get your next question: ";
						getch();
					}
					else
					if(a.correct!=y)                     //Answer Is Wrong
					{
						cout<<"Sorry, You Lost The Game\nThe Correct Answer Is: "<<a.correct<<"\nYou Won Rs. 20,000\nExiting Program\nThank You";
						getch();
						exit(0);
					}
				}
				if(x==2)                                           //Double tip is chosen
				{
					doub=1;
					cout<<"Enter Your First Answer (1,2,3,4): ";
					cin>>y;
					if(a.correct==y)                                   //answer is correct
					{
						cout<<"Congratulation! You won Rs. 640000\nEnter Any no. to get your next question: ";
						getch();
					}
					else
					{
						cout<<"\nYour Answer Is Incorrect\nEnter Your Second Answer (1,2,3,4): ";
						cin>>y;
						if(a.correct==y)                                   //answer is correct
						{
							cout<<"Congratulation! You won Rs. 640000\nEnter Any no. to get your next question: ";
							getch();
						}
						else
						if(a.correct!=y)                     //Answer Is Wrong
						{
							cout<<"Sorry, You Lost The Game\nThe Correct Answer Is: "<<a.correct<<"\nYou Won Rs. 20,000\nExiting Program\nThank You";
							getch();
							exit(0);
						}
					}
				}
			}
			else
			if(expert==0&&doub==1)
			{
				cout<<"Available Lifelines: \n1. Expert Advice\nChoosing Expert Advice ";					//Expert Advice is taken
				expert=1;
				cout<<"Expert Suggest you to go with option: "<<a.correct<<" (He is 90% Sure)";
				cout<<"\nEnter Your Answer (1,2,3,4): ";
				cin>>y;
				if(a.correct==y)                                   //answer is correct
				{
					cout<<"Congratulation! You won Rs. 640000\nEnter Any no. to get your next question: ";
					getch();
				}
			}
			else
			if(expert==1&&doub==0)
			{
				cout<<"Available Lifelines: \n1. Double Tip\nChoosing Double Tip ";					//Expert Advice is taken
				doub=1;
				cout<<"Enter Your First Answer (1,2,3,4): ";
				cin>>y;
				if(a.correct==y)                                   //answer is correct
				{
					cout<<"Congratulation! You won Rs. 640000\nEnter Any no. to get your next question: ";
					getch();
				}
				else
				{
					cout<<"\nYour Answer Is Incorrect\nEnter Your Second Answer (1,2,3,4): ";
					cin>>y;
					if(a.correct==y)                                   //answer is correct
					{
						cout<<"Congratulation! You won Rs. 640000\nEnter Any no. to get your next question: ";
						getch();
					}
					else
					if(a.correct!=y)                     //Answer Is Wrong
					{
						cout<<"Sorry, You Lost The Game\nThe Correct Answer Is: "<<a.correct<<"\nYou Won Rs. 20,000\nExiting Program\nThank You";
						getch();
						exit(0);
					}
				}
			}
			else
			{
				cout<<"Sorry, No LifeLine Available Reverting Back To The Question";
				getch();
				clrscr();
				goto a6;
			}
		}
		else
		if(ans==5)
		{
			cout<<"We Respect your decision of quitting\nYou are taking Rs. 320000 with you\nThank You For Playing\nThe Correct Option Is: "<<a.correct;
			getch();
			exit(0);
		}
		else
		if(a.correct!=ans)                     //Answer Is Wrong
		{
			cout<<"Sorry, You Lost The Game\nThe Correct Answer Is: "<<a.correct<<"\nYou Won Rs. 20,000\nExiting Program\nThank You";
			getch();
			exit(0);
		}
		f.close();
	}




	{
		clrscr();
		ifstream f("q1250000.dat",ios::binary|ios::ate);
		questionbank a;
		int ans;
		int no=f.tellg()/sizeof(a);		      //602 is size of questionbank class. no. of questions in file q5000
		randomize();
		f.seekg(sizeof(a)*random(no),ios::beg);
		f.read((char*)&a,sizeof(a));
		a7:
		cout<<"			    Rs. 12,50,000 Question\n\n";
		cout<<"Press '5' for quitting\nPress '6' for lifeline\n";
		cout<<a.question<<"\n";
		cout<<"1. "<<a.opt1<<"\n";
		cout<<"2. "<<a.opt2<<"\n";
		cout<<"3. "<<a.opt3<<"\n";
		cout<<"4. "<<a.opt4<<"\n";
		cout<<"Enter Your Answer (1,2,3,4,6): ";
		cin>>ans;
		if(a.correct==ans)                                   //answer is correct
		{
			cout<<"Amazing! You cleared second level. Now, You would definitely take Rs. 12,50,000 with you\n";
			cout<<"Congratulation! You won Rs. 1250000\nEnter Any no. to get your next question: ";
			getch();
		}
		else
		if(ans==6)                                         //LifeLine Is Taken
		{
			int x,y;
			if(expert==0&&doub==0)
			{
				cout<<"Available Lifelines: \n1. Expert Advice\n2. Double Tip\nEnter Your Choice: ";
				cin>>x;
				if(x==1)                                          //Expert Advice is taken
				{
					expert=1;
					cout<<"Expert Suggest you to go with option: "<<a.correct<<" (He is 88% Sure)";
					cout<<"\nEnter Your Answer (1,2,3,4): ";
					cin>>y;
					if(a.correct==y)                                   //answer is correct
					{
						cout<<"Amazing! You cleared second level. Now, You would definitely take Rs. 12,50,000 with you\n";
						cout<<"Congratulation! You won Rs. 1250000\nEnter Any no. to get your next question: ";
						getch();
					}
					else
					if(a.correct!=y)                     //Answer Is Wrong
					{
						cout<<"Sorry, You Lost The Game\nThe Correct Answer Is: "<<a.correct<<"\nYou Won Rs. 20,000\nExiting Program\nThank You";
						getch();
						exit(0);
					}
				}
				if(x==2)                                           //Double tip is chosen
				{
					doub=1;
					cout<<"Enter Your First Answer (1,2,3,4): ";
					cin>>y;
					if(a.correct==y)                                   //answer is correct
					{
						cout<<"Amazing! You cleared second level. Now, You would definitely take Rs. 12,50,000 with you\n";
						cout<<"Congratulation! You won Rs. 1250000\nEnter Any no. to get your next question: ";
						getch();
					}
					else
					{
						cout<<"\nYour Answer Is Incorrect\nEnter Your Second Answer (1,2,3,4): ";
						cin>>y;
						if(a.correct==y)                                   //answer is correct
						{
							cout<<"Amazing! You cleared second level. Now, You would definitely take Rs. 12,50,000 with you\n";
							cout<<"Congratulation! You won Rs. 12,50,000\nEnter Any no. to get your next question: ";
							getch();
						}
						else
						if(a.correct!=y)                     //Answer Is Wrong
						{
							cout<<"Sorry, You Lost The Game\nThe Correct Answer Is: "<<a.correct<<"\nYou Won Rs. 20,000\nExiting Program\nThank You";
							getch();
							exit(0);
						}
					}
				}
			}
			else
			if(expert==0&&doub==1)
			{
				cout<<"Available Lifelines: \n1. Expert Advice\nChoosing Expert Advice ";					//Expert Advice is taken
				expert=1;
				cout<<"Expert Suggest you to go with option: "<<a.correct<<" (He is 80% Sure)";
				cout<<"\nEnter Your Answer (1,2,3,4): ";
				cin>>y;
				if(a.correct==y)                                   //answer is correct
				{
					cout<<"Amazing! You cleared second level. Now, You would definitely take Rs. 12,50,000 with you\n";
					cout<<"Congratulation! You won Rs. 12,50,000\nEnter Any no. to get your next question: ";
					getch();
				}
			}
			else
			if(expert==1&&doub==0)
			{
				cout<<"Available Lifelines: \n1. Double Tip\nChoosing Double Tip ";					//Expert Advice is taken
				doub=1;
				cout<<"Enter Your First Answer (1,2,3,4): ";
				cin>>y;
				if(a.correct==y)                                   //answer is correct
				{
					cout<<"Amazing! You cleared second level. Now, You would definitely take Rs. 12,50,000 with you\n";
					cout<<"Congratulation! You won Rs. 1250000\nEnter Any no. to get your next question: ";
					getch();
				}
				else
				{
					cout<<"\nYour Answer Is Incorrect\nEnter Your Second Answer (1,2,3,4): ";
					cin>>y;
					if(a.correct==y)                                   //answer is correct
					{
						cout<<"Amazing! You cleared second level. Now, You would definitely take Rs. 12,50,000 with you\n";
						cout<<"Congratulation! You won Rs. 1250000\nEnter Any no. to get your next question: ";
						getch();
					}
					else
					if(a.correct!=y)                     //Answer Is Wrong
					{
						cout<<"Sorry, You Lost The Game\nThe Correct Answer Is: "<<a.correct<<"\nYou Won Rs. 20,000\nExiting Program\nThank You";
						getch();
						exit(0);
					}
				}
			}
			else
			{
				cout<<"Sorry, No LifeLine Available Reverting Back To the Question";
				getch();
				clrscr();
				goto a7;
			}
		}
		else
		if(ans==5)
		{
			cout<<"We Respect your decision of quitting\nYou are taking Rs. 640000 with you\nThank You For Playing\nThe Correct Option Is: "<<a.correct;
			getch();
			exit(0);
		}
		else
		if(a.correct!=ans)                     //Answer Is Wrong
		{
			cout<<"Sorry, You Lost The Game\nThe Correct Answer Is: "<<a.correct<<"\nYou Won Rs. 20,000\nExiting Program\nThank You";
			getch();
			exit(0);
		}
		f.close();
	}




	{
	clrscr();
	ifstream f("q2500000.dat",ios::binary|ios::ate);
	questionbank a;
	int ans;
	int no=f.tellg()/sizeof(a);		      //602 is size of questionbank class. no. of questions in file q5000
	randomize();
	f.seekg(sizeof(a)*random(no),ios::beg);
	f.read((char*)&a,sizeof(a));
	a8:
	cout<<"		       Rs. 25,00,000 Question\n\n";
	cout<<"Press '5' for quitting\nPress '6' for lifeline\n";
	cout<<a.question<<"\n";
	cout<<"1. "<<a.opt1<<"\n";
	cout<<"2. "<<a.opt2<<"\n";
	cout<<"3. "<<a.opt3<<"\n";
	cout<<"4. "<<a.opt4<<"\n";
	cout<<"Enter Your Answer (1,2,3,4,6): ";
	cin>>ans;
	if(a.correct==ans)                                   //answer is correct
	{
	cout<<"Congratulation! You won Rs. 2500000\nEnter Any no. to get your next question: ";
	getch();
	}
	else
	if(ans==6)                                         //LifeLine Is Taken
	{
	int x,y;
	if(expert==0&&doub==0)
	{
	cout<<"Available Lifelines: \n1. Expert Advice\n2. Double Tip\nEnter Your Choice: ";
	cin>>x;
	if(x==1)                                          //Expert Advice is taken
	{
	expert=1;
	cout<<"Expert Suggest you to go with option: "<<a.correct<<" (He is 99% Sure)";
	cout<<"\nEnter Your Answer (1,2,3,4): ";
	cin>>y;
	if(a.correct==y)                                   //answer is correct
	{
	cout<<"Congratulation! You won Rs. 2500000\nEnter Any no. to get your next question: ";
	getch();
	}
	else
	if(a.correct!=y)                     //Answer Is Wrong
	{
	cout<<"Sorry, You Lost The Game\nThe Correct Answer Is: "<<a.correct<<"\nYou Won Rs. 12,50,000\nExiting Program\nThank You";
	getch();
	exit(0);
	}
	}
	if(x==2)                                           //Double tip is chosen
	{
	doub=1;
	cout<<"Enter Your First Answer (1,2,3,4): ";
	cin>>y;
	if(a.correct==y)                                   //answer is correct
	{
	cout<<"Congratulation! You won Rs. 2500000\nEnter Any no. to get your next question: ";
	getch();
	}
	else
	{
	cout<<"\nYour Answer Is Incorrect\nEnter Your Second Answer (1,2,3,4): ";
	cin>>y;
	if(a.correct==y)                                   //answer is correct
	{
	cout<<"Congratulation! You won Rs. 2500000\nEnter Any no. to get your next question: ";
	getch();
	}
	else
	if(a.correct!=y)                     //Answer Is Wrong
	{
	cout<<"Sorry, You Lost The Game\nThe Correct Answer Is: "<<a.correct<<"\nYou Won Rs. 12,50,000\nExiting Program\nThank You";
	getch();
	exit(0);
	}
	}
	}
	}
	else
	if(expert==0&&doub==1)
	{
	cout<<"Available Lifelines: \n1. Expert Advice\nChoosing Expert Advice ";					//Expert Advice is taken
	expert=1;
	cout<<"Expert Suggest you to go with option: "<<a.correct<<" (He is 89% Sure)";
	cout<<"\nEnter Your Answer (1,2,3,4): ";
	cin>>y;
	if(a.correct==y)                                   //answer is correct
	{
	cout<<"Congratulation! You won Rs. 2500000\nEnter Any no. to get your next question: ";
	getch();
	}
	}
	else
	if(expert==1&&doub==0)
	{
	cout<<"Available Lifelines: \n1. Double Tip\nChoosing Double Tip ";					//Expert Advice is taken
	doub=1;
	cout<<"Enter Your First Answer (1,2,3,4): ";
	cin>>y;
	if(a.correct==y)                                   //answer is correct
	{
	cout<<"Congratulation! You won Rs. 2500000\nEnter Any no. to get your next question: ";
	getch();
	}
	else
	{
	cout<<"\nYour Answer Is Incorrect\nEnter Your Second Answer (1,2,3,4): ";
	cin>>y;
	if(a.correct==y)                                   //answer is correct
	{
	cout<<"Congratulation! You won Rs. 2500000\nEnter Any no. to get your next question: ";
	getch();
	}
	else
	if(a.correct!=y)                     //Answer Is Wrong
	{
	cout<<"Sorry, You Lost The Game\nThe Correct Answer Is: "<<a.correct<<"\nYou Won Rs. 12,50,000\nExiting Program\nThank You";
	getch();
	exit(0);
	}
	}
	}
	else
	{
	cout<<"Sorry, No LifeLine Available Reverting Back To the Question";
	getch();
	clrscr();
	goto a8;
	}
	}
	else
	if(ans==5)
	{
	cout<<"We Respect your decision of quitting\nYou are taking Rs. 1250000 with you\nThank You For Playing\nThe Correct Option Is: "<<a.correct;
	getch();
	exit(0);
	}
	else
	if(a.correct!=ans)                     //Answer Is Wrong
	{
	cout<<"Sorry, You Lost The Game\nThe Correct Answer Is: "<<a.correct<<"\nYou Won Rs. 12,50,000\nExiting Program\nThank You";
	getch();
	exit(0);
	}
	f.close();
	}




	{
	clrscr();
	ifstream f("q5000000.dat",ios::binary|ios::ate);
	questionbank a;
	int ans;
	int no=f.tellg()/sizeof(a);		      //602 is size of questionbank class. no. of questions in file q5000
	randomize();
	f.seekg(sizeof(a)*random(no),ios::beg);
	f.read((char*)&a,sizeof(a));
	a9:
	cout<<"		    Rs. 50,00,000 Question\n\n";
	cout<<"Press '5' for quitting\nPress '6' for lifeline\n";
	cout<<a.question<<"\n";
	cout<<"1. "<<a.opt1<<"\n";
	cout<<"2. "<<a.opt2<<"\n";
	cout<<"3. "<<a.opt3<<"\n";
	cout<<"4. "<<a.opt4<<"\n";
	cout<<"Enter Your Answer (1,2,3,4,6): ";
	cin>>ans;
	if(a.correct==ans)                                   //answer is correct
	{
	cout<<"Congratulation! You won Rs. 5000000\nEnter Any no. to get your next question: ";
	getch();
	}
	else
	if(ans==6)                                         //LifeLine Is Taken
	{
	int x,y;
	if(expert==0&&doub==0)
	{
	cout<<"Available Lifelines: \n1. Expert Advice\n2. Double Tip\nEnter Your Choice: ";
	cin>>x;
	if(x==1)                                          //Expert Advice is taken
	{
	expert=1;
	cout<<"Expert Suggest you to go with option: "<<a.correct<<" (He is 99% Sure)";
	cout<<"\nEnter Your Answer (1,2,3,4): ";
	cin>>y;
	if(a.correct==y)                                   //answer is correct
	{
	cout<<"Congratulation! You won Rs. 5000000\nEnter Any no. to get your next question: ";
	getch();
	}
	else
	if(a.correct!=y)                     //Answer Is Wrong
	{
	cout<<"Sorry, You Lost The Game\nThe Correct Answer Is: "<<a.correct<<"\nYou Won Rs. 12,50,000\nExiting Program\nThank You";
	getch();
	exit(0);
	}
	}
	if(x==2)                                           //Double tip is chosen
	{
	doub=1;
	cout<<"Enter Your First Answer (1,2,3,4): ";
	cin>>y;
	if(a.correct==y)                                   //answer is correct
	{
	cout<<"Congratulation! You won Rs. 5000000\nEnter Any no. to get your next question: ";
	getch();
	}
	else
	{
	cout<<"\nYour Answer Is Incorrect\nEnter Your Second Answer (1,2,3,4): ";
	cin>>y;
	if(a.correct==y)                                   //answer is correct
	{
	cout<<"Congratulation! You won Rs. 5000000\nEnter Any no. to get your next question: ";
	getch();
	}
	else
	if(a.correct!=y)                     //Answer Is Wrong
	{
	cout<<"Sorry, You Lost The Game\nThe Correct Answer Is: "<<a.correct<<"\nYou Won Rs. 12,50,000\nExiting Program\nThank You";
	getch();
	exit(0);
	}
	}
	}
	}
	else
	if(expert==0&&doub==1)
	{
	cout<<"Available Lifelines: \n1. Expert Advice\nChoosing Expert Advice ";					//Expert Advice is taken
	expert=1;
	cout<<"Expert Suggest you to go with option: "<<a.correct<<" (He is 97% Sure)";
	cout<<"\nEnter Your Answer (1,2,3,4): ";
	cin>>y;
	if(a.correct==y)                                   //answer is correct
	{
	cout<<"Congratulation! You won Rs. 5000000\nEnter Any no. to get your next question: ";
	getch();
	}
	}
	else
	if(expert==1&&doub==0)
	{
	cout<<"Available Lifelines: \n1. Double Tip\nChoosing Double Tip ";					//Expert Advice is taken
	doub=1;
	cout<<"Enter Your First Answer (1,2,3,4): ";
	cin>>y;
	if(a.correct==y)                                   //answer is correct
	{
	cout<<"Congratulation! You won Rs. 5000000\nEnter Any no. to get your next question: ";
	getch();
	}
	else
	{
	cout<<"\nYour Answer Is Incorrect\nEnter Your Second Answer (1,2,3,4): ";
	cin>>y;
	if(a.correct==y)                                   //answer is correct
	{
	cout<<"Congratulation! You won Rs. 5000000\nEnter Any no. to get your next question: ";
	getch();
	}
	else
	if(a.correct!=y)                     //Answer Is Wrong
	{
	cout<<"Sorry, You Lost The Game\nThe Correct Answer Is: "<<a.correct<<"\nYou Won Rs. 12,50,000\nExiting Program\nThank You";
	getch();
	exit(0);
	}
	}
	}
	else
	{
	cout<<"Sorry, No LifeLine Available Reverting Back To The Question";
	getch();
	clrscr();
	goto a9;
	}
	}
	else
	if
	(ans==5)
	{
	cout<<"We Respect your decision of quitting\nYou are taking Rs. 2500000 with you\nThank You For Playing\nThe Correct Option Is: "<<a.correct;
	getch();
	exit(0);
	}
	else
	if(a.correct!=ans)                     //Answer Is Wrong
	{
	cout<<"Sorry, You Lost The Game\nThe Correct Answer Is: "<<a.correct<<"\nYou Won Rs. 12,50,000\nExiting Program\nThank You";
	getch();
	exit(0);
	}
	f.close();
	}




	{
	clrscr();
	ifstream f("q1cr.dat",ios::binary|ios::ate);
	questionbank a;
	int ans;
	int no=f.tellg()/sizeof(a);		      //602 is size of questionbank class. no. of questions in file q5000
	randomize();
	f.seekg(sizeof(a)*random(no),ios::beg);
	f.read((char*)&a,sizeof(a));
	a10:
	cout<<"		       Rs. 1 Crore Question\n\n";
	cout<<"Press '5' for quitting\nPress '6' for lifeline\n";
	cout<<a.question<<"\n";
	cout<<"1. "<<a.opt1<<"\n";
	cout<<"2. "<<a.opt2<<"\n";
	cout<<"3. "<<a.opt3<<"\n";
	cout<<"4. "<<a.opt4<<"\n";
	cout<<"Enter Your Answer (1,2,3,4,6): ";
	cin>>ans;
	if(a.correct==ans)                                   //answer is correct
	{
	cout<<"Congratulation! You won 1 Crore Rupees :)\nEnter Any no. to get your next question: ";
	getch();
	}
	else
	if(ans==6)                                         //LifeLine Is Taken
	{
	int x,y;
	if(expert==0&&doub==0)
	{
	cout<<"Available Lifelines: \n1. Expert Advice\n2. Double Tip\nEnter Your Choice: ";
	cin>>x;
	if(x==1)                                          //Expert Advice is taken
	{
	expert=1;
	cout<<"Expert Suggest you to go with option: "<<a.correct<<" (He is 91% Sure)";
	cout<<"\nEnter Your Answer (1,2,3,4): ";
	cin>>y;
	if(a.correct==y)                                   //answer is correct
	{
	cout<<"Congratulation! You Became a Crorepati :)\nEnter Any no. to get your next question: ";
	getch();
	}
	else
	if(a.correct!=y)                     //Answer Is Wrong
	{
	cout<<"Sorry, You Lost The Game\nThe Correct Answer Is: "<<a.correct<<"\nYou Won Rs. 12,50,000\nExiting Program\nThank You";
	getch();
	exit(0);
	}
	}
	if(x==2)                                           //Double tip is chosen
	{
	doub=1;
	cout<<"Enter Your First Answer (1,2,3,4): ";
	cin>>y;
	if(a.correct==y)                                   //answer is correct
	{
	cout<<"Congratulation! You Became a Crorepati :)\nEnter Any no. to get your next question: ";
	getch();
	}
	else
	{
	cout<<"\nYour Answer Is Incorrect\nEnter Your Second Answer (1,2,3,4): ";
	cin>>y;
	if(a.correct==y)                                   //answer is correct
	{
	cout<<"Congratulation! You Became a Crorepati :)\nEnter Any no. to get your next question: ";
	getch();
	}
	else
	if(a.correct!=y)                     //Answer Is Wrong
	{
	cout<<"Sorry, You Lost The Game\nThe Correct Answer Is: "<<a.correct<<"\nYou Won Rs.12,50,000\nExiting Program\nThank You";
	getch();
	exit(0);
	}
	}
	}
	}
	else
	if(expert==0&&doub==1)
	{
	cout<<"Available Lifelines: \n1. Expert Advice\nChoosing Expert Advice ";					//Expert Advice is taken
	expert=1;
	cout<<"Expert Suggest you to go with option: "<<a.correct<<" (He is 90% Sure)";
	cout<<"\nEnter Your Answer (1,2,3,4): ";
	cin>>y;
	if(a.correct==y)                                   //answer is correct
	{
	cout<<"Congratulation! You Became a Crorepati :)\nEnter Any no. to get your next question: ";
	getch();
	}
	}
	else
	if(expert==1&&doub==0)
	{
	cout<<"Available Lifelines: \n1. Double Tip\nChoosing Double Tip ";					//Expert Advice is taken
	doub=1;
	cout<<"Enter Your First Answer (1,2,3,4): ";
	cin>>y;
	if(a.correct==y)                                   //answer is correct
	{
	cout<<"Congratulation! You Became a Crorepati :)\nEnter Any no. to get your next question: ";
	getch();
	}
	else
	{
	cout<<"\nYour Answer Is Incorrect\nEnter Your Second Answer (1,2,3,4): ";
	cin>>y;
	if(a.correct==y)                                   //answer is correct
	{
	cout<<"Congratulation! You Became a Crorepati :)\nEnter Any no. to get your next question: ";
	getch();
	}
	else
	if(a.correct!=y)                     //Answer Is Wrong
	{
	cout<<"Sorry, You Lost The Game\nThe Correct Answer Is: "<<a.correct<<"\nYou Won Rs. 12,50,000\nExiting Program\nThank You";
	getch();
	exit(0);
	}
	}
	}
	else
	{
	cout<<"Sorry, No LifeLine Available Reverting Back To The Question";
	getch();
	clrscr();
	goto a10;
	}
	}
	else
	if(ans==5)
	{
	cout<<"We Respect your decision of quitting\nYou are taking Rs. 5000000 with you\nThank You For Playing\nThe Correct Option Is: "<<a.correct;
	getch();
	exit(0);
	}
	else
	if(a.correct!=ans)                     //Answer Is Wrong
	{
	cout<<"Sorry, You Lost The Game\nThe Correct Answer Is: "<<a.correct<<"\nYou Won Rs. 12,50,000\nExiting Program\nThank You";
	getch();
	exit(0);
	}
	f.close();
	}




	{
	clrscr();
	ifstream f("q7cr.dat",ios::binary|ios::ate);
	questionbank a;
	int ans;
	int no=f.tellg()/sizeof(a);		      //602 is size of questionbank class. no. of questions in file q5000
	randomize();
	f.seekg(sizeof(a)*random(no),ios::beg);
	f.read((char*)&a,sizeof(a));
	cout<<"		    Rs. 7 Crore Question\n\n";cout<<"Press '5' for quitting\nSorry, You can't use any lifeline in this question\n";
	cout<<a.question<<"\n";
	cout<<"1. "<<a.opt1<<"\n";
	cout<<"2. "<<a.opt2<<"\n";
	cout<<"3. "<<a.opt3<<"\n";
	cout<<"4. "<<a.opt4<<"\n";
	cout<<"Enter Your Answer (1,2,3,4,6): ";
	cin>>ans;
	if(a.correct==ans)                                   //answer is correct
	{
	cout<<"WOW! I can't belive this you are winner. Awesome! You are taking Rs. 7 Crores with you";
	getch();
	}
	else
	if(ans==5)
	{
	cout<<"We Respect your decision of quitting\nYou are taking Rs. 1 Crore with you\nThank You For Playing\nThe Correct Option Is: "<<a.correct;
	getch();
	exit(0);
	}
	else
	if(a.correct!=ans)                     //Answer Is Wrong
	{
	cout<<"Sorry, You Lost The Game\nThe Correct Answer Is: "<<a.correct<<"\nYou Won Rs. 12,50,000\nExiting Program\nThank You";
	getch();
	exit(0);
	}
	f.close();
	}
}


void delete_question();

void main()
{
	clrscr();
	int intro;
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	setbkcolor(BLACK);
	setcolor(YELLOW);
	settextstyle(3,HORIZ_DIR,5);
	outtextxy(100,100,"Kaun Banega Crorepati");
	outtextxy(40,300,"Press any key to continue.....");
	getch();
	clrscr();
	setbkcolor(CYAN);
	setcolor(RED);
	settextstyle(3,HORIZ_DIR,3);
	outtextxy(100,100,"Who Are You ?");
	outtextxy(100,150,"1. Programmer");
	outtextxy(100,200,"2. Player");
	outtextxy(100,300,"Enter Your Choice: ");
	cin>>intro;
	int choice=0;
	switch(intro)
	{
		case 1:choice++;break;
		case 2:break;
		default:clrscr();outtextxy(150,300,"Press any key to continue....");outtextxy(100,100,"Wrong Input Opening file in Player Mode");getch();
	}
	clrscr();
	closegraph();
	if(choice==0)                  //PLAYER
	{
		clrscr();
		initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
		setbkcolor(YELLOW);
		setcolor(RED);
		settextstyle(3,HORIZ_DIR,5);
		outtextxy(200,100,"PLAYER MODE ");
		settextstyle(3,HORIZ_DIR,3);
		outtextxy(150,300,"Press any key to Start Game....");
		getch();
		clrscr();
		closegraph();
		clrscr();
		int swi;
		rules();
		gamestart();
	}                            //end of if
	else                        //PROGRAMMER
	{
		clrscr();
		initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
		setbkcolor(YELLOW);
		setcolor(RED);
		settextstyle(3,HORIZ_DIR,5);
		outtextxy(150,100,"PROGRAMER MODE ");
		settextstyle(3,HORIZ_DIR,3);
		outtextxy(100,300,"Press any key to Access Question Bank....");
		getch();
		clrscr();
		closegraph();
		clrscr();
		initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
		setbkcolor(CYAN);
		setcolor(RED);
		settextstyle(3,HORIZ_DIR,3);
		outtextxy(100,100,"Input Programer Password");
		cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t";
		char password[10];
		cin>>password;
		clrscr();
		closegraph();
		if(strcmp(password,"yashr")==0)
		{
			clrscr();
			initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
			setbkcolor(YELLOW);
			setcolor(RED);
			settextstyle(3,HORIZ_DIR,5);
			outtextxy(150,100,"Welcome Yash ");
			settextstyle(3,HORIZ_DIR,4);
			outtextxy(100,300,"Press any key to continue....");
			getch();
			clrscr();
			int choi;
			outtextxy(100,50,"Choices");
			outtextxy(100,100,"1. Add Question");
			outtextxy(100,150,"2. View Questions");
			outtextxy(100,200,"3. Delete Questions");
			outtextxy(100,300,"Enter Choice to continue....");
			cin>>choi;
			clrscr();
			closegraph();
			switch(choi)
			{
				case 1:addquestion();break;
				case 2:view_question();break;
				case 3:delete_question();break;
				default:clrscr();initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");setbkcolor(CYAN);setcolor(RED);settextstyle(3,HORIZ_DIR,4);outtextxy(150,300,"Press any key to continue....");outtextxy(100,100,"Wrong Input Exiting Program");getch();clrscr();closegraph();exit(0);
			}
		}


		if(strcmp(password,"vibhu")==0)
		{
			clrscr();
			initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
			setbkcolor(YELLOW);
			setcolor(RED);
			settextstyle(3,HORIZ_DIR,5);
			outtextxy(150,100,"Welcome Vibhu ");
			settextstyle(3,HORIZ_DIR,4);
			outtextxy(100,300,"Press any key to continue....");
			getch();
			clrscr();
			int choi;
			outtextxy(100,50,"Choices");
			outtextxy(100,100,"1. Add Question");
			outtextxy(100,150,"2. View Questions");
			outtextxy(100,200,"3. Delete Questions");
			outtextxy(100,300,"Enter Choice to continue....");
			cin>>choi;
			clrscr();
			closegraph();
			switch(choi)
			{
				case 1:addquestion();break;
				case 2:view_question();break;
				case 3:delete_question();break;
				default:clrscr();initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");setbkcolor(CYAN);setcolor(RED);settextstyle(3,HORIZ_DIR,4);outtextxy(150,300,"Press any key to continue....");outtextxy(100,100,"Wrong Input Exiting Program");getch();clrscr();closegraph();exit(0);
			}
		}


		else
		if(strcmp(password,"siddhi")==0)
		{
			clrscr();
			initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
			setbkcolor(YELLOW);
			setcolor(RED);
			settextstyle(3,HORIZ_DIR,5);
			outtextxy(150,100,"Welcome Siddhivinayak ");
			settextstyle(3,HORIZ_DIR,4);
			outtextxy(100,300,"Press any key to continue....");
			getch();
			clrscr();
			int choi;
			outtextxy(100,50,"Choices");
			outtextxy(100,100,"1. Add Question");
			outtextxy(100,150,"2. View Questions");
			outtextxy(100,200,"3. Delete Questions");
			outtextxy(100,300,"Enter Choice to continue....");
			cin>>choi;
			clrscr();
			closegraph();
			switch(choi)
			{
				case 1:addquestion();break;
				case 2:view_question();break;
				case 3:delete_question();break;
				default:clrscr();initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");setbkcolor(CYAN);setcolor(RED);settextstyle(3,HORIZ_DIR,4);outtextxy(150,300,"Press any key to continue....");outtextxy(100,100,"Wrong Input Exiting Program");getch();clrscr();closegraph();exit(0);
			}
		}

		else
		{
			initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
			setbkcolor(RED);
			setcolor(CYAN);
			settextstyle(1,HORIZ_DIR,3);
			outtextxy(100,150,"The Password Is Incorrect Exiting Program");
			settextstyle(1,HORIZ_DIR,4);
			outtextxy(120,300,"Press any key to continue....");
			getch();
			clrscr();
			closegraph();
			exit(0);
		}
	}
	getch();
}


void delete_question()        //function to view all questions in selected file
{
	cout<<"\nList Of Questions:\n 1. Qualifying Question\n 2. 5,000\n 3. 20,000\n 4. 80,000\n 5. 3,20,000\n 6. 6,40,000\n 7. 12,50,000\n 8. 25,00,000\n 9. 50,00,000\n 10. 1 Crore\n 11. 7 Crore\n";
	int amount;
	cout<<"Enter The Question Number to see all questions in that file: ";
	cin>>amount;
	int r;
	char op[40];
	if (amount==1)
	{
		clrscr();
		ofstream k("temp.dat",ios::binary);
		ifstream f("qqualify.dat",ios::binary);
		if(!f||!k)
		{
			cout<<"Error in opening File\n Exiting program";
			getch();
			exit(0);
		}
		questionbank a;
		f.read((char*)&a,sizeof(a));
		r=1;
		cout<<"Enter Option 1 of the question you want to delete: ";
		gets(op);
		while(f)
		{
			clrscr();
			if(strcmp(op,a.opt1)==0)
			{
				cout<<"\n\nDeleting The Given Question\n\n";
				cout<<"Ques "<<r<<". "<<a.question<<"\n1. "<<a.opt1<<"\n2. "<<a.opt2<<"\n3. "<<a.opt3<<"\n4. "<<a.opt4<<"\n\nCorrect Answer is: "<<a.correct;
				getch();
				f.read((char*)&a,sizeof(a));
			}
			else
			{
				k.write((char*)&a,sizeof(a));
				r++;
				f.read((char*)&a,sizeof(a));
			}
		}
		f.close();
		k.close();
		remove("qqualify.dat");
		rename("temp.dat","qqualify.dat");
	}

	else if (amount==2)
	{
		clrscr();
		ofstream k1("temp.dat",ios::binary);
		ifstream f1("q5000.dat",ios::binary);
		if(!f1||!k1)
		{
			cout<<"Error in opening File\n Exiting program";
			getch();
			exit(0);
		}
		questionbank a;
		r=1;
		f1.read((char*)&a,sizeof(a));
		cout<<"Enter Option 1 of the question you want to delete: ";
		gets(op);
		while(f1)
		{
			clrscr();
			if((strcmp(op,a.opt1))==0)
			{
				cout<<"\n\nDeleting The Given Question\n\n";
				cout<<"Ques "<<r<<". "<<a.question<<"\n1. "<<a.opt1<<"\n2. "<<a.opt2<<"\n3. "<<a.opt3<<"\n4. "<<a.opt4<<"\n\nCorrect Answer is: "<<a.correct;
				getch();
				f1.read((char*)&a,sizeof(a));
			}
			else
			{
				k1.write((char*)&a,sizeof(a));
				r++;
				f1.read((char*)&a,sizeof(a));
			}
		}
		f1.close();
		k1.close();
		remove("q5000.dat");
		rename("temp.dat","q5000.dat");
	}

	else if (amount==3)
	{
		clrscr();
		ofstream k2("temp.dat",ios::binary);
		ifstream f2("q20000.dat",ios::binary);
		if(!f2||!k2)
		{
			cout<<"Error in opening File\n Exiting program";
			getch();
			exit(0);
		}
		questionbank a;
		r=1;
		f2.read((char*)&a,sizeof(a));
		cout<<"Enter Option 1 of the question you want to delete: ";
		gets(op);
		while(f2)
		{
			clrscr();
			if((strcmp(op,a.opt1))==0)
			{
				cout<<"\n\nDeleting The Given Question\n\n";
				cout<<"Ques "<<r<<". "<<a.question<<"\n1. "<<a.opt1<<"\n2. "<<a.opt2<<"\n3. "<<a.opt3<<"\n4. "<<a.opt4<<"\n\nCorrect Answer is: "<<a.correct;
				getch();
				f2.read((char*)&a,sizeof(a));
			}
			else
			{
				k2.write((char*)&a,sizeof(a));
				r++;
				f2.read((char*)&a,sizeof(a));
			}
		}
		f2.close();
		k2.close();
		remove("q20000.dat");
		rename("temp.dat","q20000.dat");
	}

	else if (amount==4)
	{
		clrscr();
		ofstream k3("temp.dat",ios::binary);
		ifstream f3("q80000.dat",ios::binary);
		if(!f3||!k3)
		{
			cout<<"Error in opening File\n Exiting program";
			getch();
			exit(0);
		}
		questionbank a;
		r=1;
		f3.read((char*)&a,sizeof(a));
		cout<<"Enter Option 1 of the question you want to delete: ";
		gets(op);
		while(f3)
		{
			clrscr();
			if((strcmp(op,a.opt1))==0)
			{
				cout<<"\n\nDeleting The Given Question\n\n";
				cout<<"Ques "<<r<<". "<<a.question<<"\n1. "<<a.opt1<<"\n2. "<<a.opt2<<"\n3. "<<a.opt3<<"\n4. "<<a.opt4<<"\n\nCorrect Answer is: "<<a.correct;
				getch();
				f3.read((char*)&a,sizeof(a));
			}
			else
			{
				k3.write((char*)&a,sizeof(a));
				r++;
				f3.read((char*)&a,sizeof(a));
			}
		}
		f3.close();
		k3.close();
		remove("q80000.dat");
		rename("temp.dat","q80000.dat");
	}

	else if (amount==5)
	{
		clrscr();
		ofstream k4("temp.dat",ios::binary);
		ifstream f4("q320000.dat",ios::binary);
		if(!f4||!k4)
		{
			cout<<"Error in opening File\n Exiting program";
			getch();
			exit(0);
		}
		questionbank a;
		r=1;
		f4.read((char*)&a,sizeof(a));
		cout<<"Enter Option 1 of the question you want to delete: ";
		gets(op);
		while(f4)
		{
			clrscr();
			if((strcmp(op,a.opt1))==0)
			{
				cout<<"\n\nDeleting The Given Question\n\n";
				cout<<"Ques "<<r<<". "<<a.question<<"\n1. "<<a.opt1<<"\n2. "<<a.opt2<<"\n3. "<<a.opt3<<"\n4. "<<a.opt4<<"\n\nCorrect Answer is: "<<a.correct;
				getch();
				f4.read((char*)&a,sizeof(a));
			}
			else
			{
				k4.write((char*)&a,sizeof(a));
				r++;
				f4.read((char*)&a,sizeof(a));
			}
		}
		f4.close();
		k4.close();
		remove("q320000.dat");
		rename("temp.dat","q320000.dat");
	}

	else
	if (amount==6)
	{
		clrscr();
		ofstream k5("temp.dat",ios::binary);
		ifstream f5("q640000.dat",ios::binary);
		if(!f5||!k5)
		{
			cout<<"Error in opening File\n Exiting program";
			getch();
			exit(0);
		}
		questionbank a;
		r=1;
		f5.read((char*)&a,sizeof(a));
		cout<<"Enter Option 1 of the question you want to delete: ";
		gets(op);
		while(f5)
		{
			clrscr();
			if((strcmp(op,a.opt1))==0)
			{
				cout<<"\n\nDeleting The Given Question\n\n";
				cout<<"Ques "<<r<<". "<<a.question<<"\n1. "<<a.opt1<<"\n2. "<<a.opt2<<"\n3. "<<a.opt3<<"\n4. "<<a.opt4<<"\n\nCorrect Answer is: "<<a.correct;
				getch();
				f5.read((char*)&a,sizeof(a));
			}
			else
			{
				k5.write((char*)&a,sizeof(a));
				r++;
				f5.read((char*)&a,sizeof(a));
			}
		}
		f5.close();
		k5.close();
		remove("q640000.dat");
		rename("temp.dat","q640000.dat");
	}

	else
	if (amount==7)
	{
		clrscr();
		ofstream k6("temp.dat",ios::binary);
		ifstream f6("q1250000.dat",ios::binary);
		if(!f6||!k6)
		{
			cout<<"Error in opening File\n Exiting program";
			getch();
			exit(0);
		}
		questionbank a;
		r=1;
		f6.read((char*)&a,sizeof(a));
		cout<<"Enter Option 1 of the question you want to delete: ";
		gets(op);
		while(f6)
		{
			clrscr();
			if((strcmp(op,a.opt1))==0)
			{
				cout<<"\n\nDeleting The Given Question\n\n";
				cout<<"Ques "<<r<<". "<<a.question<<"\n1. "<<a.opt1<<"\n2. "<<a.opt2<<"\n3. "<<a.opt3<<"\n4. "<<a.opt4<<"\n\nCorrect Answer is: "<<a.correct;
				getch();
				f6.read((char*)&a,sizeof(a));
			}
			else
			{
				k6.write((char*)&a,sizeof(a));
				r++;
				f6.read((char*)&a,sizeof(a));
			}
		}
		f6.close();
		k6.close();
		remove("q1250000.dat");
		rename("temp.dat","q1250000.dat");
	}

	else
	if (amount==8)
	{
		clrscr();
		ofstream k7("temp.dat",ios::binary);
		ifstream f7("q2500000.dat",ios::binary);
		if(!f7||!k7)
		{
			cout<<"Error in opening File\n Exiting program";
			getch();
			exit(0);
		}
		questionbank a;
		r=1;
		f7.read((char*)&a,sizeof(a));
		cout<<"Enter Option 1 of the question you want to delete: ";
		gets(op);
		while(f7)
		{
			clrscr();
			if((strcmp(op,a.opt1))==0)
			{
				cout<<"\n\nDeleting The Given Question\n\n";
				cout<<"Ques "<<r<<". "<<a.question<<"\n1. "<<a.opt1<<"\n2. "<<a.opt2<<"\n3. "<<a.opt3<<"\n4. "<<a.opt4<<"\n\nCorrect Answer is: "<<a.correct;
				getch();
				f7.read((char*)&a,sizeof(a));
			}
			else
			{
				k7.write((char*)&a,sizeof(a));
				r++;
				f7.read((char*)&a,sizeof(a));
			}
		}
		f7.close();
		k7.close();
		remove("q2500000.dat");
		rename("temp.dat","q2500000.dat");
	}

	else
	if (amount==9)
	{
		clrscr();
		ofstream k8("q5000000.dat",ios::binary);
		ifstream f8("q5000000.dat",ios::binary);
		if(!f8||!k8)
		{
			cout<<"Error in opening File\n Exiting program";
			getch();
			exit(0);
		}
		questionbank a;
		r=1;
		f8.read((char*)&a,sizeof(a));
		cout<<"Enter Option 1 of the question you want to delete: ";
		gets(op);
		while(f8)
		{
			clrscr();
			if((strcmp(op,a.opt1))==0)
			{
				cout<<"\n\nDeleting The Given Question\n\n";
				cout<<"Ques "<<r<<". "<<a.question<<"\n1. "<<a.opt1<<"\n2. "<<a.opt2<<"\n3. "<<a.opt3<<"\n4. "<<a.opt4<<"\n\nCorrect Answer is: "<<a.correct;
				getch();
				f8.read((char*)&a,sizeof(a));
			}
			else
			{
				k8.write((char*)&a,sizeof(a));
				r++;
				f8.read((char*)&a,sizeof(a));
			}
		}
		f8.close();
		k8.close();
		remove("q5000000.dat");
		rename("temp.dat","q5000000.dat");
	}

	else
	if (amount==10)
	{
		clrscr();
		ofstream k9("temp.dat",ios::binary);
		ifstream f9("q1cr.dat",ios::binary);
		if(!f9||!k9)
		{
			cout<<"Error in opening File\n Exiting program";
			getch();
			exit(0);
		}
		questionbank a;
		r=1;
		f9.read((char*)&a,sizeof(a));
		cout<<"Enter Option 1 of the question you want to delete: ";
		gets(op);
		while(f9)
		{
			clrscr();
			if((strcmp(op,a.opt1))==0)
			{
				cout<<"\n\nDeleting The Given Question\n\n";
				cout<<"Ques "<<r<<". "<<a.question<<"\n1. "<<a.opt1<<"\n2. "<<a.opt2<<"\n3. "<<a.opt3<<"\n4. "<<a.opt4<<"\n\nCorrect Answer is: "<<a.correct;
				getch();
				f9.read((char*)&a,sizeof(a));
			}
			else
			{
				k9.write((char*)&a,sizeof(a));
				r++;
				f9.read((char*)&a,sizeof(a));
			}
		}
		f9.close();
		k9.close();
		remove("q1cr.dat");
		rename("temp.dat","q1cr.dat");
	}

	else
	if (amount==11)
	{
		clrscr();
		ofstream k10("temp.dat",ios::binary);
		ifstream f10("q7cr.dat",ios::binary);
		if(!f10||!k10)
		{
			cout<<"Error in opening File\n Exiting program";
			getch();
			exit(0);
		}
		questionbank a;
		r=1;
		f10.read((char*)&a,sizeof(a));
		cout<<"Enter Option 1 of the question you want to delete: ";
		gets(op);
		while(f10)
		{
			clrscr();
			if((strcmp(op,a.opt1))==0)
			{
				cout<<"\n\nDeleting The Given Question\n\n";
				cout<<"Ques "<<r<<". "<<a.question<<"\n1. "<<a.opt1<<"\n2. "<<a.opt2<<"\n3. "<<a.opt3<<"\n4. "<<a.opt4<<"\n\nCorrect Answer is: "<<a.correct;
				getch();
				f10.read((char*)&a,sizeof(a));
			}
			else
			{
				k10.write((char*)&a,sizeof(a));
				r++;
				f10.read((char*)&a,sizeof(a));
			}
		}
		f10.close();
		k10.close();
		remove("q7cr.dat");
		rename("temp.dat","q7cr.dat");
	}
}
