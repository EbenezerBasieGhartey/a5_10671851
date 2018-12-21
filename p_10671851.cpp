#include<iostream>
#include<string>
#include<fstream>
#include<conio.h>
#include<windows.h>
using namespace std;

struct student
{
	string StudID;
	string FirstName;
	string OtherName;
	string LastName;
	string Programme;
	string Course;
	string Addstudent;
}studentData;


struct staff
{
	string StaffID;
	string FirstName;
	string OtherName;
	string LastName;
	string Department;
	string Staffedit;
	string AddStaff;
}StaffData;



int main(int argc,char** argv)
{
	string StudentData[5];
	
	int h,i,notFound;
	string find; 
	string studName;
	string course;
		int todo;
		char choice;
		
	cout<<"\t*********************************************\n\t\t\t WELCOME \n\t\t SCHOOL MANAGEMENT SYSTEMS \n\t*********************************************\n";
	cout<<"\t\t\t LOOKING FOR? \n\t  1.STUDENT INFORMATION.\t\t\t 2.STAFF INFORMATON"<<endl;
	cin>>todo;
	
	if(todo==1) {
	                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          
		
		system("color A");
		system("cls");
		
		cout<<"\t\t\t STUDENT INFORMATION \n\t\t**********************************\n WANT TO \n ";
		cout<<"a.ADD STUDENT \n b.EDIT STUDENT \n c.DELETE STUDENT \n d.ADD COURSE \n e.EDIT COURSE \n f.DELETE COURSE \n g.DISPLAY STUDENT INFORMATION "<<endl;
		cin>>choice;
		
		if(choice=='a'){
		system("cls");
		cout<<"\t\t\t ADD STUDENT \n\t\t\t**************\n";
		
		ofstream f1("student.txt",ios::app);
		for(int i=0; i<5;i++){
		
		
		cout<<"enter student ID: ";
			cin>>studentData.StudID;
		
			cout<<"enter student firstname: ";
			cin>>studentData.FirstName;
			
			cout<<"enter student othername: ";
			cin>>studentData.OtherName;
			
			cout<<"enter student lastname: ";
			cin>>studentData.LastName;
			
			cout<<"enter programme of offer: ";
			cin>>studentData.Programme;
			
			cout<<"Do you want to enter another data? Press y to continue and n to finish \n";
			cin>>choice;
			
			if(choice=='n')
				break;
		
f1<<studentData.StudID<<endl<<studentData.FirstName<<endl<<studentData.OtherName<<endl<<studentData.LastName<<endl<<studentData.Programme<<endl;

}
f1.close();
}

			else if(choice=='b'){
				cout<<"\t\t\t EDIT STUDENT\n\t\t\t**************\n";
			
			cout<<"enter ID of student to edit\n";
			cin>>studentData.StudID;
			cout<<"\t\t\t enter new info \t"<<endl;
				cout<<"enter new ID \n";
				cin>>studentData.StudID;
				cout<<"enter new first name\n";
				cin>>studentData.FirstName;
				cout<<"enter new middle name\n";
				cin>>studentData.OtherName;
				cout<<"enter new last name\n";
				cin>>studentData.LastName;
				
				cout<<"student information edited\n";
 
}

			else if(choice=='c'){
				cout<<"\t\t\t DELETE STUDENT\n\t\t\t****************\n";
			
			cout<<"enter ID of student to delete\n";
			cin>>studentData.StudID;
			
				cout<<"student with ID "<<studentData.StudID<<" "<<"is deleted \n";

}
else if(choice=='d'){
				cout<<"\t\t\t ADD COURSE\n\t\t\t************\n";
				ofstream f1("student.txt",ios::app);
				
					
				cout<<"enter your ID first\n";
				cin>>studentData.StudID;
				for(int j=0; j<5;j++){
			cout<<"name of course you want to register :";
			cin>>studentData.Course;
			
			cout<<"student with ID"<<" "<<studentData.StudID <<" "<<"REGISTERED  :"<<studentData.Course<<"\n\n";
			cout<<"want to add more? press y to add and n to end \n";
			cin>>choice;
						if(choice=='n')
				break;
					f1<<studentData.StudID<<endl<<studentData.Course<<endl;
		}
			f1.close();
}

else if(choice=='e'){
				cout<<"\t\t\t EDIT COURSE\n\t\t\t*************\n";
			cout<<"first enter your ID :";
			cin>>studentData.StudID;
			cout<<"enter course of student to edit\n";
			cin>>studentData.Course;
			cout<<"\t\t\t enter new course \t"<<endl;
			cin>>studentData.Course;
			cout<<"New edited course of "<<"student with ID"<<" is "<<studentData.Course;
		}
		
					else if(choice=='f'){
				cout<<"\t\t\t DELETE COURSE \n\t\t\t***************\n";
			
			cout<<"enter ID first :";
			cin>>studentData.StudID;
			cout<<"enter course you want to delete :";
			cin>>studentData.Course;
				cout<<studentData.StudID <<": "<<"you are no more registered for : " <<studentData.Course ;

}  

else if (choice=='g')
	{
		cout<<"\t\t DISPLAY STUDENT INFORMATION \n";
		ifstream f1("student.txt");
		cout<<"Enter first name to be displayed :";
		cin>>find;
		cout<<endl;
		int notFound=0;
		for(int m=0;(m<5)||(!f1.eof());m++)
		{
		
		getline(f1,studentData.FirstName);
		if(studentData.FirstName==find)
		{
			notFound=1;
			cout<<"first name :"<<studentData.FirstName<<endl;
			cout<<"last name :"<<studentData.LastName<<endl;
			
			getline(f1, studentData.StudID);
			cout<<"student ID : "<<studentData.StudID<<endl;
			getline(f1,studentData.Programme);
			cout<<"programme "<<studentData.Programme<<endl<<endl;

	}
	}
	
		if(notFound==0){
			cout<<"no record found "<<endl;
				}
				
cout<<endl;
		f1.close();
			
}

}


if(todo==2){
			system("color B");
			system("cls");
			
			cout<<"\t\t\t STAFF INFORMATION \n\t\t**********************************\n\t WANT TO \n";
			cout<<"a.ADD STAFF \n b.EDIT STAFF \n c.DELETE STAFF\n d.DISPLAY STAFF INFORMATION \n";
			cin>>choice;
			
			if(choice=='a'){
				cout<<"\t\t\t ADD STAFF \n\t\t\t***********\n";
				ofstream f2("staff.txt",ios::app);
				for(int j=0; j<5; j++){
				
				cout<<"enter staff ID \n";
				cin>>StaffData.StaffID;
				cout<<"enter first name\n";
				cin>>StaffData.FirstName;
				cout<<"enter middle name\n";
				cin>>StaffData.OtherName;
				cout<<"enter last name\n";
				cin>>StaffData.LastName;
				cout<<"enter staff's department\n";
				cin>>StaffData.Department;
				
			cout<<"Do you want to enter another data? Press y to continue and n to finish ";
			cin>>choice;
			
			if(choice=='n'){
			
				break;
	}
				f2<<StaffData.StaffID<<endl<<StaffData.FirstName<<endl<<StaffData.OtherName<<endl<<StaffData.LastName<<endl<<StaffData.Department<<endl;
			}
			f2.close();
			}
			else if(choice=='b'){
				cout<<"\t\t\t EDIT STAFF\n\t\t\t************\n";
			
			cout<<"enter ID of staff to edit\n";
			cin>>StaffData.Staffedit;
			cout<<"\t\t\t enter new info \t"<<endl;
			
				cout<<"enter staff ID \n";
				cin>>StaffData.StaffID;
				cout<<"enter first name\n";
				cin>>StaffData.FirstName;
				cout<<"enter middle name\n";
				cin>>StaffData.OtherName;
				cout<<"enter last name\n";
				cin>>StaffData.LastName;
				
				cout<<"staff information edited\n";
				}
		


				else if(choice=='c'){
				cout<<"\t\t\t DELETE STAFF\n\t\t\t**************\n";
			
			cout<<"enter ID of staff to delete \n";
			cin>>StaffData.StaffID;
			cout<<"staff with ID "<<StaffData.StaffID<<"  "<<"deleted \n";
				 
			}
		else if (choice=='d')
	{
		cout<<"\t\t DISPLAY STAFF INFORMATION \n";
		ifstream f2("staff.txt");
		cout<<"Enter first name to be displayed :";
		cin>>find;
		cout<<endl;
		int notFound=0;
		for(int m=0;(m<5)||(!f2.eof());m++)
		{
		
		getline(f2,StaffData.FirstName);
		if(StaffData.FirstName==find)
		{
			notFound=1;
			cout<<"first name :"<<StaffData.FirstName<<endl;
			cout<<"last name :"<<StaffData.LastName<<endl;
			
			getline(f2, StaffData.AddStaff);
			cout<<"staff ID : "<<StaffData.AddStaff<<endl;
			getline(f2,StaffData.Department);
			cout<<"department "<<StaffData.Department<<endl<<endl;
	}
	}

		f2.close();
		
			if(notFound==0){
			cout<<"no record found "<<endl;
		}
		
		cout<<"double press any key to continue";
		getch();
		getch();
	}
	
}
		if(todo!=1&&todo!=2){
				system("color D");
				system("cls");
				cout<<"You entered a wrong number\n try again\n";
				cout<<"THANK YOU FOR USING OUR SERVICE \n GOOD BYE ";
			}
	


	return 0;
}
