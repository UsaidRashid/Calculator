#include<iostream>
#include<cmath>
#include<conio.h>

using namespace std;

class SimpleCalculator
{
    protected:
            float N1,N2;
    public:
            SimpleCalculator(){}
            SimpleCalculator(float,float);
            void ADDITION();
            void SUBTRACTION();
            void MULTIPLICATION();
            void DIVISION();        

};

class ScientificCalculator
{
    protected:
           float N;
    public:
            ScientificCalculator(){}       
            ScientificCalculator(float);
            void TRIGONOMETRY();
            void EXPONENT();
            void LOGARITHMIC();
            void ROOT();      
};

class HybridCalculator : public SimpleCalculator , public ScientificCalculator
{
    public:
             HybridCalculator(){}          
             HybridCalculator(float);          
             HybridCalculator(float,float);          
};

SimpleCalculator :: SimpleCalculator(float n1,float n2)
{
    int n;

    N1=n1;
    N2=n2;

    cout<<"ENTER WHICH FUNCTION YOU WANNA PERFORM \n";
    cout<<"PRESS 1 FOR ADDITION \n";
    cout<<"PRESS 2 FOR SUBTRACTION \n";
    cout<<"PRESS 3 FOR MULTIPLICATION \n";
    cout<<"PRESS 4 FOR DIVISION \n";

    cin>>n;

    switch(n)
    {
        case 1:
        {
            ADDITION();
            break;
        }
        case 2:
        {
            SUBTRACTION();
            break;
        }
        case 3:
        {
            MULTIPLICATION();
            break;
        }
        case 4:
        {
            DIVISION();
            break;
        }
        default:
        {
            int f;
            cout<<"INVALID CHOICE \n";
            cout<<"PRESS 1 TO TRY AGAIN ELSE ANY KEY TO EXIT \n";
            cin>>f;
            if (f==1)
            {
                SimpleCalculator(n1,n2);
            }
            else
            break;
        }
    }
}

void SimpleCalculator :: ADDITION ()
{
    cout<<"THE ADDITION OF THESE TWO NUMBERS IS "<<N1+N2<<endl;
} 

void SimpleCalculator :: SUBTRACTION ()
{
    cout<<"THE SUBTRACTION OF THESE TWO NUMBERS IS "<<N1-N2<<endl;
} 

void SimpleCalculator :: MULTIPLICATION ()
{
    cout<<"THE MULTIPLICATION OF THESE TWO NUMBERS IS "<<N1*N2<<endl;
} 

void SimpleCalculator :: DIVISION ()
{
    cout<<"THE DIVISION OF THESE TWO NUMBERS IS "<<N1/N2<<endl;            
}


ScientificCalculator :: ScientificCalculator(float m)
{
    int n;

    N=m;

    cout<<"WHICH FUNCTION YOU WANT TO PERFORM \n";
    cout<<"PRESS 1 FOR TRIGONOMETRIC OPERATIONS \n";
    cout<<"PRESS 2 FOR EXPONENTIAL OPERATIONS \n";
    cout<<"PRESS 3 FOR LOGARITHMIC OPERATIONS \n";
    cout<<"PRESS 4 FOR CALCULATING SQUAREROOT OR CUBEROOT \n";

    cin>>n;

    switch(n)
    {
        case 1:
        {
           TRIGONOMETRY();
           break;
        }
        case 2:
        {
            EXPONENT();
            break;
        }
        case 3:
        {
            LOGARITHMIC();
            break;
        }
        case 4:
        {
           ROOT();
           break;
        }
        default:
        {
            int u;
            cout<<"INVALID CHOICE \n";
            cout<<"PRESS 1 TO TRY AGAIN OR ANY KEY TO EXIT \n";
            cin>>u;
            if(u==1)
            {
                ScientificCalculator(m);
            }
            else    
            break;
        }
    }
}


void ScientificCalculator :: TRIGONOMETRY ()
{
     int k;
            cout<<"WHICH TRIGONOMETRIC FUNCTION YOU WANNA PERFORM \n";
            cout<<"PRESS 1 FOR SINE \n";
            cout<<"PRESS 2 FOR COSINE \n";
            cout<<"PRESS 3 FOR TANGENT \n";
            cin>>k;
            
            switch(k)
            {
                case 1:
                {
                    cout<<"SINE OF THIS NUMBER IS "<<sin(N)<<endl;
                    break;
                }
                case 2:
                {
                    cout<<"COSINE OF THIS NUMBER IS "<<cos(N)<<endl;
                    break;
                }
                case 3:
                {
                    cout<<"TANGENT OF THIS NUMBER IS "<<tan(N)<<endl;
                    break;
                }
                default:
                {
                    int y;
                    cout<<"INVALID CHOICE \n";
                    cout<<"PRESS 1 TO TRY AGAIN OR ANY KEY TO EXIT \n";
                    cin>>y;
                    if(y==1)
                    {
                        TRIGONOMETRY();
                    }
                    else
                    break;
                }
            }
}

void ScientificCalculator :: EXPONENT()
{
    int l;
            cout<<"ENTER THE NUMBER YOU WANT TO BE IN THE POWER OF THE GIVEN NUMBER \n";
            cin>>l;
            cout<<"DESIRED VALUE OF EXPONENTIAL FUNCTION IS "<<pow(N,l)<<endl;
}



void ScientificCalculator :: LOGARITHMIC()
{
    cout<<"THE LOG OF THE GIVEN NUMBER "<<log10(N)<<endl;
}


