#include<iostream>
using namespace std; //22A91A12B4

void fun1(int i){
	if (i>10) return;
	else cout<<i<<" ";
	fun1(i+1);
}
void fun2(int i){
	if(i<1) return;
	else cout<< i <<" ";
	fun2(i-1);
}
int factorial(int n){
	if(n==0 || n==1) return 1;
	else return n * factorial(n-1);
}
int countdigits(int n)
{
	if(n == 0) return 0;
	else return 1+countdigits(n/10);
}
int main()
{
	int i,n;
	fun1(1);
	cout<<endl;
	fun2(10);
	cout<<endl;
	cin>>n;
	int res=factorial(n);
	cout<<res<<endl;
	int countdigit=countdigits(1234567);
	cout<<countdigit<<endl;
	return 0;
}
