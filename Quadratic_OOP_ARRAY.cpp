#include<iostream>
#include<cstdlib>
#include<math.h>

using namespace  std;

class Quadratic{
    float a, b, c;
public:
    Quadratic(){}
    Quadratic(float a1, float b1, float c1)
    {
        a = a1;
        b = b1;
        c = c1;
    }
    void set_a(float a1)
    {
        if(a1 == 0)
            throw a1;

        a = a1;
    }
    float get_a()
    {
        return a;
    }

    void set_b(float b1)
    {
        b = b1;
    }
    float get_b()
    {
        return b;
    }

    void set_c(float c1)
    {
        c = c1;
    }
    float get_c()
    {
        return c;
    }

    float deltaFunc();
};

float Quadratic::deltaFunc()
{
    return  (b * b - (4 * a * c));
}

int main()
{
    Quadratic  q[5];//an array of  five objects
    float a2, b2, c2, x1, x2;
    int i;


    for(i = 0; i < 5; i++)
    {
        cout << "Enter variable a: ";
        cin >>a2;
        try{
            q[i].set_a(a2);

        }catch(float a2){
            cout << "Error!! a must not be " << a2 << endl;
        }


        cout << "Enter variable b: ";
        cin >>b2;
        q[i].set_b(b2);

        cout << "Enter variable c: ";
        cin>>c2;
        q[i].set_c(c2);

        cout << endl << endl;
    }

    cout << endl << endl;

    for(i = 0; i < 5; i++)
    {
        if (q[i].deltaFunc() < 0)
        {
            cout<<"The equation has no answer!\n";
        }

        else if (q[i].deltaFunc() == 0)
        {
            x1 = -q[i].get_b()/(2 * q[i].get_a());
            cout << "The equation has two equal answers !\n";
            cout << "x1 = x2 = " << x1 << endl;
            //exit(0);
        }

        else{

            x1 = (-q[i].get_b() + sqrt(q[i].deltaFunc()))/(2 * q[i].get_a());
            x2 = (-q[i].get_b() - sqrt(q[i].deltaFunc()))/(2 * q[i].get_a());
            cout << "\nX1 = " << x1;
            cout << "\nX2 = " << x2 << endl;

        }
        cout << endl << endl;
    }



    return 0;
}
