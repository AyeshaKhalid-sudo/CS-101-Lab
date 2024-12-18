#include<iostream>
#include<fstream>
#include<conio.h>
#include<cstring>
using namespace std;



void advice(int time){
//function that helps the user emotionally based on the time they have left before their exams
	int Psuedo_time;
	char choice, choice2, choice3;
	
	cout<<"Want more help? (y/n)"<<endl;
	cin>>choice;
	if (choice == 'y'){
	    if ( time== 3){
	 	cout<<"\n\nFor the love of god, PLEASE start earlier next time.\n\nAlevels is no joke.\n";
	   }
	    else if(time==1 || time ==2){
	 	   cout<<"Do you constantly feel stressed about your upcoming exams? (y/n)"<<endl;
	 	   cin>>choice2;
	 	   }  
	 	        if (choice2 == 'y'){
	 		    cout<<"You are likely suffering from burn out. Step away from your books for a while.\nYou'll only make things worse if you keep forcing yourself to be productive.\nEveryone deserves a break once in a while.\n";
	 		    }
	 		    else if (choice2 == 'n'){
	 		    cout<<"Do you feel unmotivated? (y/n)"<<endl;
	 			cin>>choice3;
	 			}
	 			       if(choice3=='y'){
	 				   cout<<"Dont think of studying as something you HAVE to do. Think of it like something you GET to do.\n";
				       }
				      else if (choice3=='n'){
					  cout<<"You have no excuse, get back to studying.";
				     }
		       }
	        
   else {
   	cout<<"You have no excuse. Get back to studying."<<endl;
   }
}

