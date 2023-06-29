#include<iostream>
#include<string>

using namespace std;

string thuong(string &s){
    string result ="";
    string temp = "";
    for (int i = 0; i < s.length(); i++)
        if (s[i] >= 'a' && s[i] <=  'z'){
            result += s[i];
            
        }
        else 
            temp += s[i];
    s = temp;
    return result;
}
string hoa(string &s){
    string result ="";
    string temp ="";
    for (int i = 0; i < s.length(); i++)
        if (s[i] >= 'A' && s[i] <=  'Z'){
            result += s[i];
        }
        else
            temp += s[i];
    s = temp;
    return result;
}
string so(string &s){
    string result ="";
    string temp ="";
    for (int i = 0; i < s.length(); i++)
        if (s[i] >= '0' && s[i] <=  '9'){
            result += s[i];
        }
    else    
        temp += s[i];
    s = temp;
    return result;
}

int main(){
    string s;
    cin >> s;
    cout << "Kieu chu thuong: " << thuong(s) << endl;
    cout << "Kieu chu hoa: " << hoa(s) << endl;
    cout << "Kieu chu so: " << so(s) << endl;
    cout << "Khac: " << s << endl;

    return 0;
}