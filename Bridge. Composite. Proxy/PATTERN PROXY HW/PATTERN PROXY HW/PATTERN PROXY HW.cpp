#include <iostream>
#include <map>
using namespace std;

enum class States { CLOSED, OPENED };

typedef string LOGIN;
typedef string PASSWORD;

__interface IDoor
{
    void close();
    void open();
};

class Door : IDoor
{
public:
    Door();

    void open() override
    {
        cout << "Open" << endl;
        state = true;
    }

    void close() override
    {
        cout << "Close" << endl;
        state = false;
    }

    bool getState() const
    {
        return state;
    }

    void showStatus() const
    {
        cout << "State : " << boolalpha << state << endl;
    }
protected:
    bool state = false;
};

class SecureProxy
{
public:
    ~SecureProxy()
    {
        door = nullptr;
        delete[] door;
    }

    void close();
    bool getAuthorisation(LOGIN login, PASSWORD psw);
    void open(LOGIN login, PASSWORD psw);
    SecureProxy(LOGIN login, PASSWORD password);
    SecureProxy(Door* door_);
private:
    Door* door;
    map<LOGIN, PASSWORD> users;
};

int main()
{
    
}

void SecureProxy::close()
{
    
}

void SecureProxy::open(LOGIN login, PASSWORD psw)
{
    cout << "Login : " << login << "Password : " << psw << endl;
}

SecureProxy::SecureProxy(LOGIN login, PASSWORD password)
{
    users.emplace(login, password);
}
