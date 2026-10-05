#include <iostream>
#include <stack>
 using namespace std;
 struct Frame{
    int n;
    char goc, dich, trung_gian;
    int stage;
 };
 void thapHN(int n, char goc, char dich, char trung_gian){
    stack<Frame> st;
    st.push({n, goc, dich, trung_gian, 0});
    while (!st.empty()){
        Frame &f = st.top();
        if (f.n == 1) {
            cout << "chuyen dia 1 tu coc " << f.goc << " sang coc " << f.dich << endl;
            st.pop();
            continue;
        }
        if (f.stage == 0) {
            f.stage = 1;
            st.push({f.n - 1, f.goc, f.trung_gian, f.dich, 0});
        } else if (f.stage == 1) {
            cout << "chuyen dia " << f.n << " tu coc " << f.goc << " sang coc " << f.dich << endl;
            f.stage = 2;
            st.push({f.n - 1, f.trung_gian, f.dich, f.goc, 0});
        } else {
            st.pop();
        }

    }
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