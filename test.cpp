#include <map>
#include <string>

int main() {
    const std::map<char, std::string> testmap{std::make_pair('+', "plus")};
    auto a = testmap;
    return 0;
}