int main(){
	
	
	
	//declaring variables to store the number of subjects
	int Subj_num, time;
	string name;
	//displaying welcome message
	cout<<"\n\n\t\t\t\t\t||-WELCOME TO STUDY WITH ME-||\n";

	cout<<"\n\t\t\t\t\t~an A level Study schedule generator~\n";
	
	cout<<"\n\t\t\t\t\t~the only study buddy you need~\n\n";
	
	//prompting the user to enter their name
	cout<<"\t\t\t\t\tPlease enter your name: \n\n";
	
	cout<<"\t\t\t\t\t";
	getline(cin, name);
	
	fstream Student_info;
	
	Student_info.open("name.txt", ios::in);

	if (Student_info.is_open()){
	string name_file;
	Student_info>>name_file;
	Student_info.close();
	
    
    	if (name_file == name){
    	cout<<"\n\t\t\t\t\tWelcome "<<name_file<<"!"<<endl;
    	}
	
   }
   
   
   Student_info.open("name.txt", ios::out);
   
   if(Student_info.is_open() ){
   	
   	Student_info<<name<<endl;
   	
   	Student_info.close();
   	
   	
   }
   
   
   
   
	//using the get character function for a pause
	cout<<"\n\t\t\t\t\tPress any key to continue";
	getch();
	
	//opening a new output window
	system ("cls");
	
	//endl used to make the output window more readable
	cout<<endl<<endl;
	
	//using do while loop for user authentification
	do
	{  
	    if(Subj_num>3){
	    //displaying error message 
	    cout<<"Sorry our program isn't built to handle more than 3 Alevels and neither should you!"<<endl;
	    
	    //getting input from the user again
	    cout<<"Press any key to enter the number of Alevels again"<<endl<<endl;
	    getch();
	    }
	    
	//prompting the user to enter the number of subjects they'll be appearing in
	cout<<"Enter the number of subjects you'll be appearing in this year:\n";
	cin>>Subj_num;
	cout<<endl;
   }
        while (Subj_num > 3);
	
   	
	//declaring array to store subjects
	string Subjects [Subj_num];
	
	
	//prompting the user to enter their subjects
	cout<<"Enter your subjects (from weakest to strongest): \n";
	
	//storing user's subjects in array
	for(int i=0; i<Subj_num; i++){
	
		cin>>*(Subjects+i);
		}

	for(int i=0; i<Subj_num; i++){
	//storing user's subjects in file
		Student_info<<Subjects[i];
		Student_info<<"\n";
		}
	
	cout<<"Press any key to continue";
	getch();
	system ("cls");
	
	cout<<endl;
	
	//asking the user to input the amount of time they have left to generate a schedule
	cout<<"How much time do you have left before your exams?"<<endl;
	cout<<"1. 1 month"<<endl;
	cout<<"2. More than 6 months"<<endl;
	cout<<"3. 1 Day"<<endl;
    cout<<"Chose an option (1-3)"<<endl;
    cin>>time;
    
    cout<<"\nPress any key to continue\n";
    getch();
    system ("cls");
    
    //time table for 1 month
    if(time == 1 ){
    	cout<<"\t\t\t\t\t||--TIME TABLE--||"<<endl;
    	
    	string arr1 [4][2] ={"WEEK 1", Subjects [0], "WEEK 2", Subjects [0], "WEEK 3", Subjects [1], "WEEK 4", Subjects [2]};
        
		for (int i=0; i<4; i++){
			for (int j=0; j<2; j++){
				cout<<arr1[i][j]<<" ";
			}
		cout<<endl;
		}
		
		cout<<endl;
		cout<<"WEEK 1 : Study the material, starting with the topic you find most challenging"<<endl<<endl;
		cout<<"WEEK 2 : Practice past year papers, noting down the questions that come up more frequently"<<endl<<endl;
		cout<<"WEEK 3 : Alternate between studying the material and practicing past year papers throughout the week"<<endl<<endl;
		cout<<"WEEK 4 : Alternate between studying the material and practicing past year papers throughout the week"<<endl<<endl;
	
	
		//help for weekest subject
		if (Subjects[0] == "Physics" || Subjects[0] == "physics"  ){
			cout<<"(Visit Physics by Sir Faizan Pasha on youtube for guidance)"<<endl<<endl;
		}
		else if (Subjects[0] == "Maths" || Subjects[0] == "maths" ){
			cout<<"(Visit Zainematics on youtube for guidance)"<<endl<<endl;
			
		}
	
	
	
cout<<"\t\t\t\t\tGOOD LUCK!"<<endl;
advice(time);

}
//timetable for 6 months
if(time == 2 ){
	cout<<"\t\t\t\t\t||--TIME TABLE--||"<<endl;
	
	string arr2 [6][3] = { "MON", Subjects [0], "\tLEARN", "TUE", Subjects[0], "\tAPPLY",
	"WED",Subjects [1], "\tLEARN", "THU", Subjects [1], "\tAPPLY", "FRI", Subjects[2], "\tLEARN",
	"SAT", Subjects [2], "\tAPPLY"};
	
	for (int i=0; i<6; i++){
		for (int j=0; j<3; j++){
			cout<<arr2 [i][j]<<" ";
		}
	cout<<endl;
	}
	
	cout<<endl;
	cout<<"Key:"<<endl<<endl;
	cout<<"LEARN : learn a topic from the syllabus contents provided by CIE"<<endl;
	cout<<"APPLY : Practice past year questions from the topic you learnt the day before"<<endl<<endl;

	//suggestion for weakest subjects
	if (Subjects[0] == "Physics" || Subjects[0] == "physics"  ){
			cout<<"(Visit Physics by Sir Faizan Pasha on youtube for guidance)"<<endl<<endl;
		} 
		else if (Subjects[0] == "Maths" || Subjects[0] == "maths" ){
			cout<<"(Visit Zainematics on youtube for guidance)"<<endl<<endl;
			
		}
	cout<<"Repeat this process every week and you should be able to ace your exams!"<<endl<<endl;
	
	cout<<"\t\t\t\t\tGOOD LUCK!"<<endl;
	advice(time);
}

// suggestion for 1 day
if (time==3){
	cout<<"No amount of scheduling is going to help you get a good grade on an Alevel if you've only started studying a day before your exams :("<<endl;
	cout<<endl<<"Best just pray on it."<<endl;
	advice(time);
}
}


    


