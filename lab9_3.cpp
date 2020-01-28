//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cmath>
using namespace std;

int main(){
    ifstream source("D:\\lab9-2562-2-ColtenMore\\score.txt");
    string text;
    float pownum;
    float num[]={};
    float i=0;
    float sum;
    while(getline(source,text)){
        sum += atof(text.c_str());
        pownum += pow(atof(text.c_str()),2);
        i++;
        
    }
    float mean=sum/i;
    float SD= sqrt(1/(i)*pownum-pow(mean,2));

    cout << "Number of data = "<< i<<"\n";
    cout << "Mean = "<<mean<<"\n";
    cout << "Standard deviation = "<<SD;
}