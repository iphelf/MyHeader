#include <vector>
#include <iphelf.h>

enum class Language {
    Cpp, Java, Rust, Undefined
};

int main() {
    const auto &languages = enums<std::vector<Language>>();
    if (languages.size() != int(Language::Undefined))
        return 1;
    for (int i = 0; i < int(Language::Undefined); i++)
        if (languages[i] != Language(i))
            return 1;
    return 0;
}