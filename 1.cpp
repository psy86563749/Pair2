#include <iostream>
#include <time.h>
#include "generateName.h"
#include <fstream>
#include <string.h>
#include <sstream>
#include <unistd.h>
#define LENTH 90
using namespace std;


string d2s(double d)
{
    string str1;
    stringstream ss;
    ss<<d;
    ss>>str1;
    return str1;
}
int main() 
{
    //软件工程
    fstream ofs("/Users/panshiying/Desktop/软件工程.csv", ios::out);
    srand(time(0));
    ofs << "姓名"<< "," <<"性别" << "," << "专业" << "," <<"绩点"<<","<<"出勤1"<<"," << "出勤2"<<"," <<"出勤3"<<"," << "出勤4"<<","<<"出勤5"<<"," << "出勤6"<<","<<"出勤7"<<"," << "出勤8"<<","<<"出勤9"<<"," << "出勤10"<<","<<"出勤11"<<"," << "出勤12"<<","<<"出勤13"<<"," << "出勤14"<<","<<"出勤15"<<"," << "出勤16"<<","<<"出勤17"<<"," << "出勤18"<<","<<"出勤19"<<"," << "出勤20"<<","<<"出勤率"<<endl;
    for (int i = 0; i < LENTH; i++) {
        double jd,efficiency;
     string name, sex, major,attendance;
     DataBaseRoll(name, sex, major, attendance,jd,efficiency);
     cout << name << "," << sex << "," << major << "," <<jd;
        for(int j=0;j<20;j++)
        {   
            cout<<","<<attendance[j];
        }
        cout<<","<<efficiency<<endl;
     ofs << name << "," << sex << "," << major << "," <<d2s(jd);
        for(int j=0;j<20;j++)
        {   
            ofs << "," <<attendance[j];
        }
        ofs << ","<<d2s(efficiency)<<endl;
        //ofs.close();
 }
    //接口技术
    ofstream ofs1("/Users/panshiying/Desktop/接口技术.csv", ios::out);
    sleep(3);
    srand(time(0));
    ofs1 << "姓名"<< "," <<"性别" << "," << "专业" << "," <<"绩点"<<","<<"出勤1"<<"," << "出勤2"<<"," <<"出勤3"<<"," << "出勤4"<<","<<"出勤5"<<"," << "出勤6"<<","<<"出勤7"<<"," << "出勤8"<<","<<"出勤9"<<"," << "出勤10"<<","<<"出勤11"<<"," << "出勤12"<<","<<"出勤13"<<"," << "出勤14"<<","<<"出勤15"<<"," << "出勤16"<<","<<"出勤17"<<"," << "出勤18"<<","<<"出勤19"<<"," << "出勤20"<<","<<"出勤率"<<endl;
     for (int i = 0; i < LENTH; i++) {
        double jd,efficiency;
    string name, sex, major,attendance;
    DataBaseRoll(name, sex, major, attendance,jd,efficiency);
    cout << name << "," << sex << "," << major << "," <<jd;
        for(int j=0;j<20;j++)
        {   
            cout<<","<<attendance[j];
        }
        cout<<","<<(double)efficiency<<endl;
     ofs1 << name << "," << sex << "," << major << "," <<d2s(jd);
        for(int j=0;j<20;j++)
        {   
            ofs1<<","<<attendance[j];
        }
        ofs1<< ","<<d2s(efficiency)<<endl;
      //  ofs1.close();
 }
    //嵌入式
     fstream ofs2("/Users/panshiying/Desktop/嵌入式.csv", ios::out);
     sleep(3);
     srand(time(0));
     ofs2 << "姓名"<< "," <<"性别" << "," << "专业" << "," <<"绩点"<<","<<"出勤1"<<"," << "出勤2"<<"," <<"出勤3"<<"," << "出勤4"<<","<<"出勤5"<<"," << "出勤6"<<","<<"出勤7"<<"," << "出勤8"<<","<<"出勤9"<<"," << "出勤10"<<","<<"出勤11"<<"," << "出勤12"<<","<<"出勤13"<<"," << "出勤14"<<","<<"出勤15"<<"," << "出勤16"<<","<<"出勤17"<<"," << "出勤18"<<","<<"出勤19"<<"," << "出勤20"<<","<<"出勤率"<<endl;
        for (int i = 0; i < LENTH; i++) {
            double jd,efficiency;
     string name, sex, major,attendance;
     DataBaseRoll(name, sex, major, attendance,jd,efficiency);
     cout << name << "," << sex << "," << major << "," <<jd;
            for(int j=0;j<20;j++)
            {   
                cout<<","<<attendance[j];
            }
            cout<<","<<(double)efficiency<<endl;
     ofs2 << name << "," << sex << "," << major << "," <<d2s(jd);
            for(int j=0;j<20;j++)
            {   
                ofs2<<","<<attendance[j];
            }
            ofs2<< ","<<d2s(efficiency)<<endl;
 }
    //图形学
     fstream ofs3("/Users/panshiying/Desktop/图形学.csv", ios::out);
     sleep(3);
        srand(time(0));
        ofs3 << "姓名"<< "," <<"性别" << "," << "专业" << "," <<"绩点"<<","<<"出勤1"<<"," << "出勤2"<<"," <<"出勤3"<<"," << "出勤4"<<","<<"出勤5"<<"," << "出勤6"<<","<<"出勤7"<<"," << "出勤8"<<","<<"出勤9"<<"," << "出勤10"<<","<<"出勤11"<<"," << "出勤12"<<","<<"出勤13"<<"," << "出勤14"<<","<<"出勤15"<<"," << "出勤16"<<","<<"出勤17"<<"," << "出勤18"<<","<<"出勤19"<<"," << "出勤20"<<","<<"出勤率"<<endl;
     for (int i = 0; i < LENTH; i++) {
            double jd,efficiency;
     string name, sex, major,attendance;
     DataBaseRoll(name, sex, major, attendance,jd,efficiency);
     cout << name << "," << sex << "," << major << "," <<jd;
            for(int j=0;j<20;j++)
            {   
                cout<<","<<attendance[j];
            }
            cout<<","<<efficiency<<endl;
     ofs3 << name << "," << sex << "," << major << "," <<d2s(jd);
            for(int j=0;j<20;j++)
            {   
                ofs3<<","<<attendance[j];
            }
            ofs3<< ","<<d2s(efficiency)<<endl;
 }
    //人工智能
    fstream ofs4("/Users/panshiying/Desktop/人工智能.csv", ios::out);
    sleep(3);
    srand(time(0));
        ofs4 << "姓名"<< "," <<"性别" << "," << "专业" << "," <<"绩点"<<","<<"出勤1"<<"," << "出勤2"<<"," <<"出勤3"<<"," << "出勤4"<<","<<"出勤5"<<"," << "出勤6"<<","<<"出勤7"<<"," << "出勤8"<<","<<"出勤9"<<"," << "出勤10"<<","<<"出勤11"<<"," << "出勤12"<<","<<"出勤13"<<"," << "出勤14"<<","<<"出勤15"<<"," << "出勤16"<<","<<"出勤17"<<"," << "出勤18"<<","<<"出勤19"<<"," << "出勤20"<<","<<"出勤率"<<endl;
    for (int i = 0; i < LENTH; i++) {
            double jd,efficiency;
    string name, sex, major,attendance;
    DataBaseRoll(name, sex, major, attendance,jd,efficiency);
    cout << name << "," << sex << "," << major << "," <<jd;
            for(int j=0;j<20;j++)
            {   
                cout<<","<<attendance[j];
            }
            cout<<","<<(double)efficiency<<endl;
    ofs4 << name << "," << sex << "," << major << "," <<d2s(jd);
            for(int j=0;j<20;j++)
            {   
                ofs4<<","<<attendance[j];
            }
            ofs4<< ","<<d2s(efficiency)<<endl;
 }
 //system("pause");
 return 0;
}
