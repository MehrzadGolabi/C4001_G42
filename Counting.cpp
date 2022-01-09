#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cctype>

using namespace std;

void counting_chars_words_lines(istream& in_file, int& chars, int& words, int& lines) {

    char cur = '\0';
    char last = '\0';
    chars = words = lines = 0;

    while (in_file.get(cur)) {
        if (cur == '\n' || (cur == '\f' && last == '\r'))
            lines++;
        else
            chars++;
        if (!isalnum(cur) && isalnum(last)) /* finding the end of a word */
            words++;
        last = cur;
    }
    if (chars > 0) {               // adjusting for special cases
        if (isalnum(last))
            words++;
        lines++;
    }
}

int main(int argc, char** argv) {
    ifstream in_file ("/Users/mehrzad/Documents/GitHub/C4001_G42/test_file.txt", std::ifstream::in);

    if (!in_file)
        exit(EXIT_FAILURE);

    int chars, words, lines;

    counting_chars_words_lines(in_file, chars, words, lines);
    cout << "chars: " << chars << '\n';
    cout << "words: " << words << '\n';
    cout << "lines: " << lines << '\n';
}
