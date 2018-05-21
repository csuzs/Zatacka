#ifndef CHAT_MESSAGE_HPP
#define CHAT_MESSAGE_HPP

#include <cstdio>
#include <cstdlib>
#include <cstring>
class Message{
public:
    static const int MAX_HEADER_LENGTH;
    static const int MAX_BODY_LENGTH;

    const char* getData();


private:
const char data_[MAX_HEADER_LENGTH + MAX_BODY_LENGTH];
size_t body_length;

};

#endif