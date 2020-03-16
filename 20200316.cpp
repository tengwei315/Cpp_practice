

//验证值是如何返回的

#include<iostream>
#include<string>

using namespace std;

string make_p(size_t ctr,const string &word, const string &ending)
{
	return (ctr>1)? word + ending : word;
}

string make_p1(size_t ctr,const string word, const string ending)
{
	return (ctr>1)? word + ending : word;
}

//编译不通过，不要返回局部对象的引用或指针 
const string &make_p2(size_t ctr,const string &word, const string &ending)
{
	return (ctr>1)? word + ending : word;
}



int test(int a,int b)
{
	int d = a;
	int e = b;
//	return (a>b) ? a:b;

	return (d>e) ? d:e;
}


void reset(const int &i) 
{
	cout<<"i"<<i<<"\n";
	 
}
//尽量使用常量引用

void find(const string &s)
{
	cout<<"string = "<<s<<endl;
 } 



int main()
{
	string p = make_p(5,"hello","world");
	cout<<"p= "<<p<<"\n";
	
	string p1 = make_p1(5,"hello","world");
	cout<<"p1= "<<p1<<"\n";
	
//	const string p2 = make_p2(5,"hello","world");
//	cout<<"p2= "<<p2<<"\n";
	
	int c = test(5,6);
	cout<<"Max = "<<c<<"\n";
//	cout<<"Max = "<<d<<endl;
	cout<<"Max = "<<test(5,6)<<"\n";
	
	int j = 44;
	reset(j);
	cout <<"j= "<<j<<"\n";
	
	
	int i =0;
	const int ci = i;
	reset(ci);
	
	
//	find("hello world");
	find("hello world");
	
	
	
	
	
	return 0; 



} 
