#include<iostream>
using namespace std;
/*���μ̳У�ʹ����̳У�������һ�������̳���������
�ؼ��֣�virtual*/
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
//�̳�ǰ��virtual�ؼ��ֱ�Ϊ��̳�
//��ʱ�������������� 
class sheep:virtual public animal{};
class tuo:virtual public animal{};
class sheeptuo:public sheep,public tuo{}; 
int main(){
	sheeptuo st;
	//ͨ������������ 
	st.sheep::age=8;
	st.tuo::age=28;
	st.age=18;//��̳�֮ǰ�ᱨ�� 
	cout<<"st.sheep::age="<<st.sheep::age<<endl;
	cout<<"st.tuo::age="<<st.tuo::age<<endl;
	cout<<"st.age="<<st.age<<endl;
	//ʵ��ֻ��Ҫһ������ 
	return 0;
}
