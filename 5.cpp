#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    char  str[60], *p;

    cout << "Input about 20 characters of string\n";
    cin >> s;
    int l=0;
    for(;s[l]!='\0';l++);
    // Pointer variable refers to address of string 
    p=str;
    cout<<"\nTHE NAME IS: "<<p<<"\n \n";
    // Show string by shifting top character of string to right
    for(int i=0;i<l;i++)
    {
    	cout<<p<<endl;
    	p++;
    }
    
    return (0);
}
