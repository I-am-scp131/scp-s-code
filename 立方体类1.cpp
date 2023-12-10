#include<iostream>
#include<stdlib.h>
//新建一个立方体类 
class Cube{
	//私有成员 
	int l;
	int w;
	int h;
	//对外接口 
	public:
		//设置长宽高 
		void setlwh(int m_l,int m_w,int m_h){
			l=m_l;
			w=m_w;
			h=m_h;
		}
		//获取长宽高
		int* getlwh(){
			int *arr=(int*)malloc(3*sizeof(int));
			arr[0]=l;arr[1]=w;arr[2]=h;
			return arr;
		} 
		//获取面积 
		int getS(){
			return 2*l*w+2*l*h+2*w*h;
		}
		//获取体积 
		int getV(){
			return l*w*h;
		}
		bool isSame(Cube &c){
			if(l==c.getlwh()[0]&&w==c.getlwh()[1]&&h==c.getlwh()[2])
				return true;
			return false;
		}
};
bool isSame(Cube &c1,Cube &c2){
	if(c1.getlwh()[0]==c2.getlwh()[0]&&c1.getlwh()[1]==c2.getlwh()[1]&&c1.getlwh()[2]==c2.getlwh()[2])
		return true;
	return false;
} 
int main(){
	Cube c1,c2;
	c1.setlwh(10,10,10);
	c2.setlwh(10,10,11);
	std::cout<<"其面积为"<<c1.getS()<<"\n"<<"其体积为"<<c1.getV();
	//用全局函数判断立方体是否相等
	if(isSame(c1,c2))
		std::cout<<"两立方体相等"<<"\n";
	else std::cout<<"两立方体不相等"<<"\n";
	//用成员函数判断立方体是否相等
	if(c1.isSame(c2))
		std::cout<<"成员函数判断：两立方体相等"<<"\n";
	else std::cout<<"成员函数判断：两立方体不相等"<<"\n";
	return 0;
} 
