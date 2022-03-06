//Rectangle Problem//

#include<iostream>
using namespace std;
class Rectangle
{
            float l,w;
            public :           
            void setlength(float len)
            {
                        l=len;
            }
            void setwidth(float width)
            {
                        w=width;
            }
            float area()
            {
                        return l*w;
            }
            float perimeter()
            {
                        return (2*(l+w));
            }

            void show()
            {
                        cout<<"\n length "<<l;
                        cout<<"\n breath "<<w;
            }
            void compare(Rectangle ob)
            {
                        if(l>ob.l)
                                    cout<<"\n  Maximum length of 1st Rectangle ";
                        else cout<<"\n   Maximum length of 2nd Rectangle  ";
                        if(w>ob.w)
                                    cout<<"\n   Maximum width of 1st Rectangle  ";
                        else cout<<"\n   Maximum width of 2nd Rectangle  ";
            }
            void compare(float a1,float a2)
            {
                        if(a1>a1)
                                    cout<<"\n Area of First rectangle is greater than 2nd.";
                        else
                                    cout<<"\n Area of Second rectangle is greater than 1st. ";
            }
};

main()
{
            Rectangle ob1,ob2;
            float l1,l2,w1,w2;
            cout<<"\n Enter length and width of 1st rectangle";
            cin>>l1>>w1;
            cout<<"\n Enter length and width of 2nd rectangle";
            cin>>l2>>w2;
            ob1.setlength(l1);
            ob1.setwidth(w1);
            ob2.setlength(l2);
            ob2.setwidth(w2);
            cout<<"\n Perimeter of 1st rectangle is "<<ob1.perimeter();
            cout<<"\n Perimeter of 2nd rectangle is "<<ob2.perimeter();
            float area1,area2;
            area1=ob1.area();
            cout<<"\n Area of 1st rectangle is "<<area1;
            area2=ob2.area();
            cout<<"\n Area of 2nd rectangle is "<<area2;
            ob1.compare(ob2);
            ob1.compare(area1,area2);
            
            
}
