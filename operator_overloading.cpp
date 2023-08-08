#include <iostream>
using namespace std;
class comparision
{
    public:
    string sentance;
    comparision operator +(comparision &obj)
    {
        comparision joining;
        joining.sentance=sentance+obj.sentance;
        return joining;
    }
    void fun()
    {
        cout<<sentance;
    }
};
int main()
{
    comparision obj1,obj2,result;
    cin>>obj1.sentance>>obj2.sentance;
    result=obj1+obj2;
    result.fun();
    return 0;
}