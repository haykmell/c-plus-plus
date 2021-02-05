
#include <algorithm>
#include <iostream>
using namespace std;

bool is_vowel(const char p_char)
{

    constexpr char vowels[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    return find(begin(vowels), end(vowels), p_char) != end(vowels);
}

string remove_vowel(string st)
{
    auto to_erase = remove_if(st.begin(), st.end(), is_vowel);
    st.erase(to_erase, st.end());
    return st;
}

int main()
{
    string name;

    cout << "Please enter your name: ";
    getline(cin, name);

    cout << remove_vowel(name) << endl;
}