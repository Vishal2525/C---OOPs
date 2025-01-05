#include<iostream>
using namespace std;

class Stundet{
    public:
    string name;
    int rollno;
    int age;
    int grade;
};
int main(){
    Stundet *s1 = new Stundet();
    (*s1).name = "Vishal";
    (*s1).rollno = 101;
    (*s1).age = 20;
    (*s1).grade = 10;
    cout<<(*s1).name<<endl;
}