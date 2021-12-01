
#include<iostream>
using namespace std;
int main()
{   int n,ARR[10],tar;
    cout<<"Enter the limit of Array :\n";
    cin>>n;
    cout<<"Enter the Array :\n";
    for(int i=0;i<n;i++)
    {
        cout<<"ARR["<<i<<"] :\n";
        cin>>ARR[i];
    }
    cout<<"THE ARRAR IS :";
    for(int j=o;j<n;j++)
    {
        cout<<ARR[i]<<endl;
    }
    cout<<"Enter Target :";
    cin>>tar;

//------------------------------------------------------
    for(k=0;k<n;k++)
    {
        if(ARR[k]+ARR[k+1]==tar)
        cout<<"["<<k<<" , "<<"] ----"<<tar;
    }

    return 0;
}