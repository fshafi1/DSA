#include <iostream>
using namespace std;

int add(int &a, int &b) // pass by reference
{
    int sum = a + b;
    a += 1;
    b += 1;
    cout << a << " " << b << " (inside the function ) " << endl;
    return sum;
}

int add(int *a, int *b) // pass by pointer
{
    int sum = *a + *b;
    *a += 1;
    *b += 1;
    cout << a << " " << b << " (inside the function ) " << endl;
    return sum;
}

int main()
{
    int a = 4, b = 5; // declaring and initializing int variables

    int *c, *d; // declaring pointers
    c = &a;
    d = &b; // initializing pointers

    // declaring and initializing references.
    int &e = a;
    int &f = b;

    printf("Before: a = %d, b = %d \n", a, b);
    cout << "Passing by pointer: " << add(c, d) << endl;
    printf("After: a = %d, b = %d \n", a, b);

    cout << "Pass by reference" << endl;
    printf("Before: a = %d, b = %d \n", a, b);
    cout << "Passing by reference: " << add(e, f) << endl;
    printf("After: a = %d, b = %d \n", a, b);

    return 0;
}