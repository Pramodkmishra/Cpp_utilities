//for complex arithmetic

#include<iostream>


using namespace std;
class Complex
{
private:
    int a,b;

public:
    Complex()
    {
    a=0;
    b=0;
    }
    Complex(int x,int y)
    {
    a=x;
    b=y;
    }
    Complex operator+(Complex obj)
    {
    Complex temp;
    temp.a=a+obj.a;
    temp.b=b+obj.b;
    return temp;
    }
    Complex operator-(Complex obj)
    {
    Complex temp;
    temp.a=a-obj.a;
    temp.b=b-obj.b;
    return temp;
    }

      Complex operator*(int t)
    {
    Complex temp;
    temp.a=a*t;
    temp.b=b*t;
    return temp;
    }

    Complex operator*(Complex obj)
    {
    Complex temp;
    temp.a=a*obj.a-b*obj.b;
    temp.b=b*obj.a + a*obj.b;
    return temp;
    }
    /*
    Complex c=-c1;
    Complex c=c1.operator-()
    */
    Complex operator-()//for conjugate
    {
    Complex temp;
    temp.a=a;
    temp.b=-b;
    return temp;
    }
    Complex operator^(int n)
    {
	Complex temp;
	temp.a=a;
	temp.b=b;
	Complex temp2(1,0);
	for(int i=1;i<=n;i++)
		{
		temp2=temp2*(temp);
		}
	return temp2;
    }

    bool operator==(Complex c)//for conjugate
    {
     if(a==c.a && b==c.b)
     return true;
     else return false;
    }
    int getReal()
    {return a;}
    int getImage()
    {return b;}
    void print()
    {
    if(b>0)
    cout<<a<<" + "<<b<<"i"<<endl;
    else
    cout<<a<<" - "<<(-1*b)<<"i"<<endl;
    }
};


int main()
{
Complex c1=Complex(3,4);
c1.print();
c1=c1^2;
c1.print();

Complex c2=Complex(3,-4);
c2.print();
c2=c2^2;
c2.print();

Complex c3=Complex(3,4);
c3.print();
c3=c3^5;
c3.print();



}

