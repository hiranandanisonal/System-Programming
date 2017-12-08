#include<fstream>
#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>

int main()
{
    char  name[]="C:\\Users\\A4\\Desktop\\file1.txt" ,name1[]="C:\\Users\\A4\\Desktop\\file2.txt",x;
    
   
   
    fstream file;
    file.open(name,ios::in|ios::out);
    fstream file1;
    file1.open(name1,ios::in|ios::out);
    if(!file.is_open())
    {
                      cout<<"Error opening file to be read"<<endl;
    }
    if(!file1.is_open())
    {
                      cout<<"Error opening file to be written"<<endl;
    }
    
    
    
    while( file.get(x))
    {
                   
                    if(x==' ')
                    continue;
                    else
                    file1<<x;
                    
    }
    
    cout<<"Original file content"<<endl;
    file.clear();
   file.seekg (0, ios::beg);
    while(file.get(x))
    cout<<x;
    cout<<endl<<endl;
    cout<<"Content of the file after removal of blank spaces";
    file1.seekg (0, ios::beg);
    while(file1.get(x))
    cout<<x;
    
    
    file.close();
    file1.close();
    
    getch();
    return 0;
    
}
