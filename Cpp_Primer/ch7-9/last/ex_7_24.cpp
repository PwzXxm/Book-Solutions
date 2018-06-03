#include<string>

class Screen {
public:
	using pos = std::string::size_type;
	Screen() = default;
	Screen(pos h, pos w):height(h), width(w), contents(h*w, ' ') {}
	Screen(pos h, pos w, char c) : height(h), width(w), contents(h * w, c) {}

	char get() const { return contents[cursor]; }
	char get(pos r, pos c) const { return contents[r*width+c]; }

private:
	pos cursor = 0;
	pos height = 0;
	pos width = 0;
	std::string contents;
};
