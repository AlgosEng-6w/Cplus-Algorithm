#include<iostream>
#include<string>
using namespace std;

int main()
{
    string user_name;
    cout << "Please enter your first name: ";
    cin >> user_name;
    cout << "\n"
         << "Hello, "
         << user_name
         << "... and goodbye!\n";
    return 0;
}

// 练习1.1
// 练习1.2：注释掉string头文件之后没有影响，注释掉名称曝光直接报错无法编译（报错如下）

// PS D:\vscode_code\Cplus-algorithm\language> g++ main.cpp -o main
// main.cpp: In function 'int main()':
// main.cpp:7:5: error: 'string' was not declared in this scope
//      string user_name;
//      ^~~~~~
// main.cpp:7:5: note: suggested alternative:
// In file included from D:/mingw64/lib/gcc/x86_64-w64-mingw32/8.1.0/include/c++/iosfwd:39,
//                  from D:/mingw64/lib/gcc/x86_64-w64-mingw32/8.1.0/include/c++/ios:38,
//                  from D:/mingw64/lib/gcc/x86_64-w64-mingw32/8.1.0/include/c++/ostream:38,
//                  from D:/mingw64/lib/gcc/x86_64-w64-mingw32/8.1.0/include/c++/iostream:39,
//                  from main.cpp:1:
// D:/mingw64/lib/gcc/x86_64-w64-mingw32/8.1.0/include/c++/bits/stringfwd.h:74:33: note:   'std::__cxx11::string'
//    typedef basic_string<char>    string;
//                                  ^~~~~~
// main.cpp:8:5: error: 'cout' was not declared in this scope
//      cout << "Please enter your first name: ";
//      ^~~~
// main.cpp:8:5: note: suggested alternative:
// In file included from main.cpp:1:
// D:/mingw64/lib/gcc/x86_64-w64-mingw32/8.1.0/include/c++/iostream:61:18: note:   'std::cout'
//    extern ostream cout;  /// Linked to standard output
//                   ^~~~
// main.cpp:9:5: error: 'cin' was not declared in this scope
//      cin >> user_name;
//      ^~~
// main.cpp:9:5: note: suggested alternative:
// In file included from main.cpp:1:
// D:/mingw64/lib/gcc/x86_64-w64-mingw32/8.1.0/include/c++/iostream:60:18: note:   'std::cin'
//    extern istream cin;  /// Linked to standard input
//                   ^~~
// main.cpp:9:12: error: 'user_name' was not declared in this scope
//      cin >> user_name;
//             ^~~~~~~~~
// main.cpp:9:12: note: suggested alternative: 'rename'
//      cin >> user_name;
//             ^~~~~~~~~
//             rename

// 练习1.3：无法正常编译

// PS D:\vscode_code\Cplus-algorithm\language> g++ main.cpp -o main
// D:/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/8.1.0/../../../../x86_64-w64-mingw32/lib/../lib/libmingw32.a(lib64_libmingw32_a-crt0_c.o):crt0_c.c:(.text.startup+0x2e): undefined reference to `WinMain'
// collect2.exe: error: ld returned 1 exit status