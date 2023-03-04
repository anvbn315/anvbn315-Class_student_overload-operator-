//NGUYEN VIET BINH AN
//6251020032
//KTDTVTK62

#include<iostream>
#include<cmath>

using namespace std;

class sinhVien{
	private:
		string hoTen;
		string MSSV;
		char gioiTinh[3];
		string ngaySinh;
		float diemTB;
	public:
		//nhap
		friend istream& operator >> (istream &is, sinhVien &sv);
		//xuat
		friend ostream& operator << (ostream &os, const sinhVien sv);
		//so sanh
		bool operator == (sinhVien sv);
		bool operator > (sinhVien sv);
		bool operator < (sinhVien sv);
		
		void xepLoai();
		float getDiemTB();
		string getHoTen();
};

bool sinhVien::operator ==(sinhVien sv){
	if(this->diemTB == sv.diemTB ){
		return true;
	}return false;
}

bool sinhVien::operator >(sinhVien sv){
	if(this->diemTB > sv.diemTB ){
		return true;
	}return false;
}

bool sinhVien::operator <(sinhVien sv){
	if(this->diemTB > sv.diemTB ){
		return true;
	}return false;
}

float sinhVien::getDiemTB(){
	return diemTB;
}

string sinhVien::getHoTen(){
	return hoTen;
}

void sinhVien::xepLoai(){
	float tempDiemTB = diemTB;
	if(tempDiemTB >=8.5 && diemTB<=10){
		cout << "Sinh vien xep loai Xuat sac!"<<endl;
	}else if(tempDiemTB >=7 && diemTB<=8.4){
		cout << "Sinh vien xep loai Gioi!"<<endl;
	}else if(tempDiemTB >=5.5 && diemTB<=6.9){
		cout << "Sinh vien xep loai Kha!"<<endl;
	}else if(tempDiemTB >=4 && diemTB<=5.4){
		cout << "Sinh vien xep loai Trung binh!"<<endl;
	}else if(tempDiemTB < 4){
		cout << "Sinh vien xep loai Yeu!"<<endl;
	}
}

istream& operator >> (istream &is, sinhVien &sv){
	cout<<"Nhap ho va ten sinh vien: "<<endl;
	is>>sv.hoTen;
	cout<<"Nhap MSSV: "<<endl;
	is>>sv.MSSV;
	cout<<"Nhap gioi tinh sinh vien: "<<endl;
	is>>sv.gioiTinh;
	cout<<"Nhap ngay sinh sinh vien: "<<endl;
	is>>sv.ngaySinh;
	cout<<"Nhap diem trung binh sinh vien: "<<endl;
	is>>sv.diemTB;
}

ostream& operator << (ostream &os, const sinhVien sv){
	cout<<"\nHo ten sinh vien la: "<<sv.hoTen<<endl;
	cout<<"Ma so sinh vien la: "<<sv.MSSV<<endl;
	cout<<"Gioi tinh sinh vien la: "<<sv.gioiTinh<<endl;
	cout<<"Ngay sinh sinh vien la "<<sv.ngaySinh<<endl;
	cout<<"Diem trung binh sinh vien la: "<<sv.diemTB<<endl;
}

int main(){
	sinhVien a,b;
	cin>>a;
	cout<<a;
	cin>>b;
	cout<<b;
	cout << "Dang xep loai sinh vien:......"<<endl;
	cout << "Sinh vien " << a.getHoTen() << " xep loai: " << endl;
	a.xepLoai();
	cout << "Sinh vien " << b.getHoTen() << " xep loai: " << endl;
	b.xepLoai();
	if (a > b){
		cout << "Diem trung binh sinh vien " << a.getHoTen() << " > " << "sinh vien" << b.getHoTen() << endl;
	}else if (a == b){
		cout << "Diem trung binh sinh vien " << a.getHoTen() << " == " << "sinh vien" << b.getHoTen() << endl;
	}else if (a < b){
		cout << "Diem trung binh sinh vien " << a.getHoTen() << " < " << "sinh vien" << b.getHoTen() << endl;
	}return 0;

}
