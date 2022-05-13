#include <iostream>
#include <string>
#include "parser.h"

using namespace std;


int main(){

    cout<<"There has to be a starting symbol which is marked with 'S'"<<endl;
    cout<<"The rules follow the the following format: D>DkLsdk where D is a"<<endl;
    cout<<"non-terminal (all capitals are considered non-terminals)"<<endl<<endl;
    cout<<"Every rule must be given separately which means you cannot do for "<<endl;
    cout<<"for EG. S>sd,Lksd -> this has to be given in the following format: S>sd S>Lksd"<<endl;
    cout<<"The input must be only one line as well as the input word"<<endl<<endl;

    string rules= "S>T+S S>T T>a T>b";
    string input = "ab";

    cout << "The rules: " << rules << endl;
    cout << "The input word: " << input << endl << endl;

    //system("pause");

    TopDownParser TDP(rules,input);

    TDP.print_rules_content();

    return 0;
}

