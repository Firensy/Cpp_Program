#include<iostream>
#include<iomanip>
#include<stdlib.h>

using namespace std;

int main()
{
    system("CLS");
    int n;
    cout<<"Enter your integer :- ";
    cin>>n;

    system("CLS");
    for(int i = 1; i < 11; i++)
    {
        cout<<n<<setw(4-(n/10)+1)<<"  * "<<setw(4)<<i<<"  = "<<setw(4)<<(n*i)<<endl;
    }
    return 0;
}
