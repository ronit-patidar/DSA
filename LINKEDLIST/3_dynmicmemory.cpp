#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int rno;
    float percentage;
    Student(string name,int rno,int percentage){// this operator
        this->name=name;
        this->rno=rno;
        this->percentage=percentage;
    }
};
 void change(Student* s){
    s->name="RONIT";
 }
int main(){
  Student* s = new Student("ronit",69,7.19) ; // dynamicMemoryAllocation
  cout<<s->name<<endl;
  change(s);
  cout<<s->name<<endl;
}