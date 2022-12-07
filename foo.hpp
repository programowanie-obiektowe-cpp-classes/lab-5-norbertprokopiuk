#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    // Twoja implementacja tutaj
    std::vector< char > result;
    for (auto iter = people.rbegin(); iter != people.rend(); ++iter) {
        (*iter).birthday();
        if ((*iter).isMonster()) {
            result.push_back('n');
        }
        else {
            result.push_back('y');
        }
    }
    return result;
}
