#include <iostream>

using namespace std;

int main()
{
    int arreglo[] = {3, 7, 2, 6, 4, 8};
    int producto = 1;


    for (int i = 0; i < sizeof(arreglo) / sizeof(arreglo[0]); i += 2)
    {

        producto *= arreglo[i] * arreglo[i + 1];
    }

    cout << "producto de elementos adyacentes: " << producto << endl;

    return 0;
}
