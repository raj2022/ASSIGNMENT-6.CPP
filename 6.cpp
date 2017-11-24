#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    char  str[200], *o;

    cout << "Input about 20 characters of string\n";
    cin >> str;
    int len=0;
    for(;str[len]!='\0';len++);
    // Pointer variable refers to address of string 
    o=str+(len-1);
    cout<<"THE REQUIRED OUTPUT: \n\n";
    // Show string by shifting top character of string to right
    for(int i=0;i<len;i++)
    {
    	cout<<o<<endl;
    	o--;
    }
    
    return (0);
