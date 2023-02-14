//https://onlinegdb.com/dYWLIb6iO
// Bismillahir Rahmanir Rahim
// SHAHRIAR MAHMUD ARMAN
// ID: C221055
// SECTION :2BM
# include<bits/stdc++.h>
# define ll long long
# define tt int t; cin>>t; while(t--)
# define rep(i,a,b) for(int i=a;i<b;i++)
# define rep_n(i,a,b) for(int i=a;i<=b;i++)
# define rep_rev(i,a,b) for(int i=b;a>=1;i--)
# define pb push_back
# define el endl
# define optimise()  { ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0); cin.clear(); }
# define R0 return 0
# define sz size()
# define srt(vvv) sort(vvv.begin(),vvv.end())
# define sp " "
using namespace std;
int s_cnt=1;
int t_cnt=1;
class students
{
	public:

	string name,id,sec,dept,advisor,course_reg;
	string cgpa;
	public:
	void set_data(string name,string id,string sec,string dept,string advisor,string cgpa)
	{
		this->name=name;

		this->id=id;

		this->sec=sec;

		this->dept=dept;

		this->advisor=advisor;

		this->cgpa = cgpa;

	}
	void show_data()
	{
		cout<<"Name :"<<name<<el;

		cout<<"ID :"<<id<<el;

		cout<<"Section :"<<sec<<el;

		cout<<"Department :"<<dept<<el;

		cout<<"Advisor :"<<advisor<<el;

	    cout<<"CGPA :"<<cgpa<<el;
        
		cout<<el;
	}
	string src_id()
	{
		return id;
	}

	string src_cgpa()
	{
		return cgpa;
	}

};
class teachers
{
	public:

	string name,id,designation,dept;

	void set_tdata(string name,string id,string designation,string dept)
	{
		this->name=name;

		this->designation=designation;

		this->id=id;

		this->dept=dept;

	}
	void get_tdata()
	{
		cout<<"Name        :"<<name<<el;

		cout<<"Designation :"<<designation<<el;

		cout<<"ID          :"<<id<<el;

		cout<<"Department  :"<<dept<<el;

		cout<<el;
	}
	string src_tid()
	{
		return id;
	}
};
students student[1000];

teachers teacher[100];

void write_stu_info()
{
	
    fstream write("student.txt",ios::out);

    write << s_cnt<<el;

    for(int i=1; i<=s_cnt; i++)
    {
        write << student[i].name<<el;

		write << student[i].id<<el;

		write << student[i].sec<<el;

		write << student[i].dept<<el;

		write << student[i].advisor<<el;

		write << student[i].cgpa<<el;
       
    }

    write.close();

}


void read_stu_info()
{
	fstream read("student.txt",ios::in);

	read >> s_cnt;

	for(int i=1;i<=s_cnt;i++)
	{
		getline(read >> ws, student[i].name);

	    getline(read >> ws, student[i].id);

	  	getline(read >> ws, student[i].sec);

		getline(read >> ws, student[i].dept);

		getline(read >> ws, student[i].advisor);

		getline(read >> ws, student[i].cgpa);


	}
	read.close();
	
}

void add_student()
{
	read_stu_info();

	cout<<"How many student you want to add :";

	int n;
	cin>>n;

	for(int i=s_cnt;i<n+s_cnt;i++)
	{
		string name,id,sec,dept,advi,cgpa;
		
		cout<<"# Information of student "<<i<<el;

		cout<<"Enter name        :";
		getline(cin>>ws,name);

		cout<<"Enter ID          :";
		getline(cin>>ws,id);

		cout<<"Enter section     : ";
		getline(cin>>ws,sec);

		cout<<"Enter Department  :";
		getline(cin>>ws,dept);

		cout<<"Advisor Name      :";
		getline(cin>>ws,advi);

		cout<<"peviouse sem CGPA :";
		getline(cin>>ws,cgpa);

		student[i].set_data(name,id,sec,dept,advi,cgpa);

		cout<<el<<el;
	}

	s_cnt+=n;

	write_stu_info();
}

