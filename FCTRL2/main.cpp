#include <iostream>

using namespace std;

void fctrl(int[],int,int);

int main()
{
    int num,f_num;
    int arr[200]={0};
    cout<<"Enter any number";
    cin>>num;
    f_num=num-1;
    int i;
    for(i=0;num!=0;++i,num/=10)
        {arr[i]=num%10;

        fctrl(arr,i,f_num);
        }
}

void fctrl(int arr[],int m,int f_num)
{
    int x,temp=0;
    int i=0;
    while(f_num>1)
    {
        do{
            x=arr[i]*f_num+temp;
            arr[i]=x%10;
            temp=x/10;
            ++i;

        }while(temp!=0||i<=m);
        m=--i;
        --f_num;
    }
        while(m>=0)
        {
            cout<<arr[m];
            --m;
        }
    }
