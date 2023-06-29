/*Viết chương trình tạo một file chứa các số nguyên có tên SONGUYEN.INP. 
Sau đó đọc file SONGUYEN.INP và ghi các số chẵn vào file SOCHAN.OUT và 
những số lẻ vào file SOLE.OUT. */
#include <iostream>
#include <string>
#include <math.h>
#include <fstream>
using namespace std;

int main()
{
    fstream file("SONGUYEN.INP", ios::out);
    for (int i = 0; i < 5000; i++)
    {
        file << rand() % 5000 << " ";
    }
    file.close();

    file.open("SONGUYEN.INP", ios::in);
    fstream fChan("SOCHAN.OUT", ios::out);
    fstream fLe("SOLE.OUT", ios::out);
    for (int i = 0; i < 5000; i++)
    {
        int temp;
        file >> temp;
        if (temp % 2 == 0)
        {
            fChan << temp << " ";
        }
        else
        {
            fLe << temp << " ";
        }
    }
    fChan.close();
    fLe.close();

    return 0;
}