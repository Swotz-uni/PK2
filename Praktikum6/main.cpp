#include <iostream>
#include "linkedList.cpp"
using namespace std;

void ausgabe(const char *text)
{
    cout << "Ausgabe: " << text << endl;
}

int main()
{
    LinkedList list;
    list.append("a");
    list.append("a");
    list.append("a");
    list.append("a");
    list.append("a");
    list.append("a");
    list.append("a");
    list.insert("c",4);
    list.remove(2);
    cout << list.get(2) << endl;
    cout << list.index_of("c") << endl;
    cout << "First: " << list.get_first() << endl;
    cout << "Last: " << list.get_last() << endl;
    list.visit_all(&ausgabe);
}






