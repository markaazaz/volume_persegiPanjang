// Online C++ compiler to run C++ program online
#include <iostream>

float menghitungVolume (float panjang, float lebar, float tinggi) {
    return panjang * lebar * tinggi;
}

int main() {
    begin:
    float panjang, lebar, tinggi;
    float volume;
    char hitung_lagi;
    
    std::cout << "=====================================\n";
    std::cout << "= Menghitung Volume Persegi Panjang =\n";
    std::cout << "=====================================\n";
    
    
    std::cout << "Masukkan Panjang:";
    std::cin >> panjang;
    
    std::cout << "Masukkan Lebar:";
    std::cin >> lebar;
    
    std::cout << "Masukkan Tinggi:";
    std::cin >> tinggi;
    
    volume = menghitungVolume(panjang, lebar, tinggi);
    
    std::cout << "Volume Persegi Panjang: " << volume << "\n";
    
    std::cout << "Apakah Anda Ingin Menghitung Lagi? (Y/N): ";
    std::cin >> hitung_lagi;
    while (hitung_lagi == 'Y' || hitung_lagi == 'y')
    {
        goto begin;
    }
    
    std::cout << "===========================================\n";
    std::cout << "Terima Kasih Telah Menggunakan Aplikasi ini\n";
    
    

    return 0;
}
