#include <iostream>

using namespace std;

void bmi(double weight, double growth);

int main()
{
    cout<<"Obliczanie BMI"<<endl;

    double weight, growth;

    cout<<"Podaj swoja mase ciala [kg]:\t";
    cin>>weight;
    cout<<"\nPodaj swoj wzrost [m]:\t";
    cin>>growth;
    cout<<endl;

    cout<<"Twoj wskaznik BMI:\t";
    bmi(weight,growth);

    return 0;
}

void bmi(double weight, double growth)
{
    double BMI;
    BMI=(weight)/(growth*growth);

    if(BMI<16)
    {
        cout<<"wyglodzenie"<<endl;
    }
    if(BMI>=16 && BMI<16.99)
    {
        cout<<"wychudzenie"<<endl;
    }
    if(BMI>=16.99 && BMI<18.49)
    {
        cout<<"niedowaga"<<endl;
    }
    if(BMI>=18.49 && BMI<24.99)
    {
        cout<<"wartosc prawidlowa"<<endl;
    }
    if(BMI>=24.99 && BMI<29.99)
    {
        cout<<"nadwaga"<<endl;
    }
    if(BMI>=29.99 && BMI<34.99)
    {
        cout<<"I stopien otylosci"<<endl;
    }
    if(BMI>=34.99 && BMI<39.99)
    {
        cout<<"II stopien otylosci"<<endl;
    }
    if(BMI>=40)
    {
        cout<<"otylosc skrajna"<<endl;
    }
}