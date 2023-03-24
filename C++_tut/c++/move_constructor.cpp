#include <iostream>
#include <string>
using namespace std;
#include <vector>
class Move
{

private:
    int *data;

public:
    void set_data_value(int d) { *data = d; }
    int get_data_value() { return *data; }
    // constructor
    Move(int d);
    // copy constructor
    Move(const Move &source);
    // move constructor
    Move(Move &&source) noexcept;
    // Destructor
    ~Move();
};
Move::Move(int d)
{
    data = new int;
    *data = d;
    cout << "Constructor for: " << *data << endl;
}
// copy constructor
Move::Move(const Move &source)

    : Move(*source.data)
{
    cout << "copy constructor -deep copy for: " << *data << endl;
}
// move constructor
Move::Move(Move &&source) noexcept
    : data{source.data}
{
    source.data = nullptr;
    cout << "Move constructor -moving resource " << *data << endl;
}
Move::~Move()
{
    if (data != nullptr)
        cout << "Destructor freeing data for: " << *data << endl;
    else
        cout << "Destructor freeing data for nullptr" << endl;
    delete data;
}
int main()
{

    vector<Move> vec;
    vec.push_back(Move{10});
    vec.push_back(Move{20});
    vec.push_back(Move{30});
    vec.push_back(Move{40});

    return 0;
}