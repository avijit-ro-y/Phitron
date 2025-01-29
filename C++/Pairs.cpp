#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int roll;
    Student() {} // Default constructor
    Student(string name,int roll){
        this->name=name;
        this->roll=roll;
    }
};
class custom_compare_class{
    public:
    bool operator()(Student l,Student r){  
        if (l.name > r.name)
        {
            return true;
        }
        else if(l.name < r.name){
            return false;
        }
        else{         
             return l.roll< r.roll;
        }
    }
};
int main(){
    priority_queue<Student,vector<Student>,custom_compare_class>pq;
    int n;
    cout<<"Enter the number of data:";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        string name;
        int roll;
        cin>>name>>roll;
        Student stu(name,roll);
        pq.push(stu);
    }
    while (!pq.empty())
    {
        cout<<pq.top().name<<" "<<pq.top().roll<<endl;
        pq.pop();
    }
    
    return 0;
}