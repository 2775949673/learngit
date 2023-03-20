#include <iostream>
#include "student.h"
using namespace std;
void student::setdate(){
	cin>>num;
	cin>>name;
	cin>>sex;
}
void student::display(){
	cout<<num<<endl<<name<<endl<<sex;
}
