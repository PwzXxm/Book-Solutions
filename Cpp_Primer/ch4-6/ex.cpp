#include <iostream>
#include <vector>
#include <string>
#include <initializer_list>

using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::begin;
using std::end;

class Chapter4 {
    public:

        void ex25() {
            //cout << (~'q' << 6) << endl;
        }

        void ex28() {
            cout << "void: nullptr_t\t" << sizeof(std::nullptr_t) << " bytes" << endl << endl;

            // boolean type
            cout << "bool:\t\t" << sizeof(bool) << " bytes" << endl << endl;

            // charactor type
            cout << "char:\t\t" << sizeof(char) << " bytes" << endl;
            cout << "wchar_t:\t" << sizeof(wchar_t) << " bytes" << endl;
            cout << "char16_t:\t" << sizeof(char16_t) << " bytes" << endl;
            cout << "char32_t:\t" << sizeof(char32_t) << " bytes" << endl << endl;

            // integers type
            cout << "short:\t\t" << sizeof(short) << " bytes" << endl;
            cout << "int:\t\t" << sizeof(int) << " bytes" << endl;
            cout << "long:\t\t" << sizeof(long) << " bytes" << endl;
            cout << "long long:\t" << sizeof(long long) << " bytes" << endl << endl;

            // floating point type
            cout << "float:\t\t" << sizeof(float) << " bytes" << endl;
            cout << "double:\t\t" << sizeof(double) << " bytes" << endl;
            cout << "long double:\t" << sizeof(long double) << " bytes" << endl << endl;

            // Fixed width integers
            cout << "int8_t:\t\t" << sizeof(int8_t) << " bytes" << endl;
            cout << "uint8_t:\t" << sizeof(uint8_t) << " bytes" << endl;
            cout << "int16_t:\t" << sizeof(int16_t) << " bytes" << endl;
            cout << "uint16_t:\t" << sizeof(uint16_t) << " bytes" << endl;
            cout << "int32_t:\t" << sizeof(int32_t) << " bytes" << endl;
            cout << "uint32_t:\t" << sizeof(uint32_t) << " bytes" << endl;
            cout << "int64_t:\t" << sizeof(int64_t) << " bytes" << endl;
            cout << "uint64_t:\t" << sizeof(uint64_t) << " bytes" << endl;
        }

        void ex31() {
            vector<int> ivec(5);

            vector<int>::size_type cnt = ivec.size();

            for (vector<int>::size_type ix = 0; ix != ivec.size(); ix++, cnt--) {
                ivec[ix] = cnt;
                cout << ivec[ix] << endl;
            }
        }
};

class Chapter6 {
    private:
        void s(int *a, int *b) {
            int tmp;
            tmp = *a;
            *a = *b;
            *b = tmp;
        }

        bool any_capital(const string &s) {
            for (int i = 0; i < s.size(); ++i) {
                if (s[i] >= 'A' && s[i] <= 'Z') return true;
            }
            return false;
        }

        void to_lowercase(string &s) {
            for (int i = 0; i < s.size(); ++i) {
                if (s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
            }
        }

        void my_print1(const int i) {
            cout << i << endl;
        }

        void my_print2(const int* bg, const int* ed) {
            while (bg != ed) {
                cout << *bg++ << " ";
            }
            cout << endl;
        }

        void my_print3(const int* j, const size_t size) {
            for (size_t i = 0; i < size; ++i) {
                cout << j[i] << " ";
            }
            cout << endl;
        }

        void my_print4(const int (&arr)[2]) {
            for (auto elem : arr) {
                cout << elem << " ";
            }
            cout << endl;
        }

    public:
        void ex10() {

            int i = 1, j = 2;
            cout << i << " " << j << endl;
            s(&i, &j);
            cout << i << " " << j << endl;
        }

        void ex17() {
            string a = "no capital letters";
            string b = "here is a Captial letter";

            cout << a << " -> " << any_capital(a) << endl;
            cout << b << " -> " << any_capital(b) << endl;
            cout << b;
            cout << " -> ";
            to_lowercase(b);
            cout << b << endl;
        }

        void ex23() {
            int i = 0, j[2] = {0, 1};
            my_print1(i);
            my_print2(begin(j), end(j));
            my_print3(j, end(j)-begin(j));
            my_print4(j);
        }

        int ex27(std::initializer_list<int> lst) {
            int sum = 0;
            for (auto i = lst.begin(); i != lst.end(); ++i) {
                sum += *i;
            }
            return sum;
        }

};

int main(void) {
    Chapter6 ch6;

    return 0;
}
