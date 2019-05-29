// Libraries used
#include <iostream>
#include <conio.h>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
// Variable for number of Students
	int students = 50;
	int i, j;
// Array of students
	string name[students];
// Variables for grade components
	double exp1[students], exp2[students], exp3[students], exp4[students];
	double st1[students], st2[students], st3[students], st4[students];
	double mp1[students], mp2[students];
	double pw[students], pp[students];
	double fw[students], fp[students];
	double transmuted[students];
	double grade[students];
//For loop
	for(int i=0; i<students; i++){
		cout << "\nEnter Student's Name: ";
    	cin >> name[i];
		cout << "\nEnter Grades \n";
// input for grade components 	
// Experiments
		cout << "\nEXPERIMENTS \n"; 
		cout << "Experiment 1: "; 
		cin >> exp1[i]; 
		cout << "Experiment 2: "; 
		cin >> exp2[i]; 
		cout << "Experiment 3: "; 
		cin >> exp3[i]; 
		cout << "Experiment 4: "; 
		cin >> exp4[i]; 
// Skills Test
		cout << "\nSKILLS TEST \n"; 
		cout << "Skills Test 1: "; 
		cin >> st1[i]; 
		cout << "Skills Test 2: "; 
		cin >> st2[i]; 
		cout << "Skills Test 3: "; 
		cin >> st3[i]; 
		cout << "Skills Test 4: "; 
		cin >> st4[i]; 
// Machine Problems
		cout << "\nMACHINE PROBLEMS \n"; 
		cout << "Machine Problem 1: "; 
		cin >> mp1[i]; 
		cout << "Machine Problem 2: "; 
		cin >> mp2[i]; 
// Major Examinations	
		cout << "\nMAJOR EXAMINATIONS\n"; 
// Preliminary Examinations
		cout << "Preliminary Examinations\n"; 
// Prelims Written Exam
		cout << "Written Examination: "; 
		cin >> pw[i]; 
// Prelims Practical Exam
		cout << "Practical Examination: "; 
		cin >> pp[i];
// Final Examinations		
		cout << "\nFinal Examinations \n"; 
// Finals Written Exam
		cout << "Written Examination: "; 
		cin >> fw[i]; 
// Finals Practical Exam
		cout << "Practical Examination: "; 
		cin >> fp[i];
// Grades Computed and Combined
		grade[i]=0;
        grade[i]=(exp1[i]/20)+(exp2[i]/20)+(exp3[i]/20)+(exp4[i]/20)
        		+(st1[i]/20)+(st2[i]/20)+(st3[i]/20)+(st4[i]/20)
        		+(mp1[i]/10)+(mp2[i]/10)
        		+((pw[i]+pp[i])/5)+((fw[i]+fp[i])/5);
	}
// Transmutation of Final Grade
	for(int i=0; i<students; i++)
	{
		if(grade[i] >= 60.00 && grade[i] <= 64.44 ){
			transmuted[i] = 3.00;
		}
		else if(grade[i] >= 64.45 && grade[i] <= 68.89 ){
			transmuted[i] = 2.75;
		}
		else if(grade[i] >= 68.90 && grade[i] <= 73.33 ){
			transmuted[i] = 2.50;
		}
		else if(grade[i] >= 73.34 && grade[i] <= 77.78 ){
			transmuted[i] = 2.25; 
		}
		else if(grade[i] >= 77.79 && grade[i] <= 82.22 ){
			transmuted[i] = 2.00;
		}
		else if(grade[i] >= 82.23 && grade[i] <= 86.67 ){
			transmuted[i] = 1.75;
		}
		else if(grade[i] >= 86.68 && grade[i] <= 91.11 ){
			transmuted[i] = 1.50;
		}
		else if(grade[i] >= 91.12 && grade[i] <= 96.56 ){
			transmuted[i] = 1.25;
		}
		else if(grade[i] >= 95.57 ){
			transmuted[i] = 1.00;
		}
		else{
			transmuted[i] = 5.00;
		}
	}
// Output for grades
	cout<<endl;
	cout<<"Name"<<"\t\t"<<"Final Grade"<<"\t\t"<<"Transmutated"<<"\t\t"<<"Pass/Fail"<<endl;
	for(int i=0; i<students; i++){
		cout << fixed <<setprecision(2) << left;
		cout<<name[i]<<"\t\t"<<grade[i]<<"\t\t\t"<<transmuted[i]<<"\t\t\t";
		if(transmuted[i] <= 3){
			cout<<"Pass"<<endl;
		}else{
			cout<<"Fail"<<endl;
		}
	}
// Sorting the Top Students
	for(int i=0; i<students-1; i++){
		for(int j= i+1; j<students; j++){
			if(grade[i] < grade[j]){
				string temp1 = name[i];
				name[i] = name[j];
				name[j] = temp1;
				
				double temp2 = grade[i];
				grade[i] = grade[j];
				grade[j] = temp2;
			}
		}
	}
	cout<<endl;
// Output for the Top 10 students
	for(int i=0; i<10; i++){
		cout<<"Top "<<i+1<<" :"<<name[i]<<endl;
}
return 0;
}


