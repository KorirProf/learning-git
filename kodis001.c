#include<iostream>
using namespace std;

class personalDetails{
private:
    string name;
    int age;
    char gender;
    int id;
public:
    void cuptureDetails();
    void displayDetails();
};
void personalDetails ::captureDetails(){
   cout<<"Enter your name:\n";
   cin>>name;
   cout<<"Enter your age:\n";
   cin>>age;
   cout<<"Gender:"
   cin>>Gender;
   cout<<"Id no:";
   cin>>id;
};
void personalDetails::displayDetails(){
cout<<name<<endl;
cout<<age<<endl;
cout<<gender<<endl;
cout<<id<<endl;
};
int main(){
personalDetails personal;
personal.captureDetails();
personal.displayDetails();
}


