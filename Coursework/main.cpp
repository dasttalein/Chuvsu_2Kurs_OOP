#include <iostream>
using namespace std;

/**********************Prototype func****************************/
void show_start(); // show main text
/****************************************************************/

/*
 * Start expert system
 */
int main () {
    system("chcp 65001"); // Translate on Russian in console

    show_start();

}


/*****************************Func********************************/
void show_start() {
    cout << "--------------------------------------------------------------------------" << endl;
    cout << "|    Вас приветствует экспертная система технического обслуживания ПК     |" << endl;
    cout << "--------------------------------------------------------------------------" << endl;
    cout << "- Для выявления проблемы нужно будет ответить на мои вопросы." << endl;
    cout << "- Либо да" << endl;
    cout << "- Либо нет" << endl;
}
/****************************************************************/



