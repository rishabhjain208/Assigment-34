#include<iostream>
#include<fstream>
using namespace std;
int main()
{

    ofstream fout;
    fout.open("D:/file/first.txt");
    if(!fout)
        cout<<"File not created";
    else{
          //  cout<<"Enter the data";
        fout<<"hello I am Rishabh Jain  ";
        cout<<"File created successfully";



    }







    return 0;
}
