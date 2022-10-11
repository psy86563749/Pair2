#include <iostream>
#include <stdio.h>
#include <string>
#include <sstream>
#include <fstream>
#define N 15
using namespace std;
ifstream ofs;
double count0=0,count1=0;//分子，分母
double absentp=0;//理想情况下的长期缺席者
 int a=90/N;
struct student{
    string sname,sex,smajor;
    double sgrade,seffi;
    string sattend[20];
}stu[92];
double s2d(string str)
{
    istringstream iss(str);
    double num;
    iss >> num;
    return num;
}
void func_handler()
{
            absentp=0;
            string line,number;
            //将CSV文件的数据一行行读入结构体
            for(int i=0;i<=91;i++){
            std::getline(ofs,line);
            istringstream is(line);
            std::getline(is,number,',');
            stu[i].sname=number;
            std::getline(is,number,',');
            stu[i].sex=number;
            std::getline(is,number,',');
            stu[i].smajor=number;
            std::getline(is,number,',');
            stu[i].sgrade=s2d(number);
            for(int k=0;k<20;k++)
            {
                std::getline(is,number,',');
                stu[i].sattend[k]=number;
            }
            std::getline(is,number,',');
            stu[i].seffi=s2d(number);
            }
            //分片，N=15，按序号排9个人一组;
            int nn;//记录组数
            double mm=0,min=0,aa=0,ss=0;
            double bb[2][50];
            for(int j=1;j<=N;j++)
            {
                mm=0;
                aa=0;
                for(int k=j*6-5;k<=j*6;k++)
                {
                    mm+=stu[k].sgrade;
                    aa+=stu[k].seffi;
                }
                ss=mm*0.2+aa*0.8;
                bb[0][j]=ss;
                bb[1][j]=j;
            }
            int cs=1,pp=0;
            //点名
            while(cs<=N)
            {
                count1+=90/N;
                count1+=absentp;
                double min=bb[0][1];
                nn=1;
                for(pp=2;pp<=N;pp++)
                {
                    if(min>bb[0][pp]) {min=bb[0][pp];nn=bb[1][pp];}
                }
                bb[0][nn]=100;
                for(int gg=nn*6-5;gg<=nn*6;gg++)
                {
                    if(stu[gg].sattend[cs-1]=="0"&& stu[gg].seffi<=0.3)
                    {
                        absentp++;
                        count0++;
                        for(int hh=cs;hh<20;hh++)
                        {
                            if(stu[gg].sattend[hh]=="0")
                            {count0++;}
                        }
                    }
                }
                if(absentp<=8) break;
                cs++;
            }
            count1+=(20-cs)*absentp;
}
int main()
{
    string c;
    for(int i=0;i<5;i++)
    {
         printf("请输入要点名的课程：\n");
         cin>>c;
       // 软件工程点名
          if(c=="软件工程"){
            ofs.open("/Users/panshiying/Desktop/软件工程.csv", ios::in);
            func_handler();
            ofs.close();
            ofs.clear();
            }
        //接口技术点名
           if(c=="接口技术"){
            ofs.open("/Users/panshiying/Desktop/接口技术.csv", ios::in);
            func_handler();
            ofs.close();
            ofs.clear();
           }
        //人工智能点名
           if(c=="人工智能"){
            ofs.open("/Users/panshiying/Desktop/人工智能.csv", ios::in);
            func_handler();
            ofs.close();
            ofs.clear();
            }
        //嵌入式点名
            if(c=="嵌入式"){
            ofs.open("/Users/panshiying/Desktop/嵌入式.csv", ios::in);
            func_handler();
            ofs.close();
            ofs.clear();
           }
        //图形学点名
           if(c=="图形学"){
            ofs.open("/Users/panshiying/Desktop/图形学.csv", ios::in);
            func_handler();
            ofs.close();
            ofs.clear();
            }
      }
        cout<<count0/count1;
    return 0;
}
