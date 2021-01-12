#include <iostream>
using namespace std;

// Dichiarato la funzione quadrato
double quadrato(double);

int main() {
  double ret;
  ret = quadrato(5); 
  cout << "Il quadrato di 5: " <<
    ret << endl;
  ret = quadrato(5 + 1);
  cout << "Il quadrato di (5 + 1): " <<
    ret << endl;
  ret = quadrato(quadrato(2));
  cout << "Il quadrato del quadrato di 2: " <<
    ret << endl;
  return 0;
}

// Definizione della funzione quadrato
double quadrato(double x) {
  return x * x;
}


// quadrato(5) -> 5 * 5 -> 25
//
// Ordine di valutazione
//                  / quadrato(6) <- 6 * 6 <- 36            Sì
// quadrato(5 + 1) -
//                  \ (5 + 1) * (5 + 1) <- 6 * 6 <- 36      No
//
// quadrato(quadrato(2)) <- quadrato(2 * 2) <- quadrato(4) <- 4 * 4 <- 16