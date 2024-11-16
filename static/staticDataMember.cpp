#include<iostream>
using namespace std;
class item{
 static int count;
 int number;
 public:
 void getdata(int a)
 {
    number=a;
    count++;
 }
 void getcount(void)
 {
    cout<<"count:"<<count<<endl;
 }
};
int item::count;//bydefult it initialize with zero but we can initialize with any value like count =10;
int main()
{
    item a ,b,c;
    a.getcount();
    b.getcount();
    c.getcount();
    a.getdata(1);
    b.getdata(2);
    cout<<"after reading data:"<<endl;
    a.getcount();
    b.getcount();
    c.getcount();
        cout<<"after reading part 2 data:"<<endl;
          c.getdata(2);
         
           a.getcount();
    b.getcount();
    c.getcount();



}//one thing keep in your mind if i did not declear static int count then it will give error.
//it need to be declared before the class declaration.
//