template <class T>
class Vettore {
  private:
    T p[];
    int dim;
  public:
    Vettore(int dim);
    ~Vettore();
    T elemento(int pos);
    bool inserisciInCoda(T valore);
};