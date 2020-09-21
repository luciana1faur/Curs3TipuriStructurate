# include <iostream>
using namespace std;

int main(){
  
  struct produs{
    int greutate;
    double pret;
    char nume[15];
  };

  produs fructe[10];
  int nr_produse;
  int i;
  i = 0;

  cout << "Cate produse introduceti? ";
  cin >> nr_produse;

  while(i < nr_produse){
    cout << "Greutatea produsului: ";
    cin >> fructe[i].greutate;

    cout << "Pretul produsului: ";
    cin >> fructe[i].pret;

    cout << "Numele produsului: ";
    cin.ignore();
    cin.getline(fructe[i].nume, 14);

    i++;
  }
  return 0;
}