#include<iostream>
#include<cstdlib>
#include<math.h>

using namespace  std;

template<class V> class Quadratic{
    V a, b, c;
public:
    Quadratic(){}
    Quadratic(V a1, V b1, V c1)
    {
        a = a1;
        b = b1;
        c = c1;
    }
    //Accessor methods for a
    void set_a(V a1);
    V get_a();

    //Accessor methods for b
    void set_b(V b1);
    V get_b();

    //Accessor methods for c
    void set_c(V c1);
    V get_c();

    //deiscriminant func prototype
    V deltaFunc();
};

 //set and get for a
template< class V >void Quadratic< V >:: set_a(V a1)
    {
        if(a1 == 0)
            throw a1;

        a = a1;
    }

template< class V > V Quadratic< V >::get_a()
    {
        return a;
    }

 //set and get for b
template< class V > void Quadratic< V >::set_b(V b1)
    {
        b = b1;
    }
template< class V > V Quadratic< V >::get_b()
    {
        return b;
    }


 //set and get for c
template< class V > void  Quadratic< V >::set_c(V c1)
    {
        c = c1;
    }

template< class V > V Quadratic< V >::get_c()
    {
        return c;
    }

    //The discriminant function
template< class V > V  Quadratic< V >::deltaFunc()
{
    return  (b * b - (4 * a * c));
}

int main()
{
    Quadratic<int>  q1;
    int a2, b2, c2, x1, x2;

    cout << "Enter variable a: ";
    cin >>a2;
    try{
        q1.set_a(a2);

    }catch(int a2){
        cout << "Error!! a must not be " << a2 << endl;
    }


    cout << "Enter variable b: ";
    cin >>b2;
    q1.set_b(b2);

    cout << "Enter variable c: ";
    cin>>c2;
    q1.set_c(c2);

    if (q1.deltaFunc() < 0)
    {
        cout<<"The equation has no answer!\n";
        exit(0);
    }

    else if (q1.deltaFunc() == 0)
    {
        x1 = -q1.get_b()/(2 * q1.get_a());
        cout << "The equation has two equal answers !\n";
        cout << "x1 = x2 = " << x1 << endl;
        //exit(0);
    }

    else{

        x1 = (-q1.get_b() + sqrt(q1.deltaFunc()))/(2 * q1.get_a());
        x2 = (-q1.get_b() - sqrt(q1.deltaFunc()))/(2 * q1.get_a());
        cout << "\nX1 = " << x1;
        cout << "\nX2 = " << x2 << endl;

    }


    return 0;
}

