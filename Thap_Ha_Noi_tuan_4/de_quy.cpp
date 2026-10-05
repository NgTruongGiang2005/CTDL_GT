#include <iostream>
using namespace std;
void thapHN(int n, char goc, char dich, char trung_gian){
    if(n==1){
        cout << "chuyen dia 1 tu coc " << goc << " sang coc " << dich << endl;
        return;
    }
    thapHN(n-1, goc, trung_gian, dich);
    cout <<"chuyen dia " << n << " tu coc " << goc << " sang coc " << dich << endl;
    thapHN(n-1, trung_gian, dich, goc);
}
int main(){
    int n;
    cout << "nhap so dia:";
    cin >> n;
    if(n<=0){
        cout<< "so dia phai lon hon 0!"<< endl;
        return 0;
    }
    cout<< "\n Cac buoc thuc hien thap Ha Noi la :"<< endl;
    thapHN(n, 'A', 'B', 'C');
    return 0;

}
