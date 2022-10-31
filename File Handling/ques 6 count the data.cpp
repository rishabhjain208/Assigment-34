#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{

    ifstream fin;
    ofstream fout;
    fout.open("D:/file/new.txt");
    fout<<"Hello kya haal chal hai tere";
    fout.close();
    fin.open("D:/file/new.txt");
    fin.seekg(0,ios_base::beg);

    int c = 0,sp = 0,l = 0;
    char ch;
    string line;
    while(!fin.eof())
    {
        getline(fin,line);
        fin.get(ch);
         if((ch >= 65 && ch <= 91) || (ch >= 97 && ch <= 123))
            c++;
        else if(ch == ' ')
            sp++;
        else
                l++;

    }
         cout<<"Total number of character in your file data = "<<c<<endl;
    cout<<"Total number of word in your file data = "<<(sp+1)<<endl;
    cout<<"Total number of line in your file data = "<<l;



    return 0;
}
