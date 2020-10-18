#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <algorithm>

void bubbleSort (std::vector<int> &arrow);
void print (std::vector<int> &arrow);

int main(int argc, char *argv[])
{
    std::cout <<"1 zadanie"<< std::endl;
    std::vector<int> arrow;
    
    for(int i=1;i<argc;i++)
    {
        int a=atoi(argv[i]);
        arrow.push_back(a);
    }

    std::cout <<"Nieposortowane liczby:"<< std::endl;
    print(arrow);
    
    std::cout <<"\nPosortowane liczby:"<< std::endl;
    bubbleSort(arrow);
    print(arrow);
    
    return 0;
}

void print(std::vector<int> &arrow)
{
    for(int i=0;i<arrow.size();i++)
    {
        std::cout<<arrow[i]<<"\t";
    }
    std::cout<<std::endl;
}

void bubbleSort(std::vector<int> &arrow)
{
    bool x=true;
    while(x)
    {
        x=false;
        for(int i=0;i<arrow.size()-1;i++)
        {
            if(arrow[i]>arrow[i+1])
            {
                int temp=arrow[i];
                arrow[i]=arrow[i+1];
                arrow[i+1]=temp;
                x=true;
            }
        }
    }
}