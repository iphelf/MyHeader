#include <iphelf.h>
#include <iostream>
#include <string>

class Animal {
public:
    virtual std::string greet() const = 0;
};

class Human : public Animal {
public:
    std::string greet() const override {
        return "Hello!";
    }
};

int main() {
    P<Human> human;
    human = mP<Human>();
    auto animal = castP<Animal>(human);
    if (animal.use_count() != 2) return 1;
    if (animal->greet() != "Hello!") return 1;
    if ((void *) (animal.get()) != (void *) (human.get())) return 1;
    return 0;
}
