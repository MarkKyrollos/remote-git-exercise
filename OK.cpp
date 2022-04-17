#include <iostream>
using namespace std;

#define size 10
//create exception classes

class MyList
{
private:
    int arr[size];
    bool initialized[size];
public:
    MyList()
    {
        for (int i = 0; i < size; i++)
        {
            initialized[i] = false;
        }
    }
    void setElement(int i, int value)
    {
        // check if i is out of bounds

        arr[i] = value;
        initialized[i] = true;
    }
    int getElement(int i)
    {
        // check if i is out of bounds

        // check if arr[i] is uninitialized

        return arr[i];
    }
    void print()
    {
        for (int i = 0; i < size; i++)
        {
            if (initialized[i])
                cout << arr[i] << " ";
            else
                cout << "U" << " ";
        }
        cout << endl;
    }
};

int main()
{
    //try
    //{
    //    MyList list;
    //    list.setElement(5, 100);
    //    list.setElement(1, 200);
    //    list.setElement(9, 500);
    //    list.print();
    //    int i;
    //    while (true)
    //    {
    //        cout << "please enter an index (-1 to exit): " << endl;
    //        cin >> i;
    //        if (i == -1)
    //            break;
    //        cout << "element = " << list.getElement(i) << endl;
    //    }

    //}
    //catch (LowerBoundException e)
    //{
    //    cout << "Exception 1 Occured!" << endl;
    //    cout << "\t" << e.what() << endl;
    //}
    //catch (UpperBoundException e)
    //{
    //    cout << "Exception 2 Occured!" << endl;
    //    cout << "\t" << e.what() << endl;
    //}
    //catch (UninitializedException e)
    //{
    //    cout << "Exception 3 Occured!" << endl;
    //    cout << "\t" << e.what() << endl;
    //}

    cout << "the last line before return 0;" << endl;
    return 0;
}
