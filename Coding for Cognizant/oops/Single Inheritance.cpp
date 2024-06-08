#include<iostream>
using namespace std;

class Animal {
    public:      // these all are atribute
    int age;
    int weight;
    
    public :      // method bana liya
    void speak() {
        cout<<"speaking "<<endl;
    }
    
};
   class Dog: public Animal{   // inhertie kar raha animal class se 
       
   
};

int main(){
    Dog d;     // obje bana liya 
    d.speak();
    cout<<d.age;
}

