#include<iostream>
using namespace std;#22A9A1A12B4
class student{
	private:
		string rollno;
		int backlogs;
	public:
	    setstudent(string r,int b){
			rollno=r;
			backlogs=b;
		}
	    getstudent()
		{
			cout<<rollno<<" "<<backlogs<<endl;
		}
};
int main()
{
	student s1;
	s1.setstudent("12b4",0);
	s1.getstudent();
}
