#include<iostream>
#include<cstring>
#include<string>

using namespace std;

class hang {
	protected :
		char tenhang[100];
		long dongia;
	public :
		hang() {
			this->dongia = 0;
		}
		char *th() {
			return this->tenhang;
		}
		void th(const char a[]) {
			strcpy(this->tenhang, a);
		}
		long dg() {
			return this->dongia;
		}
		void dg(long a) {
			this->dongia = a;
		}
};

class banggia {
	protected :
		hang a[100];
		long tshang;
	public :
		banggia() {
			this->tshang = 0;
		}
		void nhapbp() {
			char x[100];
			long y;
			cout << "Ten hang: "; cin.getline(x, 100);
			a[tshang].th(x);
			cout << "Don gia: "; cin >> y; cin.ignore();
			a[tshang].dg(y);
			this->tshang++;
		}
		void xemmh() {
			for (int i = 0; i < tshang; i++) {
				cout << a[i].th() << " " << a[i].dg() << endl;
			}
		}
		long xemgia(char tenhang[]) {
			for (int i = 0; i < tshang; i++) {
				if (strcmp(a[i].th(), tenhang) == 0) {
					return a[i].dg();
				}
			}
			return 0;
		}
};

class hangxuat : public hang {
	protected :
		long soluongxuat, thanhtien;
	public :
		hangxuat() {
			this->soluongxuat = 0;
			this->thanhtien = 0;
		}
		void slx(long x) {
			this->soluongxuat = x;
		}
		long slx() {
			return this->soluongxuat;
		}
		void tinhtien() {
			this->thanhtien = this->soluongxuat * this->dongia;
		}
		long xemThanhtien() {
			return this->thanhtien;
		}
};

class phieuxuat {
	protected :
		long sophieu, tongtien, tshangxuat;
		hangxuat b[100];
	public :
		phieuxuat() {
			this->tshangxuat = 0;
			this->tongtien = 0;
		}
		void nhapbp(banggia bg) {
			char tenhang[100];
			long slx = 0;
			cout << "So phieu: "; cin >> this->sophieu; cin.ignore();
			cout << "Ten hang: "; cin.getline(tenhang, 100); b[tshangxuat].th(tenhang);
			cout << "So luong xuat: "; cin >> slx; b[tshangxuat].slx(slx); cin.ignore();
			b[tshangxuat].dg(bg.xemgia(tenhang));
			b[tshangxuat].tinhtien();
			this->tongtien += b[tshangxuat].xemThanhtien();
			tshangxuat++;
		}
		void xemmh() {
			cout << "So phieu: " << this->sophieu << " - Tong tien: " << this->tongtien << " - TS Hang xuat: " << this->tshangxuat << endl;
			for (int i = 0; i < tshangxuat; i++) {
				cout << b[i].th() << "\t" << b[i].dg() << "\t" << b[i].slx() << "\t" << b[i].xemThanhtien() << endl;
			}
			cout << "---" << endl;
		}
};

main() {
	banggia a;
	phieuxuat b;
	for (int i = 0; i < 5; i++) {
		a.nhapbp();
	}
	a.xemmh();
	for (int i = 0; i < 2; i++) {
		b.nhapbp(a);
	}
	b.xemmh();
}
