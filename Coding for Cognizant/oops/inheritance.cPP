#include<iostream>
using namespace std;

class human {
    public:      // these all are property or atribute or say state
    int height;
    int age ;
    int weight;
    
};

class male : public human { // male class inherite to human in public mode
    public:
    string color;    // one more attribute add kia 
    void sleep (){    // make a function 
        cout<<"male sleeping "<<endl;
    }
};

int main()
{
    male object1;
    cout<<object1.age // male object1 ke acording i can access age because // male had inherite the all data or say atribute from human 
    
}

