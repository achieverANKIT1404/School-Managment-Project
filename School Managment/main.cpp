#include <iostream>

using namespace std;

class Address
{
    public:
    string addr,city;
    int pin;
    void add()
    {
        cout<<endl;
        cout<<"Address  : "<<addr<<endl;
        cout<<endl;
        cout<<"City     : "<<city<<endl;
        cout<<endl;
        cout<<"Pin Code : "<<pin<<endl;
        cout<<endl;
    }
};
class Teacher : public Address
{
   public:
   string name,sub;
   int id,subCode,marks,sub1,sub2,sub3;
   void inputData()
   {
            cout<<endl;
            cout<<"Enter the name of teacher : ";
            cin>>name;
            cout<<endl;
            cout<<"Enter the subject : ";
            cin>>sub;
            cout<<endl;
            cout<<"Enter the id : ";
            cin>>id;
            cout<<endl;
            cout<<"Enter the subject code : ";
            cin>>subCode;
            cout<<endl;
            cout<<"Enter the address : ";
            cin>>addr;
            cout<<endl;
            cout<<"Enter the city : ";
            cin>>city;
            cout<<endl;
            cout<<"Enter the pin code : ";
            cin>>pin;
            cout<<endl;
            //cout<<"Enter the marks in "<<sub<<" : ";
            //cin>>marks;
            //cout<<endl;
   }
   void inputMarks()
   {
       cout<<endl;
       cout<<"Enter the marks in English : ";
       cin>>sub1;
       cout<<"Enter the marks in Maths : ";
       cin>>sub2;
       cout<<"Enter the marks in Science : ";
       cin>>sub3;
       cout<<endl;
   }
};
class Student : public Teacher
{
    public:
    string stuName;
    int roll,total;
    double per;
    void stuData()
    {
        cout<<endl;
        cout<<"Enter the name of student : ";
        cin>>stuName;
        cout<<endl;
        cout<<"Enter the roll number : ";
        cin>>roll;
        cout<<endl;
        cout<<"Enter the address : ";
        cin>>addr;
        cout<<endl;
        cout<<"Enter the city : ";
        cin>>city;
        cout<<endl;
        cout<<"Enter the pin code : ";
        cin>>pin;
        cout<<endl;
    }
};

