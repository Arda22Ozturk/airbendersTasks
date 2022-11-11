
#include <clocale>
#include <iostream>




int main() {

    setlocale(LC_ALL, "Turkish");

    std::string birler [10] = {"", "bir", "iki", "üç", "dört", "beş", "altı", "yedi", "sekiz", "dokuz"};

    std::string onlar[10] = {"", "on", "yirmi", "otuz", "kırk", "elli", "altmış", "yetmiş", "seksen", "doksan"};

    std::string yuzler[10] = {"", "yüz", "ikiyüz", "üçyüz", "dörtyüz", "beşyüz", "altıyüz", "yediyüz", "sekizyüz", "dokuzyüz"};

    int a;

    std::cout << "0 ile 999 arasında bir sayı giriniz." << std::endl;

    std::cin >> a;

    int a1 = a % 10;

    a = a - a1;

    int a2 = (a % 100)/10;

    a = (a - a2)/100;

    if (a == a1)
    {
        if (a1 == a2)
        {
            std::cout << "sıfır";
        }
        
    }
    
    std::cout << yuzler[a] << " " << onlar[a2] << " " << birler[a1]; 
  
  return 0;
}
