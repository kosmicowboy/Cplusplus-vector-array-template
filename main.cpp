#include <iostream>
#include <string>
#include "definitions.h"
#include <vector>

using namespace std;

//specialization of template - in this case for integers

void printTarray(int l[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << l[i] << " **" ;
    }
    cout << "\n";
}

void printArray2(char l[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << l[i] << " " ;
    }
    cout << endl;
}

template <typename T>
void printTarray(T a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " " ;
    }
    cout << endl;
}

template <typename T>
void printVector( const vector<T>& l)
{
    for (int i = 0; i < l.size(); i++)
    {
        cout << l[i] << " ";
    }
    cout << endl;
}

template <typename T>
T findMax(T a, T b)
{
    if (a > b)
        return a;
    else
        return b;
}

template <typename T, typename CMP>
T thismax(const T & left, const T & right, CMP cmp)
{
    if ( cmp(left, right) )
        return right;
    else
        return left;
};

void printVector(vector<int> l)
{
    for (int i = 0; i < l.size(); i++)
    {
        cout << l[i] << " ";
    }
    cout << endl;
}

int main() {
    int a[]= {2, 4, 6, 8, 10, -4};
    char c[] = {'c', 'd', '5', 'p'};
    vector<int> v;
    vector<char> cv;
    v.push_back(8);
    v.push_back(3);
    v.push_back(5);
    v.push_back(-1);
    cv.push_back('s');
    cv.push_back('r');
    cv.push_back('t');
    cv.push_back('8');
    printTarray(a, 6);
    printTarray(c, 4);
    printVector(v);
    printVector(cv);
    cout << "the max num is " << findMax(5, 3) << "\n";
    cout << "the max num is " << findMax(9.4,12.6) << "\n";
    cout << "the max num is " << findMax("bob the builder", "sammy") << "\n";

    cout << "using comparison operator overloading" << endl;

    Employee e1("John", 2000);
    Employee e2("Mary", 40000);

    Employee e3 = thismax(e1, e2, CompareBySalary());
    cout << "selecting compare by salary between e1 and e2" << endl;
    e3.print();

    return 0;
}
