#include<iostream>
//#include<bits/stdc++.h>
#include<windows.h>
#include<fstream>
#include<conio.h>
#include <cstdlib>
#include <ctime>
using namespace std;
//ch = getch()
struct f1{
    string jiazai_c;
    string muosi_c[3];
    string putong_c[4];
    string yx_cs_c[24];
}; 
    f1 fz;
void print(string zifu,int shijian);
void csh_bl();
void jiazai();
bool muoshi();
void cjzh(string &a,string &b);
void mima();
void putong();
void youxi_caishu();
int main(){
    csh_bl();
    jiazai();
    bool a=muoshi();
    if(a){
        system("cls");
        putong();
    }
    else{

    }
}
void print(string zifu,int shijian){
    for(int i=0;i<zifu.length();i++){
        cout<<zifu[i];
        Sleep(shijian);
    }
}
void csh_bl(){
    fz.jiazai_c="欢迎进入系统";
    fz.muosi_c[0]="模式\n";
    fz.muosi_c[1]=" 1---代表以普通身份运行\n";
    fz.muosi_c[2]=" 2---代表以管理员身份运行\n";
    fz.putong_c[0]="选择一个功能\n 1---代表创建账户\n 2---游戏\n 3---设置\n 4---辅助功能\n";
    fz.putong_c[1]="游戏\n";
    fz.putong_c[2]="1---代表猜数游戏\n";
    fz.putong_c[3]="设置\n 1---屏幕颜色\n 2---关机\n 3---退出\n";
    fz.yx_cs_c[0]="猜数游戏打开中\n";
    fz.yx_cs_c[1]="输入1,代表0~25之间\n";
    fz.yx_cs_c[2]="输入2,代表0~50之间\n";
    fz.yx_cs_c[3]="输入3,代表0~100之间\n";
    fz.yx_cs_c[4]="输入4,代表0~500之间\n";
    fz.yx_cs_c[5]="输入5,代表0~1000之间\n";
    fz.yx_cs_c[6]="输入6,代表0~5000之间\n";
    fz.yx_cs_c[7]="输入7,代表0~10000之间\n";
    fz.yx_cs_c[8]="输入7,代表0~10000之间\n";
    fz.yx_cs_c[9]="输入8,代表0~50000之间\n";
    fz.yx_cs_c[10]="输入9,代表0~100000之间\n";
    fz.yx_cs_c[11]="输入10,代表0~500000之间\n";
    fz.yx_cs_c[12]="输入其他数字,代表0~1000000之间\n";
    fz.yx_cs_c[13]="再输入一个数字\n";
    fz.yx_cs_c[14]="输入1,代表12次猜数机会\n";
    fz.yx_cs_c[15]="输入2,代表25次猜数机会\n";
    fz.yx_cs_c[16]="输入3,代表50次猜数机会\n";
    fz.yx_cs_c[17]="输入4,代表100次猜数机会\n";
    fz.yx_cs_c[18]="第";
    fz.yx_cs_c[19]="次猜数\n";
    fz.yx_cs_c[20]="猜数正确！恭喜你赢了！\n";
    fz.yx_cs_c[21]="猜数错误！大了！\n";
    fz.yx_cs_c[22]="猜数错误！小了！\n";
    fz.yx_cs_c[23]="游戏结束\n";
}
void youxi_caishu(){
    int a,b,c=0,e,i=0,d,w;
    bool xz=MessageBox(NULL,"欢迎游玩猜数游戏~~~\n祝您愉快","猜数游戏",MB_YESNO);
    if(xz==IDYES){
        print(fz.yx_cs_c[0],200);
        Sleep(5000);
        system("cls");   
        print(fz.yx_cs_c[1],200);
        print(fz.yx_cs_c[2],200);
        print(fz.yx_cs_c[3],200);
        print(fz.yx_cs_c[4],200);
        print(fz.yx_cs_c[5],200);
        print(fz.yx_cs_c[6],200);
        print(fz.yx_cs_c[7],200);
        print(fz.yx_cs_c[8],200);
        print(fz.yx_cs_c[9],200);
        print(fz.yx_cs_c[10],200);
        print(fz.yx_cs_c[11],200);
        print(fz.yx_cs_c[12],200);
        print(fz.yx_cs_c[13],200);
        print(fz.yx_cs_c[14],200);
        print(fz.yx_cs_c[15],200);
        print(fz.yx_cs_c[16],200);
        print(fz.yx_cs_c[17],200);
        cin>>w>>e;
        switch(w){
            case 1:d=25;break;
            case 2:d=50;break;
            case 3:d=100;break;
            case 4:d=500;break;
            case 5:d=1000;break;
            case 6:d=5000;break;
            case 7:d=10000;break;
            case 8:d=50000;break;
            case 9:d=100000;break;
            case 10:d=500000;break;
            default:d=1000000;break;     
        }
        switch(e){
            case 1:i=12;break;
            case 2:i=25;break;
            case 3:i=50;break;
            case 4:i=100;break;
        }
        srand((int)time(0));    
        a=rand()%d;
        system("cls");    
        do{
            c++;
            print(fz.yx_cs_c[18],200);
            cout<<c;
            print(fz.yx_cs_c[19],200);
            cin>>b;
            if(a==b){
                print(fz.yx_cs_c[20],200);
                Sleep(2000);        
                break;
            }
            if(a<b){
                print(fz.yx_cs_c[21],200);
                Sleep(1000);    
            }
            if(a>b){
                print(fz.yx_cs_c[22],200);
                Sleep(1000);
            }
            system("cls");
        }while(c<i);
        print(fz.yx_cs_c[23],200);
        Sleep(10000);                       
        system("cls");
    }
} 
void jiazai(){
    MessageBox(NULL,"欢迎来到由朱瑾文制作的系统(1.5)~~~\n祝您愉快","欢迎进入系统",MB_OK);
    print(fz.jiazai_c,100);
    system("cls");
    for(int q=1;q<=100;q++){
        cout<<"启动中\n";    
        for(int i=1;i<=q;i+=10){ 
            cout<<"█";
        }
        switch(q%10){
            case 1:{
                cout<<"▏";
                break;
            }
            case 2:
            case 3:{
                cout<<"▎";
                break;
            }
            case 4:{
                cout<<"▍";
                break;
            }
            case 5:{
                cout<<"▌";
                break;
            }
            case 6:{
                cout<<"▋";
                break;
            }
            case 7:
            case 8:{
                cout<<"▊";
                break;
            }
            case 9:{
                cout<<"▉";
                break;
            }       
        }
        cout<<'\n';
        cout<<'%'<<q;
        Sleep(5); 
        system("cls");
    }
    for(int q=1;q<=100;q++){
        cout<<"加载中\n";
        for(int i=1;i<=q;i+=10){ 
            cout<<"█";
        }
        switch(q%10){
            case 1:{
                cout<<"▏";
                break;
            }
            case 2:
            case 3:{
                cout<<"▎";
                break;
            }
            case 4:{
                cout<<"▍";
                break;
            }
            case 5:{
                cout<<"▌";
                break;
            }
            case 6:{
                cout<<"▋";
                break;
            }
            case 7:
            case 8:{
                cout<<"▊";
                break;
            }
            case 9:{
                cout<<"▉";
                break;
            }       
        }
        cout<<'\n';
        cout<<'%'<<q;
        Sleep(5); 
        system("cls");
    }
}
bool muoshi(){
    print(fz.muosi_c[0],50);
    print(fz.muosi_c[1],25);
    print(fz.muosi_c[2],25);
    int d;
    cin>>d;
    if(d==1){
        return 1;
    }
    if(d==2){
        return 0;
    }
    if(d==3){

    }
}
void mima(){
    string z1=" ",m1=" ",z2=" ",m2=" ";   
    freopen("系统附件.in","r",stdin);
    cin>>z2; 
    cin>>m2;
    fclose(stdin);
    for(int i=1;1;i++){
        cout<<"账户名称:"<<endl; 
        cin>>z2; 
        cout<<"账户密码:"<<endl; 
        cin>>m2;
        if(z2==z1){
            if(m1==m2){
                cout<<"欢迎"; 
                Sleep(5000);                
                break;
            }
            else{
                cout<<"账户密码错误!";
                Sleep(5000); 
                system("cls");          
            }
        }
        else{
            if(m1!=m2){
                cout<<"账户名称和账户密码错误!"; 
                Sleep(5000);                
                system("cls");
            }
            else{
                cout<<"账户名称错误!";
                Sleep(5000); 
                system("cls");          
            }
        }
        if(i%3==0){
            cout<<"请等"<<i/2<<"分钟后重试";
            Sleep(i/2*1000);
        } 
    }   
}
void cjzh(string &a,string&b){
    char e[100]="创建账户";
    print(e,50);
    cout<<'\n';
    char xz[100]="请输入你想要创建的账户名称:";
    print(xz,25);
    cin.ignore();
    getline(cin,a); 
    char x1[100]="请输入你想要创建的账户密码:";
    print(x1,25);
    getline(cin,b); 
    system("cls");
}
void putong(){
    int xz;
    int b=1;
    string zh="                              ",mm="                              ";
    while(1){
        print(fz.putong_c[0],25);
        cin>>xz; 
        switch(xz){
            case 1:{
                if(zh=="                              "&&mm=="                              "){
                    cjzh(zh,mm);
                }
                else{
                    print("404",300);
                }
                break;
            }
            case 2:{
                if(zh=="                              "&&mm=="                              "){
                    cout<<"请先登录\n";
                    Sleep(2000);
                    system("cls");
                    break; 
                }               
                int a;
                cin>>a;
                switch(a){
                    case 1:{
                        youxi_caishu();
                    }
                }
                break;
            }
            case 3:{
                if(zh=="                              "&&mm=="                              "){
                    cout<<"请先登录\n";
                    Sleep(1000);
                    system("cls");                  
                    break; 
                }
                int n; 
                cin>>n;
                switch(n) {
                    case 1:{
                        cout<<"未开放";
                        break; 
                        cout<<"字体\n  A是淡绿色\n  B是淡浅绿色\n  C是淡红色\n  D是淡紫色\n  E是淡黄色\n";
                        cout<<"背景色\n  0是黑色\n  1是蓝色\n  2是绿色\n  3是浅绿色\n  4是红色\n  5是紫色\n  6是黄色\n  7是白色\n  8是灰色\n  9是淡蓝色\n";
                        char a;
                        cin>>a;
                        int b;
                        cin>>b;
                        switch(b){
                            case 'A':{
                                switch(a){
                                    case 1:{
                                        system("color 1a");
                                        break;
                                    }
                                    case 2:system("color 2a");Sleep(10000);break;
                                    case 3:system("color 3a");Sleep(10000);break;
                                    case 4:system("color 4a");Sleep(10000);break;
                                    case 5:system("color 5a");Sleep(10000);break;
                                    case 6:system("color 6a");Sleep(10000);break;
                                    case 7:system("color 7a");Sleep(10000);break;
                                    case 8:system("color 8a");Sleep(10000);break;                               
                                    case 9:system("color 9a");Sleep(10000);break;
                                }
                                break;
                            }
                            case 'B':{
                                switch(a){
                                    case 1:system("color 1b");Sleep(10000);break;
                                    case 2:system("color 2b");Sleep(10000);break;
                                    case 3:system("color 3b");Sleep(10000);break;
                                    case 4:system("color 4b");Sleep(10000);break;
                                    case 5:system("color 5b");Sleep(10000);break;
                                    case 6:system("color 6b");Sleep(10000);break;
                                    case 7:system("color 7b");Sleep(10000);break;
                                    case 8:system("color 8b");Sleep(10000);break;                               
                                    case 9:system("color 9b");Sleep(10000);break;
                                }
                            }
                            case 'C':{
                                switch(a){
                                    case 1:system("color 1c");Sleep(10000);break;
                                    case 2:system("color 2c");break;
                                    case 3:system("color 3c");break;
                                    case 4:system("color 4c");break;
                                    case 5:system("color 5c");break;
                                    case 6:system("color 6c");break;
                                    case 7:system("color 7c");break;
                                    case 8:system("color 8c");break;                                
                                    case 9:system("color 9c");break;
                                }
                            }
                            case 'D':{
                                switch(a){
                                    case 1:{
                                        system("color 1d");
                                        break;
                                    }
                                    case 2:{
                                        system("color 2d");
                                        Sleep(10000);                                       
                                        break;
                                    }
                                    case 3:system("color 3d");break;
                                    case 4:system("color 4d");break;
                                    case 5:system("color 5d");break;
                                    case 6:system("color 6d");break;
                                    case 7:system("color 7d");break;
                                    case 8:system("color 8d");break;                                
                                    case 9:system("color 9d");break;
                                }
                            }
                        }
                        break; 
                    }                   
                    case 2:{
                        cout<<"确认要关机?(是选y)(不选n)\n";
                        char a;
                        cin>>a;
                        if(a=='y'||a=='Y'){

                            system("shutdown -s -t 25");
                        }                       
                        break;                  
                    }
                    case 3:{
                        exit(0);
                        break;
                    }
                }
                system("cls");
                break;
            }
            case 4:{
                cout<<"";
                break;
            }
            break;
        }   
        system("cls");
    }
    exit(0);
}
