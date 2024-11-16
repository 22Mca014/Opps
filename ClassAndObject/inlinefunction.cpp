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
int inline  sum(int ,int );


};
void Class::print()
{
    cout<<"My name is "<<name<<" and I am "<<age<<" years old.";
}
int Class::sum(int b,int c)
{
    return b+c;
}
int main()
{ Class obj("John", 25);
obj.print();
cout<<endl<<obj.sum(12,13);

}
