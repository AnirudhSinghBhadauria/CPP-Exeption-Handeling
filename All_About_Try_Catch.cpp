#include <iostream>

using namespace std;

class myexeption
{
};
class myexeptionchild : public myexeption
{
};

int main()
{

    try
    {
        throw myexeption();
    }
    catch (int e)
    {
        cout << "Integer type Exeption!\n";
    }
    catch (float e)
    {
        cout << "Float type Exeption!\n";
    }
    catch (double e)
    {
        cout << "Double type Exeption!\n";
    }
    catch (string e)
    {
        cout << "String type Exeption!\n";
    }
    catch (myexeptionchild e)
    {
        cout << "myexeptionchild type Exeption!\n";
    }
    catch (myexeption e)
    {
        cout << "Class type Exeption!\n";
    }
    catch (...)
    {
        cout << "Catch All!\n";
    }

    return 0;
}