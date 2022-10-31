#include<iostream>
#include<fstream>
using namespace std;
int main()
{

    ifstream fin1,fin2;
    ofstream fout;
    fin1.open("D:/file/first.txt");
    fin2.open("D:/file/second.txt");
    char ch;
    fout.open("D:/file/merge.txt");
    while(fin1.eof()==0)
    {
        fin1.get(ch);
        fout<<ch;
    }
    while(fin2.eof()==0)
    {
        fin2.get(ch);
         fout<<ch;
    }
    cout<<"merge the two files successfully .";
    fin1.close();
    fin2.close();
    fout.close();

    return 0;
}
