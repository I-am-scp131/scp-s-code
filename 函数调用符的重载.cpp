#include<iostream>
#include<string>
using namespace std;
/*函数调用符号重载
重载后使用非常像函数调用，因此称为仿函数
仿函数使用十分灵活，没有固定写法*/
class Print{
	public:
		//没有固定写法，返回值和参数也不固定 
		void operator()(string name){
			cout<<name<<endl;
		}
		int operator()(int a,int b){
			return a+b;
		} 
}; 
class counter{
	public:
		int operator()(int a,char c,int b){
			switch(c){
				case '+':return a+b;break;
				case '-':return a-b;break;
				case '*':return a*b;break;
				case '/':return a/b;break;
				default:return 0;break;
			}
		}
}; 
int main(){
	Print print;
	print("张三");
	Print add;
	int sum=add(10,10); 
	cout<<"sum="<<sum<<endl;
	counter count;
	int arr=count(1,'*',2);
	cout<<"arr="<<arr<<endl;
	cout<<"匿名1+3="<<counter()(1,'+',3);//匿名函数对象 
	return 0;
} 
