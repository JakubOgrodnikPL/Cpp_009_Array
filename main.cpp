#include <iostream>

using namespace std;

float degree[5]; float sum(0); float average;

int main()
{
    cout<<"This program "<<endl;

    for(int i=0; i<5; i++)
    {
        cout<<endl<<"Give a "<<i+1<<" degree: ";
        cin>>degree[i];
        sum += degree[i];
    }
    average = sum / 5;
    cout<<endl<<"sum =  " << sum;
    cout<<endl<<"avarage =  " << average;
    cout<<"\nPress any key to exit";
    getchar();
    getchar();
   return 0;
}
