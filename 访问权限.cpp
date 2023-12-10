#include<stdio.h>
#include<string.h>
//访问权限（私有、公共、保护） 
class person{
	public:
		char name[20];
	protected:
		char car[20];
	private:
		long password;
		void fuc(){
			strcpy(name,"张三");
			strcpy(car,"拖拉机");
			password=123456; 
		}
}; 
int main(){
	person p1;
	strcpy(p1.name,"李四");//public类内类外均可访问 
	//strcpy(p1.car,"奔驰"); protected类内可访问，类外不可访问(子类可访问) 
	//p1.password=654321; private类内可访问，类外不可访问 (子类不可访问) 
	//p1.func(); 
	return 0;
}
