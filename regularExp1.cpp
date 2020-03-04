#include<iostream>
#include<string>
using namespace std;
int main()
{
    cout<<endl;
    cout<<"Regular Expression: ((00)*1+2*)"<<endl;
    
    while(1)
    {
    cout<<"Enter the string:";
    string temp;
    cin>>temp;
    int len=temp.length();
    int i=0;
    int temp1=0,temp2=0,temp3=0;
    while(temp[i]=='0'&&i<=len)
    {
        temp1++;
        i++;
    }
    while(temp[i]=='1'&&i<=len)
    {
        temp2++;
        i++;
    }
    while(temp[i]=='2'&&i<=len)
    {

        temp3++;
        i++;
    }
    int sum=temp1+temp2+temp3;
    if((temp1%2==0)&&(temp2>=1)&&(temp3>=0)&&(sum==len))
    {
        cout<<"Accepted"<<endl;
    }
    else
        cout<<"Not Accepted"<<endl;
    }
    return 0;
}