#include <iostream>

using namespace std;

int main() {

    int x, y, z;

    cout <<"ievadi tris trijstura malu garumus:\n";
    cin>>x>>y>>z;

    if (x+y>z && y+z>x && x+z>y)
    {
      cout << "Eksiste";
    }
    else
    {
      cout << "Neeksiste";
    }
}