void ScientificCalculator :: ROOT()
{
     int j;
            cout<<"WHAT YOU WANT TO DO \n";
            cout<<"PRESS 1 FOR SQUAREROOT \n";
            cout<<"PRESS 2 FOR CUBE ROOT \n";
            cin>>j;
            if(j==1)
            {
                cout<<"SQUAREROOT OF THE GIVEN NUMBER IS "<<sqrt(N)<<endl;                
            }
            else if(j==2)
            {
                cout<<"CUBEROOT OF THE GIVEN NUMBER IS "<<cbrt(N)<<endl;
            }
            else
            {
                int h;
                cout<<"INVALID CHOICE \n";
                cout<<"PRESS 1 TO TRY AGAIN OR ANY KEY TO EXIT \n";
                cin>>h;
                if(h==1)
                {
                    ROOT();
                }
            }
}

HybridCalculator :: HybridCalculator(float z)
{
    N=z;
}


HybridCalculator :: HybridCalculator(float z1,float z2)
{
    N1=z1;
    N2=z2;
}


int main()
{
    int d,t;

    cout<<"WHICH CALCULATOR YOU WANNA ACCESS \n";
    cout<<"PRESS 1 FOR SIMPLE CALCULATOR \n";
    cout<<"PRESS 2 FOR SCIENTIFIC CALCULATOR \n";
    cout<<"PRESS 3 FOR HYBRID CALCULATOR \n";
    cin>>d;

    switch (d)
    {
        case 1:
        {
            float d1,d2;

            cout<<"ENTER TERMS ON WHICH OPERATION TO BE DONE \n";
            cin>>d1>>d2;

            SimpleCalculator SM(d1,d2);
            break;
        }

        case 2:
        {
            float D;

            cout<<"ENTER TERM ON WHICH OPERATION IS TO BE DONE \n";
            cin>>D;

            ScientificCalculator SN(D);
            break;
        }

        case 3:
        {
            float D1,D2;
            int c;

            cout<<"ENTER TERMS TO BE OPERATED \n";
            cin>>D1>>D2;

            HybridCalculator HC1(D1),HC2(D1,D2),HC3(D2);

            cout<<"ENTER ANY OPERATION YOU WANT TO PERFORM \n";
            cout<<"PRESS 1 FOR ADDITION \n";
            cout<<"PRESS 2 FOR SUBTRACTION \n";
            cout<<"PRESS 3 FOR MULTIPLICATION \n";
            cout<<"PRESS 4 FOR DIVISION \n";
            cout<<"PRESS 5 FOR TRIGONOMETRIC OPERATIONS \n";
            cout<<"PRESS 6 FOR EXPONENTIAL OPERATIONS \n";
            cout<<"PRESS 7 FOR LOGARITHMIC OPERATIONS \n";
            cout<<"PRESS 8 FOR CALCULATING SQUAREROOT OR CUBEROOT \n";

            cin>>c;

            switch(c)
            {
                case 1:
                {
                    HC2.ADDITION();
                    break;
                }

                case 2:
                {
                    HC2.SUBTRACTION();
                    break;
                }

                case 3:
                {
                    HC2.MULTIPLICATION();
                    break;
                }

                case 4:
                {
                    HC2.DIVISION();
                    break;
                }

                case 5:
                {
                    int e;

                    cout<<"PRESS 1 IF YOU WANT TO PERFORM THE FUNCTION ON FIRST NUMBER \n";
                    cout<<"PRESS 2 IF YOU WANT TO PERFORM THE FUNCTION ON SECOND NUMBER \n";

                    cin>>e;

                    if(e==1)
                    {
                        HC1.TRIGONOMETRY();
                    }
                    else if(e==2)
                    {
                        HC3.TRIGONOMETRY();
                    }
                    else
                    {
                        cout<<"INVALID CHOICE \n";
                        cout<<"PRESS ANY KEY TO EXIT \n";
                        getch();    
                    }
                    break;
                }

                case 6:
                {
                    int f;

                    cout<<"PRESS 1 IF YOU WANT TO PERFORM THE FUNCTION ON FIRST NUMBER \n";
                    cout<<"PRESS 2 IF YOU WANT TO PERFORM THE FUNCTION ON SECOND NUMBER \n";

                    cin>>f;

                    if(f==1)
                    {
                        HC1.EXPONENT();
                    }
                    else if(f==2)
                    {
                        HC3.EXPONENT();
                    }
                    else
                    {
                        cout<<"INVALID CHOICE \n";
                    }
                    break;
                }

                case 7:
                {
                    int g;

                    cout<<"PRESS 1 IF YOU WANT TO PERFORM THE FUNCTION ON FIRST NUMBER \n";
                    cout<<"PRESS 2 IF YOU WANT TO PERFORM THE FUNCTION ON SECOND NUMBER \n";

                    cin>>g;

                    if(g==1)
                    {
                        HC1.LOGARITHMIC();
                    }
                    else if(g==2)
                    {
                        HC3.LOGARITHMIC();
                    }
                    else
                    {
                        cout<<"INVALID CHOICE \n";
                    }
                    break;                
                }

                case 8:
                {
                    int h;

                    cout<<"PRESS 1 IF YOU WANT TO PERFORM THE FUNCTION ON FIRST NUMBER \n";
                    cout<<"PRESS 2 IF YOU WANT TO PERFORM THE FUNCTION ON SECOND NUMBER \n";

                    cin>>h;

                    if(h==1)
                    {
                        HC1.ROOT();
                    }
                    else if(h==2)
                    {
                        HC3.ROOT();
                    }
                    else
                    {
                        cout<<"INVALID CHOICE \n";
                    }
                    break;
                }

                default:
                {
                    cout<<"INVALID CHOICE \n";
                    break;
                }
            }
        }
        default:
        {
            cout<<"INVALID CHOICE \n";
            break;
        }
    }
    cout<<"MAIN EXIT IF YOU WANT TO USE AGAIN PRESS 1 \n";
    cin>>t;
    if(t==1)
    {
        main();
    }
}