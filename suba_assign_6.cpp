#include <iostream>
using namespace std;
class EnterTour
{
    public:
    string code;
    int adults;
    int kids;
    int km;
    void Assign_Fare(EnterTour obj[],int n);
};
void Assign_Fare(EnterTour obj[],int n)
{
    int i,total[20],count=0;
    for(i=0;i<n;i++)
    {
        if(obj[i].km>=1000)
        {
            total[count]=(obj[i].adults*500)+(obj[i].kids*250);
            count++;
        }
        if(obj[i].km>=500 && obj[i].km<1000)
        {
            total[count]=(obj[i].adults*300)+(obj[i].kids*150);
            count++;
        }
        if(obj[i].km<500)
        {
            total[count]=(obj[i].adults*200)+(obj[i].kids*100);
            count++;
        }
    }
    for(i=0;i<count;i++)
    {
        cout<<obj[i].code<<'\n'<<obj[i].adults<<'\n'<<obj[i].kids<<'\n'<<obj[i].km<<'\n'<<total[i];
    }
}
int main()
{
    EnterTour obj[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>obj[i].code>>obj[i].adults>>obj[i].kids>>obj[i].km;
    }
    Assign_Fare(obj,n);
    return 0;
}