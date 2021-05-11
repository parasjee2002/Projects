 #include<bits/stdc++.h> 
 #include<iostream>

 using namespace std;
class staff 
{ 
    protected:
int c;
string name; 
public:
void s_input() {
cout<<"\nEnter code : ";cin>>c;
cout<<"\nEnter name : "; 
cin>>name;
}
void s_display()
 {
cout<<"\nCode : "<<c<<endl;cout<<"\nName : "<<name<<endl; 
}
};
class teacher : public staff {
protected:
string s;
string p; 
public:
void t_input() {
s_input();

cout<<"\nEnter subject : "; 
cin>>s;
cout<<"\nEnter publication : ";
cin>>p;
}
void t_display() {
s_display();
cout<<"\nSubject : "<<s<<endl; cout<<"\nPublication : "<<p<<endl;
}
};
class officer : public staff {
protected:
string g;
 public:
void o_input() {
s_input();
cout<<"\nEnter grade : "; 
cin>>g;
}
void o_display() {


s_display();
cout<<"\nGrade : "<<g; 
    
}
};
class typist : public staff {
protected:
double s; public:
void tp_input() {
s_input();
cout<<"\nEnter speed : "; cin>>s;
}
void ty_display() {
s_display();
cout<<"\nSpeed "<<s; }
};
class regular : public typist {
protected:
double sal; public:
void input()
{
tp_input();
cout<<"\nEnter monthly salary : "; cin>>sal;
}
void display() {
ty_display();
cout<<"\nSalary : "<<sal; }
};
class causal : public typist {
protected:
double sal; public:
void input() {
tp_input();
cout<<"\nEnter daily salary : "; cin>>sal;
}
void display() {
ty_display();
cout<<"\nSalary : "<<sal; }
};

int main() 
{
int f,d;
cout<<"\nEnter 1 for teacher"; cout<<"\nEnter 2 for officer"; cout<<"\nEnter 3 for typist"; cout<<"\nEnter your choice : "; 
cin>>f;
if(f==1)
{
teacher t; t.t_input(); t.t_display();
}
else if(f==2) {
officer o; o.o_input(); o.o_display();
}
else if(f==3)

{
cout<<"\nEnter 1 for regular"; cout<<"\nEnter 2 for causal"; cout<<"\nEnter your choice : "; cin>>d;
if(d==1)
{
regular r; r.input(); r.display();
}
else if(d==2) {
causal c; c.input(); c.display();
}
}
return 0; 
    
}