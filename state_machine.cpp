#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>

class Node{
    string name;
    map<Node, vector<std::function>> actions;
};

class functions{

    public:
    Node& funcion1();
    Node& funcion2();
    Node& funcion3();
    Node& funcion4();
    Node& funcion5();

};

class StateMachine {
public:

    void run(int event){

        std::function func = resolve(event);

        current_state = func();

    }

    std::function& resolve(int event){

    }


    StateMachine(const std::string& initial_state) : current_state(initial_state) {}

    void build_state_machine(){

    }

    void setState(const std::string& state) {
        current_state = state;
    }

    const std::string& getCurrentState() const {
        return current_state;
    }

private:
    std::string current_state;
    std::unordered_map<Node, unordered_map<Node> states_graph;
};

int main() {

    return 0;
}
