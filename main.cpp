#pragma once;
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;
using namespace std;

class Demo {
public:
    void setStat(int s) { stat = s; }
    int getStat() { return stat; }
private:
    static int stat;
 };

 int Demo::stat = 1;

 int main(void) {

  Demo d1, d2;
     d1.setStat(5); // Damit wird stat fuer alle Objekte geaendert!

 cout << d2.getStat();
 }