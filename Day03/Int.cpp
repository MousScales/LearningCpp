#include <iostream>
#include <climits>

int main()
{
    int x;
    short a;
    long b;
    long long c;
    // in terms of bits
    // short <= int <= long <= long long
    unsigned int xx;
    unsigned short aa;
    unsigned long bb;
    unsigned long long cc;
    // these only allow positive values



    std::cout << sizeof(short) << '\n';
    // shows amt of memory for integral type
    // answer is in bytes and ea byte is 8 bits

    std::cout << SHRT_MAX << '/n';
    // shows max u can store in this memory size
    std::cout << SHRT_MIN << '/n';
    // shows min u can store in this memory size
    std::cout << USHRT_MAX << '/n';
    // shows unsigned max u can store in this memory size
    std::cout << INT_MAX << '/n';
    std::cout << INT_MIN << '/n';
    std::cout << UINT_MAX << '/n';

    std::cout << LONG_MAX << '/n';
    std::cout << LONG_MIN << '/n';
    std::cout << ULONG_MAX << '/n';

    std::cout << LONG_LONG_MAX << '/n';
    std::cout << LONG_LONG_MIN << '/n';
    std::cout << ULONG_LONG_MAX << '/n';


}