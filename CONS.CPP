#include<iostream.h>
#include<conio.h>
class demo
{
  int x;

   public:
	  demo()
	  {
	   cout<<"\t constructor with no parameter";
	  }

	  demo(int a)
	  {
	   x=a;
	   cout<<"\n\t constructor with one parameter x="<<x;
	    cout<<"\n\t square of x is"<<x*x;
	  }

	  demo(int a,int b)
	  {
	   cout<<"\n\t constructor with two parameter a="<<a<<"b="<<b;
	    cout<<"\n\t addtion is a+b="<<a+b;
	  }

	  demo(int a,int b,int c)
	  {
	   cout<<"\n\t constructor with three parameter a="<<a<<"b="<<b<<"c="<<c;
	    cout<<"\n\t addtion is a+b+c="<<a+b+c;
	  }

	  demo(demo &d)
	  {
	   cout<<"\n\t copy of construtor is x=d.x="<<d.x;
	   x=d.x;
	    cout<<"\n\t the copied constructor is"<<x;
	  }
};
 void main()
  {
  clrscr();
  demo d1;
  demo d2(10);
  demo d3(20,30);
  demo d4(30,40,60);
  demo d5(d2);
  getch();
  }
