#include <iostream>
using namespace std;
int main()
{
    cout<<"Welcome to c++ Libs!"<< endl;

    cout<<"Enter your Response to the below prompt."<<endl;
    cout<<"Your responses must be one word with no spaces."<<endl;
    string food,color,decimal,animal,name;
    int whole;
    char ch;
    cout<<"Enter a food." <<endl;
    cin>>food;
    cout<<"Enter a color." <<endl;
    cin>>color;
    cout<<"Enter a decimal Number." <<endl;
    cin>>decimal;
    cout<<"Enter an animal." <<endl;
    cin>>animal;
    cout<<"Enter a whole number." <<endl;
    cin>>whole;
    cout<<"Enter a Capital letter." <<endl;
    cin>>ch;
    cout<<"Enter your first Name." <<endl;
    cin>>name;
    cout<<"Dear Professor Erickson,"<<endl;
    cout<<"I am sorry that i am unable to turn in my assignment today."<<endl;
    cout<<"Last night i was busy cooking "<<food<< " for dinner."<<endl;
    cout<<"while it was cooking, the "<<food<<" turned a stunning "<<color<<" color."<<endl;
    cout<<"i would have given the meal a "<<decimal<<" out of 10 rating."<<endl;
    cout<<"Unfortunately my pet " <<animal<<" smelled the remains of the " <<food<<" on my computer."<<endl;
    cout<<"And my "<<animal<<" ate it."<<endl;
    cout<<"I am sorry again. I will submit it to GitHub in "<<whole<<" days."<<endl;
    cout<<"Please consider giving me a "<<ch<<" grade."<<endl;
    cout<<"Sincearly, "<<name<<endl;

    return 0;

}