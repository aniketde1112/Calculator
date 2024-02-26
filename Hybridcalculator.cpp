#include <bits/stdc++.h>
using namespace std;
class Simple_Calculator
{
protected:
    float number1, number2;

public:
    void set_number(float x, float y)
    {
        number1 = x;
        number2 = y;
    }
    void operators()
    {
        cout << "1. sum" << endl
             << "2. subtraction" << endl
             << "3. multiplication" << endl
             << "4. division" << endl;
    }
    int chose_operator()
    {
        int z;
        cout << "enter the operation number = ";
        cin >> z;
        if (z == 1)
        {
            add();
        }
        else if (z == 2)
        {
            subtract();
            
        }
        else if (z == 3)
        {
            multiply();
            
        }
        else if (z == 4)
        {
            divide();
        }
        else {
            cout<<"invalid operator"<<endl;
        }
        return 0;
    }
    void add()
    {
        float sum = number1 + number2;
        cout << number1 << "+" << number2 << "=" << sum << endl;
    }
    void subtract()
    {
        float subtraction = number1 - number2;
        cout << number1 << "-" << number2 << "=" << subtraction << endl;
    }
    void multiply()
    {
        float multiplication = number1 * number2;
        cout << number1 << "*" << number2 << "=" << multiplication << endl;
    }
    void divide()
    {
        float division = number1 / number2;
        cout << number1 << "/" << number2 << "=" << division << endl;
    }
};
class Scientific_Calculator
{
protected:
    float number3, number4;

public:
    void set_number1(float m, float n)
    {
        number3 = m;
        number4 = n;
    }
    void operators1()
    {
        cout << "1. power" << endl
             << "2. factorial" << endl
             << "3. percentage" << endl;
    }
    int chose_operator1()
    {
        int q;
        cout << "enter the operation number = ";
        cin >> q;
        if (q == 1)
        {
            power();
        }
        else if (q == 2)
        {
        int t;
        cout<<"enter the number for factorial: ";
        cin>>t;
        int fact=factorial(t);
        cout<<t<<"! = "<<fact<<endl;
        }
        else if (q == 3)
        {
            percentage();
            
        }
        else {
            cout<<"invalid operator"<<endl;
        }
        return 0;
    }
    void power()
    {
        float u;
        float o;
        cout << "enter the number = ";
        cin >> u;
        cout << "enter the power = ";
        cin >> o;
        float power1 = pow(u, o);
        cout << u << "^" << o << "=" << power1 << endl;
    }
    int factorial(int t){
        
        if (t<=1){
            return 1;
        }
        return t*factorial(t-1);
        
    }
    void percentage(){
    int d,v;
    cout<<"enter two numbers for finding their percentage :-";
    cin >> d >> v;
    cout<<"the percentage of the two numbers are = "<<((d+v)/2)<<"%"<<endl;
    }
};
class Hybrid_Calculator :  public Simple_Calculator, public Scientific_Calculator{
    public:
    
       
        void operators(){
            Simple_Calculator :: operators();
        }
        int chose_operator(){
            Simple_Calculator :: chose_operator();
        }
        
        void operators1(){
            Scientific_Calculator :: operators1();
        }
        int chose_operator1(){
            Scientific_Calculator :: chose_operator1();
        }
};
int main()
{
    Simple_Calculator s;
    float a, b;
    cout<<"enter two numbers for simple calculations:-";
    cin >> a >> b;
    s.set_number(a, b);
    s.operators();
    s.chose_operator();
    Scientific_Calculator r;
    r.operators1();
    r.chose_operator1();
    Hybrid_Calculator i;
    i.set_number(a,b);
    i.operators();
    i.chose_operator();
    i.operators1();
    i.chose_operator1();
    return 0;
}