int main()
{
    double per;
    int i,j,id1,sub,total,choice;
    j=1;
    Student s1[3];

    /*cout<<endl;
    cout<<"\t-::SCHOOL MANAGMENT SYSTEM::-"<<endl;
    cout<<endl;
    cout<<"\t  ^^^^^^^^::MENU::^^^^^^^^"<<endl;
    cout<<"\t   1) Teacher Details"<<endl;
    cout<<"\t   2) Students Marks by Teacher"<<endl;
    cout<<"\t   3) Search Teacher Details"<<endl;
    cout<<"\t   4) Student Deatils"<<endl;
    cout<<"\t   5) Check Result"<<endl;
    cout<<"\t   0) Exit/Clear"<<endl;
    cout<<endl;*/

    while(j)
    {
        if(choice!=0)
        {
                cout<<endl;
                cout<<"\t-::SCHOOL MANAGMENT SYSTEM::-"<<endl;
                cout<<endl;
                cout<<"\t  ^^^^^^^^::MENU::^^^^^^^^"<<endl;
                cout<<"\t   1) Teacher Details"<<endl;
                cout<<"\t   2) Students Marks by Teacher"<<endl;
                cout<<"\t   3) Search Teacher Details"<<endl;
                cout<<"\t   4) Student Details"<<endl;
                cout<<"\t   5) Check Result"<<endl;
                cout<<"\t   0) Exit/Clear"<<endl;
                cout<<endl;
        }
        cout<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;

    switch(choice)
    {
          case 1:
          cout<<endl;
          cout<<"^^^^^^^^Teacher Details^^^^^^^^"<<endl;
            for(i=0;i<3;i++)
            {
                s1[i].inputData();
            }
            cout<<"***********::Teacher Data::***********"<<endl;
            for(i=0;i<3;i++)
            {
                cout<<endl;
                cout<<s1[i].sub<<" Teacher Data"<<endl;
                cout<<endl;
                cout<<"Name of teacher\t: "<<s1[i].name<<endl;
                cout<<"Subject\t\t: "<<s1[i].sub<<endl;
                cout<<"Id\t\t: "<<s1[i].id<<endl;
                cout<<"Subject code\t: "<<s1[i].subCode<<endl;
                cout<<"Address\t\t: "<<s1[i].addr<<endl;
                cout<<"City\t\t: "<<s1[i].city<<endl;
                cout<<"Pin code\t: "<<s1[i].pin<<endl;
                //cout<<"Marks\t\t: "<<s1[i].marks<<endl;
                cout<<endl;
            }
          break;

          case 2:
           for(i=0;i<3;i++)
            {
                cout<<endl;
                cout<<"Student "<<i+1<<endl;
                s1[i].inputMarks();
            }
            cout<<"Note : Marks only input by Teacher"<<endl;
            cout<<endl;
            cout<<"English Teacher"<<endl;
            for(i=0;i<3;i++)
            {
                cout<<endl;
                cout<<"Student "<<i+1<<" English : "<<s1[i].sub1<<endl;
            }
            cout<<endl;
            cout<<"Maths Teacher"<<endl;
            for(i=0;i<3;i++)
            {
                   cout<<endl;
                   cout<<"Student "<<i+1<<" Maths : "<<s1[i].sub2<<endl;
            }
            cout<<endl;
            cout<<"Science Teacher"<<endl;
             for(i=0;i<3;i++)
            {
                   cout<<endl;
                   cout<<"Student "<<i+1<<" Science : "<<s1[i].sub3<<endl;
            }
          break;

          case 3:
            cout<<endl;
            cout<<"***********::Search Teacher Data::***********"<<endl;
            cout<<endl;
            cout<<"Enter id of teacher to search data : ";
            cin>>id1;
            cout<<endl;
            for(i=0;i<3;i++)
            {
                if(id1==s1[i].id)
                {
                cout<<"Name of teacher\t: "<<s1[i].name<<endl;
                cout<<"Subject\t\t: "<<s1[i].sub<<endl;
                cout<<"Id\t\t: "<<s1[i].id<<endl;
                cout<<"Subject code\t: "<<s1[i].subCode<<endl;
                cout<<"Address\t\t: "<<s1[i].addr<<endl;
                cout<<"City\t\t: "<<s1[i].city<<endl;
                cout<<"Pin code\t: "<<s1[i].pin<<endl;
                //cout<<"Marks\t\t: "<<s1[i].marks<<endl;
                cout<<endl;
                }
            }
          break;

          case 4:
          cout<<endl;
           cout<<"^^^^^^^^Student Details^^^^^^^^"<<endl;
           for(i=0;i<3;i++)
           {
               s1[i].stuData();
           }
           for(i=0;i<3;i++)
           {
               cout<<endl;
               cout<<"Name of student\t: "<<s1[i].stuName<<endl;
               cout<<"Roll Number\t: "<<s1[i].roll<<endl;
               cout<<"Address\t\t: "<<s1[i].addr<<endl;
               cout<<"City\t\t: "<<s1[i].city<<endl;
               cout<<"Pin code\t: "<<s1[i].pin<<endl;
               cout<<endl;
           }
         break;

          case 5:
          cout<<"************Result**************"<<endl;
           cout<<endl;
           cout<<"Roll No\t  Student Name\tTotal Marks\tPercentage"<<endl;
           cout<<endl;
           for(i=0;i<3;i++)
           {
               s1[i].total=s1[i].sub1+s1[i].sub2+s1[i].sub3;
               s1[i].per=s1[i].total/3;
               cout<<endl;
               cout<<s1[i].roll<<"\t\t"<<s1[i].stuName<<"\t\t"<<s1[i].total<<"\t\t"<<s1[i].per<<"%"<<endl;
           }
         break;

          case 0:
           cout<<"Exit/Clear"<<endl;
           j=0;
          break;

          default:
           cout<<"Invalid user choice,Try again..!"<<endl;
     }

    }


    return 0;
}

