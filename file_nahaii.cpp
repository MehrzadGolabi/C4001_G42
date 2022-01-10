//grp41: Matin Moshtaghi, Mehrzad Golabi, Seied Matin Hashemi Teroujeni https://github.com/MehrzadGolabi/C4001_G42/blob/main/file_nahaii.cpp
// file daryaft esm file input va output ra be dalil tadakhol dar tavabe hanooz nadarad, dar faz dovom in moshkel bartaraf mishavad.
// dar hal hazer shamel bakhsh hai: 1- moratab sazi justify, 2- shroo khat aval az jloo tar ya indent, 6- kahesh fasele khat ha be yek khat, 8- shomaresh char ha, word ha, line ha, va paragraph ha ast.
#include <iostream>
//#include <windows.h>
#include <fstream>
//#include <conio.h>
#include <string>
#include <algorithm>


using namespace std;

string line;

void copy();

void update();

void deletspace();

void deletline();

void counting_chars_words_lines();

void indent();

void justify();


int main() {

    copy();
    //deletspace();
    deletline();
    indent();
    justify();
    counting_chars_words_lines();
    return 0;
}


void copy() {
    string line;
    ifstream input("temp.txt");
    ofstream output("ourfile.txt");
    while (!input.eof()) {
        getline(input, line);
        output << line << "\n";
    }
    input.close();
    output.close();
}

void update() {
    string line;
    ifstream input("temp.txt");
    ofstream output("ourfile.txt");
    while (!input.eof()) {
        getline(input, line);
        output << line << "\n";
    }
    input.close();
    output.close();
}

void deletspace() {
    int check = 0;
    char newstr[80];            //new string
    char c;
    int index = 0;                //for indexing the new string
    int i = 0;
    string line;
    ifstream input("temp.txt");
    ofstream output("ourfile.txt");
    while (!input.eof()) {
        getline(input, line);
        while (line[i]) {                          //while loop runs till end of string
            c = line[i];
            if (isspace(c) && check == 0) {           //check spaces
                newstr[index++] = line[i];
                check = 1;
            } else if (isalnum(c)) {                //check alphabets and numbers
                newstr[index++] = line[i];
                check = 0;
            }
            i++;
        }
    }
    output<<newstr<<endl;}

void deletline()  // hazfe khate ezafi
{
    ifstream input("temp.txt");

    ofstream fout;
    fout.open("temp2.txt", ios::out);

    string str;
    while (getline(input, str)) {
        while (str.length() == 0)
            getline(input, str);

        fout << str << endl;
    }
    fout.close();
    input.close();
    remove("temp.txt");
    rename("temp2.txt", "temp.txt");
}

void counting_chars_words_lines() {

    ifstream input("temp.txt");

    int paragraph = 1;
    char cur = '\0';
    char last = '\0';
    int newln_cnt_for_paragrapgh = 0;
    int chars = 0;
    int words = 0;
    int lines = 0;

    while (input.get(cur)) {
        if (cur == '\n' || (cur == '\f' && last == '\r'))
            lines++;
        else
            chars++;
        if (!isalnum(cur) && isalnum(last)) /* finding the end of a word */
            words++;
        last = cur;

        if (cur == '\n') {
            newln_cnt_for_paragrapgh++;
            if (newln_cnt_for_paragrapgh == 2) {
                paragraph++;
                newln_cnt_for_paragrapgh = 0;
            }
        } else { continue; }

    }
    if (chars > 0) {               // adjusting for special cases
        if (isalnum(last))
            words++;
        lines++;
    }
    cout << "chars: " << chars << '\n';
    cout << "words: " << words << '\n';
    cout << "lines: " << lines << '\n';
    cout << "paragraph: " << paragraph << '\n';
}

void indent() {
    string line;
    int i = 0;
    ifstream input("temp.txt");
    ofstream output("ourfile.txt");

    while (getline(input, line)) {
        if (i == 0) {
            output << "\t";
            output << line << "\n";
            i++;
        }
        else output << line << "\n";
    }
}

void justify(){

    std::ifstream input_file_stream( "temp.txt" );
    ofstream output("ourfile.txt");
    unsigned max_size = 0;
    for( std::string line; std::getline( input_file_stream, line );  ){
        // find the longest line
        if ( max_size < line.size() ) max_size = line.size();
    }

    input_file_stream.clear();
    input_file_stream.seekg( 0 , std::ios_base::beg );  // rewind

    for( std::string line; std::getline( input_file_stream, line );  ){

        if( line.size() == max_size ){
            output << line << '\n';

        } else if (  line.size() > 70 ) {

            line.insert( line.rfind( ' ' ),std::string(  max_size - line.size() ,' ' ) );
            output << line << '\n';

        } else {
            output << line << '\n';
        }
    }

    input_file_stream.close();

}
