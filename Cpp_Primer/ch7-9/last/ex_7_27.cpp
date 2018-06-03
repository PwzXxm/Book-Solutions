#include<string>
#include<iostream>

class Screen {
public:
	using pos = std::string::size_type;
	Screen() = default;
	Screen(pos h, pos w, char c) : height(h), width(w), contents(h * w, c) {}

	char get() const { return contents[cursor]; }
	char get(pos r, pos c) const { return contents[r*width+c]; }

	Screen& move(pos r, pos c) { cursor = r*width+c; return *this; }
	Screen& set(char c) { contents[cursor] = c; return *this; }
	Screen& set(pos r, pos c, char ch) { contents[r*width+c] = ch; return *this; }

	const Screen& display(std::ostream &os) const { do_display(os); return *this; }
	Screen& display(std::ostream &os) { do_display(os); return *this; }

private:
	pos cursor = 0;
	pos height = 0;
	pos width = 0;
	std::string contents;
	void do_display(std::ostream &os) const { os << contents; }
};


int main(void) {
    Screen myScreen(5, 5, 'X');
    myScreen.move(4, 0).set('#').display(std::cout);
    std::cout << "\n";
    myScreen.display(std::cout);
    std::cout << "\n";

    return 0;
}
