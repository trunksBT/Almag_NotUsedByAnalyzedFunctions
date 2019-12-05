#ifndef SRC_UTILS_USERCOMMANDPARSER
#define SRC_UTILS_USERCOMMANDPARSER

#include <Utils/TypeAliases.hpp>

class UserCommandParser
{
public:
    std::string validate(const Strings& inCommand);
};

#endif  // SRC_UTILS_USER_COMMANDPARSER
