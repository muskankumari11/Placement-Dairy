#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int rollnum;
    int salary;
// Constructor to initialize data members
    Student(string name, int rollnum, int salary){
        this->name=name;
        this->rollnum=rollnum;
        this->salary=salary;
    }
// Member function to change the name of the student
    void change(Student &s){
        s.name="rama";
    }
};
int main(){
     Student s("shyam", 22, 3000); 
        cout<<s.name;
        cout<<endl;
        s.change(s);
        cout<<s.name;
    }
