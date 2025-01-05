#include<iostream>
using namespace std;

// access modifier are of three types:
// 1. public
// 2. private
// 3. protected

// by default in c++ the access modifier is private
// access modifier are of three types:
// 1. public
// 2. private
// 3. protected

// by default in c++ the access modifier is private
// Note: In c++ we can't access the private members of the class outside the class
// we can access the private members of the class by using the public member functions of the class
// getting the value of the private members of the class is called as getter
// setting the value of the private members of the class is called as setter


class student{
    
    string name;
    int rollno;
    int age;
    string grade;

    // setter 
    public:
    void setname(string s){
        name = s;
    }
    void setrollno(int r){
        rollno = r;
    }
    void setage(int a){
        age = a;
    }
    void setgrade(string g){
        grade = g;
    }
    // getter
    void getname(){
        cout<<name<<endl;
    }
    void getrollno(){
        cout<<rollno<<endl;
    }
    void getage(){
        cout<<age<<endl;
    }
    void getgrade(){
        cout<<grade<<endl;
    }

};

int main(){
    student s1;
    // s1.name = "Vishal";
    // s1.rollno = 101;
    // cout<<s1.name<<endl;
    s1.setname("Vishal");
    s1.setrollno(101);
    s1.setage(20);
    s1.setgrade("A");
    s1.getname();
    s1.getrollno();
    s1.getage();
    s1.getgrade();

    

    return 0;
}