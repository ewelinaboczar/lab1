#include <iostream>
#include <fstream>

using namespace std;

void addition(double tab1[2][3], double tab2[2][3], double tab3[2][3]);

int main()
{
    double tab1[2][3]={0};
    double tab2[2][3]={0};
    double tab3[2][3]={0};

    cout<<"Zadanie 5"<<endl;
	ifstream file1,file2;
    file1.open("matrix1.txt",ios::in);
    file2.open("matrix2.txt",ios::in);

    if(!file1.good())
    {
        cout<<"Blad otwarcia pliku matrix1.txt"<<endl;
        return 0;
    }
    if(!file1.good())
    {
        cout<<"Blad otwarcia pliku matrix2.txt"<<endl;
        return 0;
    }

    for(int i=0;!file1.eof();i++)
    {
        for(int j=0; j<3;j++)
        {
            file1>>tab1[i][j];
            file2>>tab2[i][j];
        }
    }

    addition(tab1,tab2,tab3);

    file1.close();
    file2.close();
	return 0;
}

void addition(double tab1[2][3], double tab2[2][3], double tab3[2][3])
{
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            tab3[i][j]=tab1[i][j]+tab2[i][j];
            cout<<tab3[i][j]<<"\t";
        }
        cout<<endl;
    }
}
