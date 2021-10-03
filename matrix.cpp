#include<iostream>
using namespace std;
int main()
{
    int row1, col1, row2, col2;
    cout<<"Enter no. of rows and columns of the matrix 1 :- "<<endl;
    cin>>row1>>col1;
    cout<<"Enter no. of rows and columns of the matrix 2 :- "<<endl;
    cin>>row2>>col2;
    int m1[row1][col1], m2[row2][col2], mul[col1][row2];

    // checking if col1 and row2 is same or not
    if(row2 != col1){
        cout<<"Multiplication cannot be performed"<<endl;
        return 0;
    }

    // Inputting Matrix 1
    cout<<"Now, Enter the elements of first matrix :- "<<endl;
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            cin>>m1[i][j];
        }
    }

    // Inputting Matrix 2
    cout<<"Now, Enter the elements of second matrix :- "<<endl;
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cin>>m2[i][j];
        }
    }

    // Matrix Multiplication code
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            mul[i][j] = 0;
            for (int k = 0; k < row2; k++)
            {
                mul[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
    

    // Printing Multiplication Code
    cout<<endl<<"The result of the above multiplication is :- "<<endl;
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cout<<"\t"<<mul[i][j];
        }
        cout<<endl;
    }
    
    return 0;
}