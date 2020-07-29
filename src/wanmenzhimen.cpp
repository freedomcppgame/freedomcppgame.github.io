#include<iostream>
#include<cstdio>
using namespace std;
int main() {
	cout<<"注意，本程序只能输入数字，输入字母或其他奇奇怪怪的东西将会使程序崩溃"<<endl;
	int key=0,jiu=0,hui=0,x,zhen=0;
hou:
	if(hui==0) {
hui:
		cout<<"你的面前出现了一个按钮"<<endl;
		cout<<"其他:按下它   1:不按（作死）"<<endl;
		cin>>x;
		if(x==1) {
			cout<<"本区域包含危险代码，已被@自由游戏基金会和谐掉\n";
			//system("shutdown -s -t 100");
			return 0;
		}
		system("cls");
		cout<<"你的面前出现了两扇门"<<endl;
		cout<<"1:进入金光闪闪的门"<<endl;
		cout<<"2:进入平平无奇的门"<<endl;
		cin>>x;
		system("cls");
		if(x==1) {
chou:
			cout<<"你的面前有两道路"<<endl;
			cout<<"1:获得金钱   2：掌握大权"<<endl;
			cin>>x;
			system("cls");
			if(x==1) {
				cout<<"你的面前只有一条路:用钱砸死作者"<<endl;
				cout<<"作者被你砸进医院了，暂时没人放你出来了"<<endl;
				cout<<"1:返回         2:睡觉"<<endl;
				cin>>x;
				system("cls");
				if(x==1)
					goto hui;
				else {
					cout<<"1:返回    2:继续睡";
					cin>>x;
					system("cls");
					if(x==2) {
						cout<<"1:返回    2:我还要睡";
						cin>>x;
						system("cls");
						if(x==1)
							goto hui;
						else {
							cout<<"原来这一切都是梦！还没按下按钮！"<<endl;
							cout<<"你只有一个选择:按下按钮"<<endl;
							cin>>x;
							zhen=1;
							goto hui;
						}
					} else
						goto hui;
				}
			} else {
				cout<<"你获得了游戏GM（管理员）权限，可以开启隐藏关卡"<<endl;
				cout<<"是否开启？（1:不开   2:开）"<<endl;
				cin>>x;
				system("cls");
				if(x==1)
					goto hui;
				else {
					cout<<"你的面前出现了一个少女，她被囚禁了"<<endl;
					cout<<"你只有一个选择:与她对话"<<endl;
					cin>>key;
					system("cls");
					if(key==1) {
						cout<<"你把她救了出来!"<<endl;
						hui=1;
						cout<<"她说她要成为你老婆,你愿意吗？"<<endl;
						cout<<"1:愿意   2:不愿意"<<endl;
						cin>>x;
						system("cls");
						if(x==2) {
							cout<<"活该单身！"<<endl;
							hui=0;
							key=0;
							jiu=0;
							zhen=0;
							goto hui;
						}
						cout<<"好的，你们有了一个幸福的生活"<<endl;
						goto hou;
					}
					cout<<"她说:你好，请救我出去，你就是我，我就是你，否则你也通不了关"<<endl;
					cout<<"你只有一个选择:接受她的请求"<<endl;
					if(zhen==1)
						jiu=1;
					goto hui;
				}
			}
		} else {
			cout<<"你的面前有两条路"<<endl;
			cout<<"1:挖宝藏    2:跳进一个深不见底的洞"<<endl;
			cin>>x;
			system("cls");
			if(x==2) {
				cout<<"你摔死了！触发关机"<<endl;
				cout<<"本区域包含危险代码，已被@自由游戏基金会和谐掉\n";
				//system("shutdown -s -t 1");
				return 0;
			}
wa:
			cout<<"你来到了挖宝地点"<<endl;
			cout<<"1:开始挖   2:返回"<<endl;
			cin>>x;
			system("cls");
			if(x==2)
				goto hui;
			if(jiu==1) {
				cout<<"你挖到了钥匙!"<<endl;
				key=1;
				goto hui;
			} else {
				cout<<"你什么都没挖到！"<<endl;
				cout<<"1:继续挖  2:返回"<<endl;
				cin>>x;
				system("cls");
				if(x==1)
					goto wa;
				else
					goto hui;
			}
		}
	} else {
		cout<<"你们买了一套房"<<endl;
		cout<<"你们累了"<<endl;
		cout<<"你们来到了床上"<<endl;
		cout<<"1:嘿嘿嘿~    2:就不"<<endl;
		cin>>x;
		system("cls");
		if(x==2) {
			cout<<"活该断子绝孙！"<<endl;
			jiu=zhen=key=hui=0;
			goto hui;
		}
		cout<<"你们有了一个孩子"<<endl;
shenghuo:
		cout<<"1:继续幸福生活  2:逃离这"<<endl;
		cin>>x;
		system("cls");
		if(x==1)
			goto shenghuo;
		cout<<"你逃离了家"<<endl;
		cout<<"你的妻子后来生了重病，死了"<<endl;
		cout<<"你的孩子无人照顾，死了"<<endl;
		cout<<"1:时光回溯！  2:就这样吧，至少我自由了"<<endl;
		cin>>x;
		system("cls");
		if(x==2)
			goto ban;
		cout<<"你回到了那个按钮前"<<endl;
		cout<<"你只有一个选择:再次按下它"<<endl;
		cin>>x;
		system("cls");
		cout<<"1:走金光闪闪的门"<<endl;
		cout<<"2:走平平无奇的门"<<endl;
		cin>>x;
		system("cls");
		if(x==1) {
			zhen=hui=key=jiu=0;
			goto chou;
		}
		cout<<"你的面前只有两条路"<<endl;
		cout<<"1:再次幸福生活，不追求自由了   2:挖宝"<<endl;
		cin>>x;
		system("cls");
		if(x==1)
			goto si;
		cout<<"你和妻子一起挖宝"<<endl;
		cout<<"你挖到了“克隆宝石”！"<<endl;
		cout<<"1:克隆一个妻子陪着自己，把自由留给真的妻子"<<endl;
		cout<<"2:克隆一个自己陪着妻子，把自由留给自己"<<endl;
		cin>>x;
		system("cls");
		if(x==1)
			goto si;
		else
			goto zhong;
	}
ban:
	cout<<"60分结局，非最终结局，不算通关，你抛弃了家人，有深重的愧疚感，虽然迎来了自由"<<endl;
	system("pause");
	return 0;
si:
	cout<<"80分结局，非最终结局，不算通关，你虽陪伴着家人度过余生，但也没有了追求自由的权利"<<endl;
	system("pause");
	return 0;
zhong:
	cout<<"满分结局，最终结局，通关，你不仅有了追求自由的权利，还不亏欠了任何一个人"<<endl;
	system("pause");
	return 0;
}
