#include <bits/stdc++.h>
using namespace std;
// Tên chương trình
const string NAME = "Lap_trinh";
// Số test kiểm tra
const int NTEST = 35;

mt19937 rd(chrono::steady_clock::now().time_since_epoch().count());
#define rand rd

// Viết lại hàm random để sử dụng cho thuận tiện. Hàm random này sinh ngẫu nhiên số trong phạm vi long long, số sinh ra >= l và <= h.
long long Rand(long long l, long long h) {
    assert(l <= h);
    return l + rd() * 1LL * rd() % (h - l + 1);
}

int main()
{
    srand(time(NULL));
    for (int iTest = 1; iTest <= NTEST; iTest++)
    {
        ofstream inp(("Lap_trinh.inp").c_str());
        // Code phần sinh test ở đây
        inp.close();
        // Nếu dùng Linux thì "./" + Tên chương trình
        system(("Lap_trinh.exe").c_str());
        system(("Lap_trinh_trau.exe").c_str());
        // Nếu dùng linux thì thay fc bằng diff
        if (system(("fc Lap_trinh.out  Lap_trinh.ans").c_str()) != 0)
        {
            cout << "Test " << iTest << ": WRONG!\n";
            return 0;
        }
        cout << "Test " << iTest << ": CORRECT!\n";
    }
    return 0;
}