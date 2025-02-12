#include <iostream>
using namespace std;
#include <ctime>
#include <vector>
int main()
{
    srand(time(0));
    int n, i, pari, max, imax, min, imin;
    cout << "quanti numeri da generare?" << endl;
    cin >> n;
    vector<int>v(n);
    i=0;
    pari=0;
    while (i<n)
    {
        v[i] = rand()%1001;
        if(v[i] % 2 = 0)
        {
            pari=pari+1;
        }
        i=i+1;
    }
    cout << "sono stati generati " << pari << " numeri pari" << endl;
    i=0;
    min = v[0];
    imin = 0;
    while (i<n)
    {
        if (v[i]>min)
        {

        }
        else
        {
            min = v[i];
            imax = i;
        }
        i = i+1;

    }
    cout << "il valore più piccolo di tutti è " << min << " e si trova nella posizione " << imin << "." << endl;
     i=0;
    min = v[0];
    imin = 0;
    while (i<n)
    {
        if (v[i]>max)
        {
            max = v[i];
            imax = i;
        }
        i=i+1;
    }
    cout << "il valore più grande di tutti è " << max << " e si trova nella posizione " << imax << endl;


}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
