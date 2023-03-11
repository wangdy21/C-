#include <bits/stdc++.h>

using namespace std;

class Person{
private:
    string m_name;
    int m_age;
    static int count;
public:
    Person(string name, int age) :m_name(name),m_age(age){
        count++;
    }
    virtual ~Person(){//析构函数应为虚函数，如果不是，那么实际编译过程中调用的不是Womwen的析构函数，而是Person的析构函数，这时候如果Women中如果有成员数据开辟再堆区，就会造成内存泄漏

    }
    static int getCounter(){
        return count;
    }
};

class Women: public Person{
private:
    string* myhobby;
public:
    Women(string name,int age,string hobby):Person(name, age){
        myhobby = new string(hobby);
    }
    ~Women(){
        delete myhobby;
    }
};

int Person::count = 0;//类外初始化，不必再加static

int main(){
    Person* p1 = new Person("ju",12);
    Person* p2 = new Women("hah",66,"running");
    cout << Person::getCounter()<<endl;
    return 0;
}