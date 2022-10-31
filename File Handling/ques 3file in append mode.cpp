#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    ofstream fout;
    ifstream  fin;
    string data;
    fin.open("D:/file/first.txt");
    fout.open( "D:/file/first.txt",ios::app);
    if(fin.is_open())
    {
        fout<<"...........\nWrite a C++ program to open an output file 'a.txt' and append data to it.\n";
        cout<<"Data has been append successfully\n";
    }
    fin.close();
    fout.close();
    return 0;
}
