#include <bits/stdc++.h>
using namespace std;
class Info
{
public:
    virtual void detials()
    {
        cout << "------ Student Info -------";
    }
};
class Name : public Info
{
public:
    virtual void detials()
    {
        cout << "Name : Vishal Patel";
    }
};
class Age : public Info
{
public:
    virtual void detials()
    {
        cout << "Age : 22 ";
    }
};
class Coures : public Info
{
public:
    virtual void detials()
    {
        cout << "Course : Master Of Computer Application ";
    }
};
class Branch : public Info
{
public:
    virtual void detials()
    {
        cout << "Branch : Computer Application ";
    }
};
class Subjects : public Info
{
public:
    virtual void detials()
    {
        cout << "Subjects : DBMS, C++, Operating System, DSA etc.";
    }
};
class About : public Info
{
public:
    virtual void detials()
    {
        cout << "About : I am a Computer Science student who loves coding and problem-solving.\n I have a keen interest in DSA, Web Development, and building practical projects.\n I am constantly learning new technologies and improving my skills to become a better software developer.";
    }
};

int main()
{
    cout<<"----------------------------------------------\n\n";
    cout<<"********* Student Informatio ************\n\n";


    Info *p;

    vector<Info *> Information;

    Information.push_back(new Info());
    Information.push_back(new Name());
    Information.push_back(new Age());
    Information.push_back(new Coures());
    Information.push_back(new Branch());
    Information.push_back(new Subjects());
    Information.push_back(new About());

    for (int i = 1; i < Information.size(); ++i)
    {
        p = Information[i];
        p->detials();
        cout<<endl;
    }

    cout<<"----------------------------------------------\n\n";
    cout<<endl;

    return 0;
}