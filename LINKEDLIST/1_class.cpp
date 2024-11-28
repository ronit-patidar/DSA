#include<iostream>
using namespace std;
class Student{
    public:
        string name;// continous 
        int rno;
        float marks;
    Student(string n,int r,float m){//constructor used for intilizing
        name=n;
        rno=r;
        marks=m;
    }
  
};
int main(){
    Student s("ronit",69,7.19);
    // s.name="Ronit Patidar";
    // s.marks=7.19;
    // s.rno=69;
    cout<<s.marks<<endl;
    cout<<s.name<<endl;
    cout<<s.rno<<endl;
}