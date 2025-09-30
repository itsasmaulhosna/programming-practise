#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter a:";
    cin >> a;
    if (a % 5 == 0 && a % 3 == 0)
    {
        cout << "Division by both";
    }
    else if (a % 5 == 0)
    {
        cout << "Division by 5";
    }
    else if (a % 3 == 0){
        cout<<"Division by 3";
    }
    else{
        cout<<"not division";
    }
}