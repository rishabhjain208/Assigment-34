#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream fin;
    ofstream fout;
    fin.open( "D:/file/first.txt");
    fout.open("D:/file/second.txt");

    char ch;
    while(!fin.eof())
    {
        fin.get(ch);
        if(ch >= 97 && ch <= 122)
        {
            ch = toupper(ch);
        }
         else if(ch >= 65 && ch <= 91)
        {
            ch = tolower(ch);
        }
        fout<<ch;
    }
    cout<<"Data copied successfully \n";
    fin.close();
    fout.close();
    return 0;
}
