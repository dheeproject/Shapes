/*Draw This shape
****
****
****
****
*/
#include <iostream>
using namespace std;
int main()
{
    int i=0,j=0;
    int n_rows;
    cout<<"Enter the no. of rows";
    cin>>n_rows;
    for(i=0;i<n_rows;i++)
    {
        for(j=0;j<n_rows;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
return 0;
}
