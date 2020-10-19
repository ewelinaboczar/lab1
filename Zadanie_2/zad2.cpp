#include <iostream>
#include <string>

using namespace std;

int compareParts(string word);

int main(int argc, char *argv[])
{
    cout<<"Zadanie 2"<<endl;
    string word(argv[1]);

    int check=compareParts(word);

    if(check==1)
    {
        cout<<"Podane slowo: "<<word<<" jest palindromem."<<endl;
    }
    else
    {
        cout<<"Podane slowo: "<<word<<" nie jest palindromem."<<endl;
    }
    return 0;
}

int compareParts(string word)
{
    int size=word.size();

    for(int i=0;i<size/2;i++)
    {
        if(word[i]!=word[size-1-i]) return 0;
        else return 1;
    }
}