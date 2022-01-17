#include"iostream"
using namespace std;

int main(int argc, char const *argv[])
{
    int size;
    cin>>size;
	int numArray[size];
	for(int i = 0; i < size; i++)
    {
        cout<<i<<endl;
        cin>>numArray[i];
    }
    for (int i = 0; i < size; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        cout<<i<<numArray[i]<<endl;
    }
    for (int i = 0; i < size; i++)
    {
        if (i % 2 != 0)
        {
            continue;
        }
        cout<<i<<numArray[i]<<endl;
    }

    return 0;
}
