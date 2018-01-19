#include <iostream>
#include <string>
using namespace std;

class obat{
public:
	void cara(string penggunaan);
	string jenis, bentuk;
	
};
int main(){
obat bodrex, ultraflu, vicks, panadol;

bodrex.jenis =" Bodrex 	- Obat Sakit Kepala dan Batuk. ";
	ultraflu.jenis =" UltraFlu 	- Obat Flu,Batuk,Dan Bersin. ";
	vicks.jenis =" Vicks 		- Obat Batuk. ";
	panadol.jenis =" Panadol 	- Obat Sakit Kepala. ";

bodrex.bentuk =" Bentuk Tablet ";
	ultraflu.bentuk =" Bentuk Tablet ";
	vicks.bentuk =" Bentuk Cairan";
	panadol.bentuk =" Bentuk Kapsul";

bodrex.cara	(" 2 x 1 Hari Setelah Makan ");
	ultraflu.cara	(" 1 x 1 Hari Setelah Makan ");
	vicks.cara(" 4 x 1 Setelah atau Sebelum Makan");
	panadol.cara	(" 3 x 1 Hari Setelah Makan ");

}

void obat::cara(string penggunaan){
		cout<<jenis<<" ";
		cout<<bentuk<<" ~ ";
		cout<<penggunaan<<endl;
	
}