void edit_stu_info()
{
	read_stu_info();
	if(s_cnt==1) cout<<"No student found "<<el;
	else
	{
		string ID;
		cout<<"Enter the student ID you want to Edit :";
		getline(cin>>ws,ID);
		int i=1;
		bool flag=false;
		for(i=1;i<s_cnt;i++)
		{
			if(ID==student[i].src_id())
			{
				cout<<"#_______Match Found_______#"<<el<<el;
				flag=true;
				break;
			}
			
		}
		string name,id,sec,dept,advi,cgpa;

		if(flag==true){
          cout<<"_________Enter the information of the student you want to edit__________"<<el<<el;
		  cout<<"Enter name :";
		  getline(cin>>ws,name);
		  
		  cout<<"Enter ID  :";
		  getline(cin>>ws,id);

		  cout<<"Enter Section :";
		  getline(cin>>ws,sec);

		  cout<<"Enter Department :";
		  getline(cin>>ws,dept);

		  cout<<"Enter Advisor:";
		  getline(cin>>ws,advi);

		  cout<<"peviouse sem CGPA :";
		  getline(cin>>ws,cgpa);
		
		student[i].set_data(name,id,sec,dept,advi,cgpa);

		write_stu_info();
		  
		}
		if (flag==false)
		{ 
			system("clear");
			cout<<"______NO Match Found______"<<el<<el;
		}
	}

}

void search_stu_id()
{
	read_stu_info();
	if(s_cnt==1) cout<<"#__________NO STUDENTS ARE FOUND___________#"<<el<<el;
	else
	{
		string ID;
		cout<<"Enter the ID of the student you want to search  :";
		getline(cin>>ws,ID);
		bool flag=false;
		for(int i=1;i<=s_cnt;i++)
		{
			if(ID==student[i].src_id())
			{
				cout<<el<<el;
				cout<<"#__________Match Found___________#"<<el<<el<<el;
				student[i].show_data();
				flag=true;
				break;
			}
		}
		if(flag==false) cout<<"_________NO MATCH FOUND_________#"<<el<<el;
	}
}

void delete_stu()
{
	read_stu_info();
	if(s_cnt==1) cout<<"#__________NO STUDENTS ARE FOUND___________#"<<el<<el;

	else
	{
		string ID;
		cout<<"Enter the ID of the student you want to delete :";
		getline(cin>>ws,ID);
		bool flag=0;
		for(int i=1;i<=s_cnt;i++)
		{
			if(ID==student[i].src_id())
			{
				cout<<"#__________Match Found___________#"<<el<<el;
			    string name="",id="",sec="",dept="",cgpa="",advi="";
				student[i].set_data(name,id,sec,dept,advi,cgpa);
				s_cnt--;
				write_stu_info();
				cout<<"#________Delete Succesfull_______#"<<el<<el;
				flag=1;
				break;

			}
		}
		if(flag==false) cout<<"_________NO MATCH FOUND_________#"<<el<<el;
	}

}

void show_student()
{
	read_stu_info();
	system("clear");
	if(s_cnt==1) cout<<"#__________NO STUDENT FOUND__________#"<<el<<el;
	else{
	for(int i=1;i<s_cnt;i++)
	{
		cout<<"#_______Information of student no :"<<i<<" _________#"<<el<<el;
		student[i].show_data();
	}
	}
}

void write_t_info()
{
	
    fstream write("teacher.txt",ios::out);

    write << t_cnt<<el;

    for(int i=1; i<=t_cnt; i++)
    {
        write << teacher[i].name<<el;

		write << teacher[i].id<<el;

		write << teacher[i].designation<<el;

		write << teacher[i].dept<<el;
       
    }

    write.close();

}

void read_t_info()
{
	fstream read("teacher.txt",ios::in);

	read >> t_cnt;

	for(int i=1;i<=t_cnt;i++)
	{
		getline(read >> ws, teacher[i].name);

	    getline(read >> ws, teacher[i].id);

	  	getline(read >> ws,  teacher[i].designation);

		getline(read >> ws,  teacher[i].dept);


	}
	read.close();
	
}

