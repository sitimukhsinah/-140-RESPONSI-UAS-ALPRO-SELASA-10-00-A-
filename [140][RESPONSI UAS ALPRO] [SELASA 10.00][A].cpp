#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

struct buku{
    string judul;
	string penulis;
	int nomor;
	int stok;
	
 
};

 vector <buku> data;
 void loadData(){
	data.clear();
	buku b;
	ifstream file("buku.txt");
	while (file>>b.nomor >> ws && getline (file,b.judul,';') && file >> b.stok >> ws  && getline (file, b.penulis,';') ){
		data.push_back(b);
	}
	file.close();
	
}

void TampilData(){
	ofstream file("buku.txt");
	for(auto & b){
		file<<b.nomor <<b.judul<< b.penulis <<b.stok  << endl;
	}
	file.close();
	
}


int main(){
	string judul;
	string penulis;
	int nomor;
	int stok;
	
	cout<<"====== Data Buku =========" << endl;
     cout<<"Masukkan judul buku: ";
     cin>>judul;
     cout<<"Masukkan nomor buku: ";
     cin>>nomor;
     cout<<"Masukkan Penulis: ";
     cin>>penulis;
     cout<<"Masukan Stok: ";
     cin>>stok;
     cout<<"========================" << endl;
	
}

int main(){
	int pilihan;
	buku b;
	int i;
	

do{
	cout<<"===== Inventaris Perpustakaan =====" << endl;
		cout <<"1.Menampilkan judul Buku bedasarkan penulisnya: " ;
    	cout<<"2.Menampilkan data buku berdasarkan judul buku: ";
    	cout<<"3.Buku berdasarkan stok tertentu: ";
    	cout<<"4.Buku berdasarkan stok terbanyak: ";
    	cout<<"5.Judul buku berdasarkan abjad A-Z: ";
    	cout<<"Pilih: ";
    	cin>pilihan;
    switch(pilihan){
    	case 1:
    		cpenulis();
    		break;
    	case 2:
    		cout <<"Menampilkan data buku berdasarkan judul buku: ";
    		break;
    	case 3:
    		cout<<"Buku berdasarkan stok tertentu: ";
    		break;
    	case 4:
    		cout<<"4.Buku berdasarkan stok terbanyak: ";
    		break;
    	case 5:
    		cout<<"Judul buku berdasarkan abjad A-Z: ";
    		break;
	}
	while(i>5);
}
}

	
void cpenulis(){
    cout <<" SMenampilkan judul Buku bedasarkan penulisnya: " ;
	
}

void cjudul(){
	cout<<"Menampilkan data buku berdasarkan judul buku: ";
	
	
}
void ctertentu(){
	cout<<"Buku berdasarkan stok tertentu: ";
	
}

void cterbanyak(){
	cout<<"Buku berdasarkan stok terbanyak: ";
	
}

void abjad(){
	cout<<"Judul buku berdasarkan abjad A-Z: ";
	
}


