#include <iostream>
#include <fstream>
#include <vector>
#include <memory>
#include <string>
#include <stdexcept>

class StrBlobPtr;

class StrBlob {
public:
    typedef std::vector<std::string>::size_type st;
    friend class StrBlobPtr;

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

    StrBlobPtr begin();
    StrBlobPtr end();

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


class StrBlobPtr {
public:
    StrBlobPtr(): curr(0) {  }
    StrBlobPtr(StrBlob &a, size_t sz = 0): wptr(a.data), curr(sz) {  }

    bool operator != (StrBlobPtr &p) { return p.curr != curr; }

    std::string&deref() const {
        auto p = check(curr, "deref");
        return (*p)[curr];
    }
    StrBlobPtr& incr() {
        check(curr, "incr");
        ++curr;
        return *this;
    }
private:
    std::shared_ptr<std::vector<std::string>> check(std::size_t, const std::string&) const;
    std::weak_ptr<std::vector<std::string>> wptr;
    std::size_t curr;
};



std::shared_ptr<std::vector<std::string>>
StrBlobPtr::check(std::size_t i, const std::string &msg) const {
    auto ret = wptr.lock();
    if (!ret)
        throw std::runtime_error("unbound StrBlobPtr");
    if (i >= ret->size())
        throw std::out_of_range(msg);
    return ret;
}


StrBlobPtr StrBlob::begin() { return StrBlobPtr(*this); }

StrBlobPtr StrBlob::end() { auto ret=StrBlobPtr(*this, data->size()); return ret; }


int main() {
    std::ifstream fin("data/StrBlob.in");

    StrBlob blob;

    for (std::string str; std::getline(fin, str);)
        blob.push_back(str);

    for (StrBlobPtr it(blob.begin()), ed(blob.end()); it != ed; it.incr())
        std::cout << it.deref() << std::endl;



    return 0;
}
