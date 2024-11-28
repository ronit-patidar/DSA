#include<iostream>
using namespace std;
class Student{
    public:
        string name;// continous 
        int rno;
        float marks;
    Student(string name,int rno,float marks){//constructor
        this->name=name;
        this->rno=rno;
        this->marks=marks;

    }
  
};
int main(){
    Student s("ronit",69,7.19);
    // change
    Student *ptr=&s;
    //(*ptr).name="RONIT";
    ptr->name="RONIT";
    cout<<s.name<<endl;

    Student *Ptr=&s;
    (*Ptr).rno=169;
    cout<<s.rno<<endl;

    Student *PTr=&s;
    (*PTr).marks=7.2;
    cout<<s.marks<<endl;


}