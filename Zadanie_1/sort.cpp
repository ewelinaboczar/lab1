#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <algorithm>

using namespace std;

void print (vector<int> &arrow);

int main(int argc, char *argv[])
{
    cout <<"1 zadanie"<< endl;
    vector<int> arrow;
    int size=arrow.size();
    
    for(int i=1;i<argc;i++)
    {
        int a=atoi(argv[i]);
        arrow.push_back(a);
    }

    cout <<"Nieposortowane liczby:"<< endl;
    print(arrow);
    
    cout <<"\nPosortowane liczby:"<< endl;
    sort(arrow.begin(),arrow.end());
    print(arrow);
    
    return 0;
}

void print(vector<int> &arrow)
{
    for(int i=0;i<arrow.size();i++)
    {
        cout<<arrow[i]<<"\t";
    }
    cout<<endl;
}

