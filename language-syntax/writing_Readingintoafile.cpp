#include<iostream>
#include<fstream>
using namespace std;

class student{
	public:
	
	string name;
	int rollNo;
	string branch;
	string college;
	
	student(string n= " ", int r = 0, string b = " ", string c = " "){
		name = n;
		rollNo = r;
		branch = b;
		college = c;
	}
	
	friend ifstream & operator <<(ifstream &ifs, student &s);
	friend ofstream & operator >>(ofstream &ofs, student &s);
};

ofstream & operator <<(ofstream &ofs, student &s){
	ofs << s.name << endl;
	ofs << s.rollNo << endl;
    ofs << s.branch << endl;
	ofs << s.college << endl;
	return ofs;
}

ifstream & operator >>(ifstream &ifs, student &s){
	ifs >> s.name >> s.rollNo >> s.branch >> s.college;
	return ifs;
}
	

int main()
{
	student s1("Shiva", 034, "EEE", "NITRR");
	student s3("Rohit", 022 , "ECE", "NITT");
	ofstream ofs;
	ofs.open("student.txt");
	
	ofs << s1;
	ofs << s3;
	
	ofs.close();
	
	student s2;
	student s4;
	ifstream ifs;
	ifs.open("student.txt");
	
	ifs >> s2;
	
	cout << "Name : " << s2.name << endl;
	cout << "Roll no: " << s2.rollNo << endl;
	cout << "Branch : " << s2.branch << endl;
	cout << "College : " << s2.college << endl;
	
	ifs >> s4;
	cout << "Name : " << s4.name << endl;
	cout << "Roll no: " << s4.rollNo << endl;
	cout << "Branch : " << s4.branch << endl;
	cout << "College : " << s4.college << endl;
	
	
		
	ifs.close();
	return 0;
}