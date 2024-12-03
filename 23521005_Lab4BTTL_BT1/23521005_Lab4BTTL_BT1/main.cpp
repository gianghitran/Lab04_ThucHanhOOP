#include "NhanVien.h"
#include "QuanLy.h"
#include "KySu.h"
#include <iostream>
using namespace std;
int main()
{
    QuanLy ql;
    cout << "NHAP THONG TIN QUAN LY----------\n";
    ql.Nhap();
    ql.Xuat();
    cin.ignore();
    KySu ks;
    cout << "NHAP THONG TIN KY SU----------\n";
    ks.Nhap();
    ks.Xuat();

    return 0;
}
