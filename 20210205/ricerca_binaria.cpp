#include <cstdlib>
#include <iostream>
using namespace std;

/** Stampa l'array A di n elementi
 * @param A array di valori interi
 * @param n numero di elementi di A
 */
void stampa(int A[], int n) {
    cout << "[";
    if (n > 0)
        cout << A[0];
    for (int i = 1; i < n; i++) {
        cout << ", " << A[i];
    }
    cout << "]" << endl;
}

/** Ricerca il valore v nell'array ordinato A
 * @param A array di valori interi
 * @param n numero di elementi di A
 * @param v valore da cercare
 * @return indice i di A tale che A[i] = v
 */
    int ricerca_binaria(int A[], int n, int v)
{
    return -1;
}

void generaSequenzaCasualeOrdinata(int A[], int n) {
    srand(time(0));
    A[0] = rand() % 5;
    for (int i = 1; i < n; i++) {
        int incremento = 1 + rand() % 5;
        A[i] = A[i - 1] + incremento;
    }
}

int main() {
    const int len = 9;
    int sequenza[len];
    generaSequenzaCasualeOrdinata(sequenza, len);
    for (int i = 0; i < sequenza[len - 1]; i++) {
        int posizione = ricerca_binaria(sequenza, len, i);
        if (posizione == -1 ) {
            cout << "Il valore " << i << " non è presente" << endl;
        } else {
            cout << "Il valore " << i << " è in posizione " << posizione << endl;
        }
    }
        return EXIT_SUCCESS;
}