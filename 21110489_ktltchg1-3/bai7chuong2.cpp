//Thực hiện xóa bỏ khoảng trắng thừa và viết hoa đầu từ một chuỗi ký tự cho trước
#include<iostream>
#include<string>
using namespace std;

void process (string &s){
    while (s[0] == ' ')
        s.erase(0,1);
    while (s[s.length()] == ' ')
        s.erase(s.length(), 1);
    for (int i = 0; i < s.length(); i++)
        if (s[i] == ' ' && s[i+1] == ' ')
            s.erase(i, 1);
    if (s[0] >= 'a' && s[0] <= 'z')
        s[0] = toupper(s[0]);
}

int main(){
    string s;
    getline(cin, s);
    process(s);
    cout << s;
    return 0;
}