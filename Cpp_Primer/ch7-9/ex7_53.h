class Debug {
public:
    constexpr Debug(bool b = true) : rt(b), io(b), oth(b) {}
    constexpr Debug(bool r, bool i, bool o) : rt(r), io(i), oth(o) {}
    constexpr bool any() { return rt || io || oth; }

    void set_rt(bool b) { rt = b; }
    void set_io(bool b) { io = b; }
    void set_other(bool b) { oth = b; }

private:
    bool rt;
    bool io;
    bool oth;
};

