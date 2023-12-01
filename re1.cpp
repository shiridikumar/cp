#include <iostream>
#include <bits/stdc++.h>
using namespace std;

template <typename T>
struct A
{
    static constexpr int value = 0;
};
template <typename T>
struct A<T *>
{
    static constexpr int value = 1;
};

template <typename T>
struct B
{
    using type = T;
};

template <typename T>
struct B<T *>
{
    using type = T;
};

int main()
{
    auto a = 5;
    auto b = &a;
    auto c=&b;
    cout << A<decltype(a)>::value << " ";
    cout << A<decltype(b)>::value << " ";
    cout << A < decltype(c)>::value << " ";
    cout << A < B<decltype(b)>::type>::value << " ";
    cout << A < B<decltype(c)>::type>::value << " ";
    cout<< A<B<B<decltype(c)>::type>::type>::value<<"\n";
}

// int main(){
//     int test;
//     cin>>test;
//     for(int tes=0;tes<test;tes++){
//         int n;

//     }
// }