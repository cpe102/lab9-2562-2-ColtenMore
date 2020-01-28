//cout << "-------------------- SOTUS ---------------------";
//cout << textline;
//cout << "-------------------- SOTUS ---------------------";
//Don't forget to change cout to output filestream
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    string text;
    ifstream source("D:\\lab9-2562-2-ColtenMore\\cheerbook.txt");;
    ofstream copy("D:\\lab9-2562-2-ColtenMore\\cheerbook_copy.txt");
    copy<<"-------------------- SOTUS ---------------------\n";
    while(getline(source,text)){
       copy << text << "\n";
    }
    source.close();
    copy<<"-------------------- SOTUS ---------------------";
    copy.close();
}