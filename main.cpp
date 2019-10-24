#include <iostream>
#include <cstring>


using namespace std;

void isGreater(string a, string b){

    if(strncmp(a, b, 1) == 1){
        cout<< "First string " << a << " is larger than second string " << b << endl;
    }

}
int main()
{
    string a;
    string b;

    a = 'a';
    b = 'b';

    isGreater(a, b);

    cout << "Hello world!" << endl;
    return 0;
}
