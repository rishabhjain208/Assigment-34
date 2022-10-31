#include<iostream>
#include<fstream>
using namespace std;
int main()
{

    ofstream fout;
    fout.open("D:/file/second.txt");
    fout<<"Hello how are you i am rj";
    fout.close();

    fstream fin;
    fin.open("D:/file/second.txt");
    fin.seekg(0,ios_base::beg);
    int sp = 0,c = 0;
    char ch;

    while(!fin.eof())
    {
        fin.get(ch);
        if((ch >= 65 && ch <= 91) || (ch >= 97 && ch <= 123))
            c++;
        else if(ch == ' ')
            sp++;
    }
    cout<<"Total number of character in your file data = "<<c<<endl;
    cout<<"Total number of word in your file data = "<<(sp+1);
    return 0;
}
