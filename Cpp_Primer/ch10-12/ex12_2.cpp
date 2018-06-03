#include <iostream>
#include <vector>
#include <memory>
#include <string>

class StrBlob {
public:
    typedef std::vector<std::string>::size_type st;

    StrBlob();
    StrBlob(std::initializer_list<std::string>);

    st size() const { return data->size(); }
    bool empty() const { return data->empty(); }
    void push_back(const std::string &t) { data->push_back(t); }
    void pop_back();
    std::string& front();
    std::string& back();
    const std::string& front() const;
    const std::string& back() const;

private:
    std::shared_ptr<std::vector<std::string>> data;
    void check(st i, const std::string &msg) const;
};

StrBlob::StrBlob(): data(std::make_shared<std::vector<std::string>>()) {};
StrBlob::StrBlob(std::initializer_list<std::string> il): data(std::make_shared<std::vector<std::string>>(il)) {}

void StrBlob::check(st i, const std::string &msg) const {
    if (i >= data->size()) throw std::out_of_range(msg);
}

std::string& StrBlob::front() {
    check(0, "front on empty");
    return data->front();
}

std::string& StrBlob::back() {
    check(0, "back on empty");
    return data->back();
}

const std::string& StrBlob::front() const{
    check(0, "front on empty");
    return data->front();
}

const std::string& StrBlob::back() const{
    check(0, "back on empty");
    return data->back();
}

void StrBlob::pop_back() {
    check(0, "pop_back on empty");
    data->pop_back();
}


int main() {

    StrBlob b1;
    {
        StrBlob b2 = { "a", "an", "the"};
        b1 = b2;
        b2.push_back("about");
        std::cout << b1.size() << std::endl;
        std::cout << b2.size() << std::endl;
    }
    std::cout << b1.size() << std::endl;


    return 0;
}
