#include <iostream>
#include <string>
using namespace std;
class publ{
protected:
    string name;float cost;
public:
    publ(): name(""),cost(0){};
    void getdata(){
        cout <<"Enter name of publication (string): ";cin >>name;
        cout <<"Enter cost of publication: ";cin >>cost;
    }
    void putdata(){
        cout <<"Name of publication: "<<name<<endl<<"Cost of publication: "<<cost<<endl;
    }

};
class book : public publ{
protected:
    int page;
public:
    void getdata(){
        publ::getdata();
        cout <<"How much page in book: ";cin >> page;
    }
    void putdata(){
        publ::putdata();
        cout<<"Page in book: "<<page<<endl;
    }
};
class type : public publ{
protected:
    float time;
public:
    void getdata(){
        publ::getdata();
        cout<<"How much time in audiobook: ";cin >>time;
    }
    void putdata(){
        publ::putdata();
        cout <<"Time of audiobook: "<<time<<endl;
    }

};
int main() {
    book a;type b;a.getdata();b.getdata();a.putdata();b.putdata();int asd =4486486;
    return 0;
}
