#include <iostream>
#include <string>
using namespace std;

class Account
{
    public:
        string id;
        int level;

        Account(string id, int level)
        {
            this->id = id;
            this->level = level;
        }
};

void printAccountInfo(Account& account)
{
    cout << "user " << account.id << " lv " << account.level << endl;
}


int main() {
    Account account1("codetree", 10);
    string id;
    int level;

    cin >> id >> level;
    Account account2(id, level);

    printAccountInfo(account1);
    printAccountInfo(account2);
    return 0;
}