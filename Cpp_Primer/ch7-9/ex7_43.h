class NoDefault {
public:
    NoDefault(int a): i(a) {};
private:
    int i;
};

class C {
public:
    C(): nd(0) {};
private:
    NoDefault nd;
};
