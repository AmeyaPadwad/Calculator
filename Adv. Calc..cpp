#include <iostream>

using namespace std;

float num1,num2,num3, number;
float add,sub,div,product;
float result;
char op,choice1, choice2;

int main()
{
    cout<<"CALCULATOR UPTO n STEPS!"<<endl<<endl;

    /*prompt to first iteration!*/
    cout<<"Enter number1 : ";
    cin>>num1;
    cout<<"Enter the operator(+,-,*,/) : ";
    cin>>op;
    cout<<"Enter number2 : ";
    cin>>num2;

    /*first iteration!*/

    if(op=='+')
    {
        add=num1+num2;
        cout<<"The addition of the numbers is : "<<add;
        result=add;
    }
    else if(op=='-')
    {
        sub=num1-num2;
        cout<<"The subtraction of the numbers is : "<<sub;
        result=sub;
    }
    else if(op=='*')
    {
        product=num1*num2;
        cout<<"The product of the numbers is : "<<product;
        result=product;
    }
    else if(op=='/')
    {
        div=num1/num2;
        cout<<"The division of the numbers is : "<<div;
        result=div;
    }



    /*nth iteration!*/

    int a=0;
    int x = 3;
    int numx;

    while (a==0)
{
        cout<<endl<<"Continue?(Y/N) : ";
        cin>>choice1;

        if(choice1=='N')
        {
            cout<<"The final result is : "<<result<<endl;
            break;
        }

        else if(choice1=='Y')
        {
            cout<<"Use result?(Y/N) [Result is "<<result<<"]: ";
            cin>>choice2;

            if(choice2=='Y')
            {
                cout<<"Enter number "<<x<<" : ";
                cin>>numx;
                cout<<"Enter the operator(+,-,*,/) : ";
                cin>>op;


                    if(op=='+')
                    {
                        add=result+numx;
                        cout<<"The addition of the numbers is : "<<add;
                        result=add;
                    }
                    else if(op=='-')
                    {
                        sub=result-numx;
                        cout<<"The subtraction of the numbers is : "<<sub;
                        result=sub;
                    }
                    else if(op=='*')
                    {
                        product=result*numx;
                        cout<<"The product of the numbers is : "<<product;
                        result=product;
                    }
                    else if(op=='/')
                    {
                        div=result/num2;
                        cout<<"The division of the numbers is : "<<div;
                        result=div;
                    }
                    x++;
                }

            else if(choice2=='N')
            {
                cout<<"Enter number1 : ";
                cin>>num1;
                cout<<"Enter the operator(+,-,*,/) : ";
                cin>>op;
                cout<<"Enter number2 : ";
                cin>>num2;

                    if(op=='+')
                    {
                        add=num1+num2;
                        cout<<"The addition of the numbers is : "<<add;
                        result=add;
                    }
                    else if(op=='-')
                    {
                        sub=num1-num2;
                        cout<<"The subtraction of the numbers is : "<<sub;
                        result=sub;
                    }
                    else if(op=='*')
                    {
                        product=num1*num2;
                        cout<<"The product of the numbers is : "<<product;
                        result=product;
                    }
                    else if(op=='/')
                    {
                        div=num1/num2;
                        cout<<"The division of the numbers is : "<<div;
                        result=div;
                    }

                }
            else
            {
                cout<<"INVALID INPUT."<<endl;
                break;
            }
        }

        else
            {
                cout<<"INVALID INPUT."<<endl;
                break;
            }

}
    return 0;
}