void add_teacher()
{
	read_t_info();

	cout<<"How many teacher you want to add :";

	int n;
	cin>>n;

	for(int i=t_cnt;i<n+t_cnt;i++)
	{
		string name,id,dept,desig;
		
		cout<<"# Information of teacher "<<i<<el;

		cout<<"Enter name        :";
		getline(cin>>ws,name);

		cout<<"Enter ID          :";
		getline(cin>>ws,id);

		cout<<"Enter Designation : ";
		getline(cin>>ws,desig);

		cout<<"Enter Department  :";
		getline(cin>>ws,dept);

		teacher[i].set_tdata(name,id,desig,dept);
		cout<<el;
	}

	t_cnt+=n;

	write_t_info();
}

void edit_t_info()
{
	read_t_info();
	if(t_cnt==1) cout<<" NO TEACHER FOUND "<<el<<el;
	else
	{
		string ID;
		cout<<"Enter the Teacher ID you want to Edit :";
		getline(cin>>ws,ID);
		int i=1;
		bool flag=false;
		for(i=1;i<t_cnt;i++)
		{
			if(ID==teacher[i].src_tid())
			{
				cout<<"#_______Match Found_______#"<<el<<el;
				flag=true;
				break;
			}
			
		}
		string name,id,desig,dept;

		if(flag==true){
          cout<<"_________Enter the information of the Teacher you want to edit__________"<<el<<el;
		  cout<<"Enter name        :";
		  getline(cin>>ws,name);

		  cout<<"Enter ID          :";
		  getline(cin>>ws,id);

		  cout<<"Enter Designation :";
		  getline(cin>>ws,desig);

		  cout<<"Enter Department :";
		  getline(cin>>ws,dept);

		
		teacher[i].set_tdata(name,id,desig,dept);

		write_t_info();
		cout<<el;
		  
		}
		if (flag==false)
		{ 
			system("clear");
			cout<<"______NO Match Found______"<<el<<el;;
		}
	}

}


void search_t_id()
{
	read_t_info();
	if(t_cnt==1) cout<<"#__________NO TEACHERS ARE FOUND___________#"<<el<<el;
	else
	{
		string ID;
		cout<<"Enter the ID of the teacher you want to search  :";
		getline(cin>>ws,ID);
		bool flag=false;
		for(int i=1;i<=t_cnt;i++)
		{
			if(ID==teacher[i].src_tid())
			{ 	cout<<el<<el;
				cout<<"#__________Match Found___________#"<<el<<el<<el;
				teacher[i].get_tdata();
				flag=true;
				break;
			}
		}
		if(flag==false) cout<<"_________NO MATCH FOUND_________#"<<el<<el;
	}
}

void delete_tea()
{
	read_t_info();
	if(t_cnt==1) cout<<"#__________NO STUDENTS ARE FOUND___________#"<<el<<el;

	else
	{
		string ID;
		cout<<"Enter the ID of the Teacher you want to delete :";
		getline(cin>>ws,ID);
		bool flag=0;
		for(int i=1;i<=t_cnt;i++)
		{
			if(ID==teacher[i].src_tid())
			{
				cout<<"#__________Match Found___________#"<<el<<el;
			    string name="",id="",desig="",dept="";
				teacher[i].set_tdata(name,id,desig,dept);
				t_cnt--;
				write_t_info();
				cout<<"#________Delete Succesfull_______#"<<el<<el;
				flag=1;
				break;

			}
		}
		if(flag==false) cout<<"_________NO MATCH FOUND_________#"<<el<<el;
	}

}

void show_teacher()
{
	read_t_info();
	system("clear");
 	if(t_cnt==1) cout<<"#__________NO TEACHER FOUND__________#"<<el<<el;
	else{
	for(int i=1;i<t_cnt;i++)
	{
		cout<<"#_______Information of Teacher no :"<<i<<" _________#"<<el<<el;
		teacher[i].get_tdata();
		cout<<el;
	}
	}
}

