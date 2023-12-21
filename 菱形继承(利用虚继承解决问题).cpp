#include<iostream>
using namespace std;
/*菱形继承，使用虚继承，解决最后一个子类多继承引发问题
关键字：virtual*/
//        *******
//        *******
//       *       *
//	    *         *
//     *           *
//  ******       ******
//  ******       ******
//     *           *
//      *         *
//       *       *
//	     ********
//	     ********
class animal{
	public:
		int age;
};
//继承前加virtual关键字变为虚继承
//此时公共父类叫虚基类 
class sheep:virtual public animal{};
class tuo:virtual public animal{};
class sheeptuo:public sheep,public tuo{}; 
int main(){
	sheeptuo st;
	//通过作用域区分 
	st.sheep::age=8;
	st.tuo::age=28;
	st.age=18;//虚继承之前会报错 
	cout<<"st.sheep::age="<<st.sheep::age<<endl;
	cout<<"st.tuo::age="<<st.tuo::age<<endl;
	cout<<"st.age="<<st.age<<endl;
	//实际只需要一个年龄 
	return 0;
}
