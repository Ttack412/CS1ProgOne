#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    //All my vars are created
    int a, b, c;
    double root1, root2, discriminant;
    bool imaginary = false;
    string rootType;

    //Gathers inputs
    cout << "Please enter THREE numbers " << endl;;
    cin >> a;
    cin >> b;
    cin >> c;
    cout << endl;

    //Quick math
    discriminant = pow(b,2) - (4 * a * c);

    //If a = 0 the formula won't work so I checked for that
    if(a == 0)
    {
        cout << "The first number you enter cannot be a 0, please try again" << endl;
        return 0;
    }
    else 
    //If a doesn't equal 0 then I find the roots of the quadratic
    {
        root1 = ((-1 * b) + sqrt(discriminant)) / (2 * a);
        root2 = ((-1 * b) - sqrt(discriminant)) / (2 * a);
    }
    
    //This will use spaces as the filler between coulumns
    cout << setfill(' ');
    cout << fixed << showpoint << setprecision(2);

    //Outputs the top row and the divider
    cout << "Values of a,b,c" << setw(35) << "Types of roots of equation" << setw(29) << "Roots of Equation(or NA)" << endl;
    cout << "--------------------------------------------------------------------------------" << endl;

    //This section finishes the output based on the discriminant
    if(discriminant == 0)
    {
        rootType = "Single Repeated Root";

        if(root1 == 0)
        {
            cout << "a = " << a << "; b = " << b << "; c = " << c << setw(25) << rootType << setw(15) << "x = " << root2 << endl;
        }
        else
        {
            cout << "a = " << a << "; b = " << b << "; c = " << c << setw(25) << rootType << setw(15) << "x = " << root1 << endl;
        }
        
    }
    else if(discriminant > 0)
    {
        rootType = "Two Real Roots";

        cout << "a = " << a << "; b = " << b << "; c = " << c << setw(19) << rootType << setw(21) << "x = " << root1 << " or x = " << root2 << endl;
    }
    else
    {
        rootType = "Two Complex Roots";
        
        cout << "a = " << a << "; b = " << b << "; c = " << c << setw(22) << rootType << setw(18) << "NA" << endl;
    }
    
return 0;
}