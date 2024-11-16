#include<iostream>
#include<string>
using namespace std;
class Class
{private:
string name;//encapsulation.
int age;
public:
Class(string n, int a)
{
    name=n;
    age= a;
}
void print();


};
void Class::print()
{
    cout<<"My name is "<<name<<" and I am "<<age<<" years old.";
}
int main()
{ Class obj("John", 25);
obj.print();

}
