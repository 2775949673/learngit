#include<iostream>
using namespace std;
class box{
	public:
		float length;
		float width;
		float heigth;

		void input();
		float volume();
		void display();
};
void box::input(){
	cout<<"please inpute length,width,heigth";
	cout<<endl;
	cin>>length;
	cin>>width;
	cin>>heigth;

} 
float box::volume(){
	return(heigth*width*length);
}
void box::display(){
	cout<<volume();
}
int main(){
	box b1,b2,b3;
	b1.input();
	b1.volume();
	cout<<"box1的体积为；";
	b1.display();
	cout<<endl;
	
	b2.input();
	b2.volume();
	cout<<"box2的体积为；";
	b2.display();
	cout<<endl;
	
	b3.input();
	b3.volume();
	cout<<"box3的体积为；";
	b3.display();
	return 0;
	
	
	
	
	
	
	
}
