#include<iostream> 
#include<string.h> 
using namespace std; 
  
class Student 
  
{ 
  
private: 
  
	string name; 
  
   long  int enrol; 
  
protected: 
	string Branch; 
public: 
  
	void getdata() 
	{ 
  
  
    cout<<"\n Enter Student name = "; 
  
        getline(cin>>ws,name); 
  
    cout<<"\n Enter Enrollment no = "; 
  
    cin>>enrol; 
       cout<<"\n Enter Branch = "; 
  
        getline(cin>>ws,Branch); 
	} 
  
	void display() 
	{ 
  
    cout<<"\n Student name = "<<name; 
  
    cout<<"\n Enrollment no = "<<enrol; 
  
	} 
  
}; 
  
class it_student : public Student 
{ 
	char sub1[20],sub2[20]; 
public: 
    it_student() 
	{ 
        strcpy(sub1,"mathematics"); 
        strcpy(sub2,"OOPS"); 
	} 
	void subdisplay() 
	{ 
  
        cout<<"\nSubjects are : "<<sub1<<" , "<<sub2<<endl; 
	} 
}; 
class it1_student:private Student 
{ 
char sub1[20],sub2[20]; 
protected: 
public: 
	it1_student() 
	{ 
        strcpy(sub1,"mathematics"); 
        strcpy(sub2,"OOPS"); 
        getdata(); 
	} 
	void subdisplay() 
	{ 
        display(); 
cout<<"\n Branch = "<<Branch; 
  
        cout<<"\nSubjects are : "<<sub1<<" , "<<sub2<<endl; 
	} 
}; 
class it2_student:protected Student 
{ 
  
protected: 
char sub1[20],sub2[20]; 
public: 
	it2_student() 
	{ 
        strcpy(sub1,"mathematics"); 
        strcpy(sub2,"OOPS"); 
        getdata(); 
	} 
	void subdisplay() 
	{ 
         display(); 
  
            cout<<"\n Branch = "<<Branch; 
  
        cout<<"\nSubjects are : "<<sub1<<" , "<<sub2<<endl; 
	} 
}; 
  
int main() 
{ 
    cout<<"----- access specifier = public  ------"<<endl; 
it_student i; 
i.getdata(); 
i.display(); 
i.subdisplay(); 
  cout<<"----- access specifier = private -----"<<endl; 
it1_student i1; 
  
i1.subdisplay(); 
cout<<"----- access specifier = protected -----"<<endl; 
   it2_student i2; 
  
i2.subdisplay(); 
   
   return 0; 
} 