void course_reg()
{
	read_stu_info();
	if(s_cnt==1) {
		cout<<el;
	cout<<"#_________NO STUDENT FOUND__________#"<<el<<el;
	}
	else
   {
	cout<<"Enter your ID for course registration :";
	string ID;
	getline(cin>>ws,ID);
	bool flag=0;
	int i;
	for(i=1;i<s_cnt;i++)
	{
		if(ID==student[i].src_id())
		{
			flag=1;
			cout<<el<<el;
			cout<<"#_________Match Found________#"<<el<<el;
			cout<<"Cheeking if you are eligible for course registration. . . . ."<<el<<el;
			break;

		}
	}
	if(flag==1)
	{
		string k=student[i].src_cgpa();
		double d=stod(k);
		bool flag=0;
		if(d>0.00) 
		{
			cout<<"You are Eligible For course registration"<<el<<el;
			flag=1;
		}
		if(flag==1)
		{
			cout<<"If you want to complete your course registration Enter 1 :";
			int p;
			cin>>p;
			if(p==1) cout<<"#__________COURSE REGISTRATION SUCCESSFULL"<<el<<el;
			else cout<<"#__________WRONG INPUT__________#"<<el<<el;
		}
		if(flag==0)
		{
			cout<<el;
			cout<<"your are not eligible for course registration"<<el<<el;
		}

	}

   }
}


int main()
{
	system("color #808080");
	while(1)
	{
		main:
		{
		cout<<"_________Enter 1 For student Panel___________"<<el;
		cout<<"_________Enter 2 For Teacher panel___________"<<el;
		cout<<"_________Enter 0 to Quit the program_________"<<el<<el<<el;
		cout<<"---------Enter Your Choice----------  : ";
		int n;
		cin>>n;
		if(n==1) 
		{
			system("clear");
			goto stu;
		}
		if(n==2)
		{
		system("clear");
		 goto tea;
		}
		if(n==0) 
		{
			system("clear");
			cout<<el<<el;
			cout<<"___________Created by Shahriar Mahmud Arman____________"<<el;
			cout<<"___________Email: iamarman252575@gmail.com_____________"<<el;
			return 0;
		}
		}

	}
	stu:
	{
		while(1)
		{
		cout<<"_________Welcome to student Panel____________"<<el<<el;

		cout<<"_________Enter 1 to add Student______________"<<el;

		cout<<"_________Enter 2 to show all Student_________"<<el;

		cout<<"_________Enter 3 to Edit Student_____________"<<el;

		cout<<"_________Enter 4 to Search Student___________"<<el;

		cout<<"_________Enter 5 to delete  Student___________"<<el;

		cout<<"_________Enter 6 for course registration______"<<el;

		cout<<"_________Enter 0 to go to main menu___________"<<el<<el<<el;

		cout<<"---------Enter Your Choice----------  : ";

		int st;
		cin>>st;
		if(st==1)
		{
			add_student();
		}
		else if(st==2)
		{
			show_student();
		}
		else if(st==3)
		{
			edit_stu_info();
		}
		else if(st==4)
		{
			search_stu_id();
		}
		else if(st==5) 
		{
			delete_stu();
		}
		else if(st==6)
		{
			course_reg();
		}
		else if(st==0)
		{
			goto main;
		}
		else cout<<"______WRONG INPUT_____"<<el;
	}
	}
	tea:
	{

			while(1)
		{
		cout<<"_________Welcome to Teacher Panel__________"<<el<<el;

		cout<<"_________Enter 1 to add Teacher____________"<<el;

		cout<<"_________Enter 2 to show all Teachers______"<<el;

		cout<<"_________Enter 3 to Edit Teacher__________"<<el;

		cout<<"_________Enter 4 to Search Teacher________"<<el;

		cout<<"_________Enter 5 to delete  Teacher________"<<el;

		cout<<"_________Enter 0 to go to main menu________"<<el<<el<<el;

		cout<<"---------Enter Your Choice----------  : ";

		int te;
		cin>>te;
		if(te==1)
		{
			add_teacher();
		}
		else if(te==2)
		{
			show_teacher();
		}
		else if(te==3)
		{
			edit_t_info();
		}
		else if(te==4)
		{
			search_t_id();
		}
		else if(te==5) 
		{
			delete_tea();
		}
		else if(te==0)
		{
			goto main;
		}
		else cout<<"______WRONG INPUT_____"<<el;
	}
	}

}
