#include<iostream>
#include"WuZiQi.h"
using namespace std;

int main()
{
	system("color 30"); 
	WuZiQi game;
	
	game.print();
	int flag;
	cout<<"��ѡ��ִ�ڻ���ִ��(ִ������! 1:ִ��,2:ִ��.):";
	cin>>flag;
	while(flag!=1 && flag!=2)
	{
		cout<<"����������:(����1ѡ��ִ��,2ѡ��ִ��):";
		cin>>flag;
	}
	game.play(flag);
	
	return 0;
}


