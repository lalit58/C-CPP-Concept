#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{

    // Array
    int i;
    int A[10] = {5,6,8,9,1};
     for(int i=0;i<10;i++)
     {
        cout<< A[i]<<endl;
     }
    // cout<<"Size of Array A[]= "<<sizeof(A)<<endl;
    cout<<"Element of A[1] "<<A[1]<<endl;
    printf("%d\n",A[2]);

     Structure*/ ----------------------------------------------------------

        struct Rectangle
        {
            /* data */
            int length;
            int breath;
        };

        // struct Rectangle ;
        struct Rectangle r={10,14};
        r.length=50;
        r.breath=10;
        cout<<"The Area of Recatangle is "<<r.length*r.breath<<endl;

        struct student
        {
            char name[30];
            int roll_no;
            char address[50];
            int mobile;
        };
        struct student rana;
        rana.name= "Lalit";
        rana.roll_no=9;
        rana.mobile=1234678902;
        rana.address="balasore";

        cout<<"Student name is "<<rana.name<<endl;

        Pointer-----------------------------------------------------------------------------

        int a=10;
        int *p;
        p=&a;
        cout<<a<<endl<<*p<<endl;

        int A[5]={2,5,6,7,8};
        int *p;
        p=A;
        for(int i=0;i<5;i++)
        cout<<p[i]<<endl;

        int *p;
        // p=(int *)malloc(5*sizeof(int));
        p=new int[5];
        p[0]=10;
        p[1]=15;
        p[2]=20;
        p[3]=30;
        p[4]=25;
        for (int i = 0;i<5;i++)
        cout<<p[i]<<endl;
        delete [] p;
        free(p); 
reference----------------------------------------------
int a= 10;
int &r=a;
int b=90;
r=b;
cout<<a<<endl<<r<<endl;

     
struct Rectangle
{
    int length;
    int bredth; 
};
struct Rectangle r;
struct Rectangle *p=&r;
// r.length=15;
// (*p).length=20;
p->length =30;
p->bredth=5;
cout<<"length is  "<<p->length<<endl<<"bredth is "<<p->bredth<<endl<<"Area of Rectangle is "<<p->length*p->bredth<<endl;

Fuction-----------------------------------------------------
int add(int a,int b)
{
    int c;
    c=a+b;
    return c;
}
int main()
{
    int x,y,z;
    x=13;
    y=144;
    z=add(x,y);
    cout<<"Sum is "<<z<<endl;
Parameter passing-------------------------------------------pASS BY VALUE-------------------
void Swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int main()
{
    int x,y;
    x=10;
    y=15;
    Swap(x,y);
// cout<<"value of x "<<x<<endl<<"Value of y "<<y;
printf("%d %d",x,y);
    CALL BY ADDRESS------------------------------------------------------------------
    void Swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int x,y;
    x=10;
    y=15;
    Swap(&x,&y);
// cout<<"value of x "<<x<<endl<<"Value of y "<<y;
printf("%d %d",x,y);


 CALL BY Reference---------------------------------------------------------------

void Swap(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int main()
{
    int x,y;
    x=10;
    y=15;
    Swap(x,y);
// cout<<"value of x "<<x<<endl<<"Value of y "<<y;
printf("%d %d",x,y);

ARRAY as parameter----------------------------------------
int * fun(int size)
{
    int *p;
    p=new int[size];

    for (int i = 0; i < size; i++)
    {
        p[i]=i+1;
    }
    return p;
} 
int main()
{
    int *ptr,sz=7;

    ptr= fun(sz);

    for (int i = 0; i < sz; i++)
    {
        cout<<ptr[i]<<endl;
    }
Structure  as parameter------CAll by value----------------------------------
struct Rectangle 
{
    int length;
    int breadth;
};
int Area(struct Rectangle r1)
{
    return r1.length*r1.breadth;
}

int main()
{
    struct Rectangle r={10,5};
    
    cout<<"Length is "<<r.length<<" Breath is "<<r.breadth<<endl<<"Area is "<<Area(r);
return 0;
}

// Structure  as parameter------CAll by Address----------------------------------
struct Rectangle 
{
    int length;
    int breadth;
};
void ChangeLength(struct Rectangle *p,int l)
{
    p->length=l;
    cout<<"Length is "<<p->length;
} 
int main()
{
    struct Rectangle r={10,5};
    ChangeLength(&r,20);
   
}
Structure and Function-----------------------------------------------------------
struct Rectangle
{
    int length;
    int breadth;
};
void Initialize(struct Rectangle *r1,int l,int b)
{
    r1->length=l;
    r1->breadth=b;
}
int Area(struct Rectangle r1)
{
    return r1.length*r1.breadth;
    
}
void ChangeLength(struct Rectangle *r1,int l)
{
   r1->length=l;   
}
int main()
{
    struct Rectangle r;
    Initialize(&r,10,5);
    cout<<"Area is "<<Area(r)<<endl;
    ChangeLength(&r,30);
    cout<<"After Changed Length Area is "<<Area(r)<<endl;
    return 0;
}
cLASS AND Constructor-----------------------------------------------
class Rectangle
{
    private:
        int length;
        int breadth;
    public:
    Rectangle(int l,int b)
    {
        length=l;
        breadth=b;
    }
    int Area()
    {
        return length*breadth;
        
    }  
     ChangeLength(int l)
    {
    length=l;   
    }
};
int main()
{
    Rectangle r(10,5);

    cout<<"Area is "<<r.Area()<<endl;
    r.ChangeLength(20);
    cout<<"Area after changed length "<<r.Area()<<endl;
    return 0;
}
Monolithic programming--------------------------------------------------------
int main()
{
    int length=0,breadth=0;
    cout<<"Enter Length and Breadth: ";
    cin>>length>>breadth;

    int area=length*breadth;
    int peri=2*(length+breadth);

    cout<<"Area is "<<area<<endl<<"Perimeter is "<<peri<<endl;
}
Modular programming--------------------------------------------------
int area(int length,int breadth)
{
    return(length*breadth);
}
int perimeter(int length,int breadth)
{
    int p=2*(length+breadth);
    return p;
}
int main()
{
    int length=0,breadth=0;
    cout<<"Enter Length and Breadth: ";
    cin>>length>>breadth;
    int a=area(length,breadth);
    int peri=perimeter(length,breadth);

    cout<<"Area is "<<a<<endl<<"Perimeter is "<<peri<<endl;
}
structure and function------------------------------------------------------
struct Rectangle
{
    int length;
    int breadth;
};
void Initialize(struct Rectangle *r,int l,int b)
{
    r->length=l;
    r->breadth=b;
}
int area(struct Rectangle r)
{
    return r.length*r.breadth;
}
int perimeter(struct Rectangle r)
{
    int p=2*(r.length+r.breadth);
    return p;
}
int main()
{
    struct Rectangle r={0,0};
    int l,b;
    cout<<"Enter Length and Breadth: ";
    cin>>l>>b;
    Initialize(&r,l,b);
    int a=area(r);
    int peri=perimeter(r);

    cout<<"Area is "<<a<<endl<<"Perimeter is "<<peri<<endl;
}




    



