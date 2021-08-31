#include "Student.h"
#include <iostream>
#include<cstring>
// Assign studentId and name
Student::assignDetails(int sId,char sName[]) {
  studentId=sId;
  strcpy(name=sName);
  
}

// Display StudentId and Name
Student::display() {
  cout<<endl;
  cout<<endl;
  cout<<"student id:"<<StudentId<<endl;
  cout<<"student name:"<<name<<endl;
  
}
