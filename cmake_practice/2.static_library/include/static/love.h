#ifndef _LOVE_H_
#define _LOVE_H_

#include <string>

class Love {
public:
    Love();
    ~Love();
    void printLove(std::string love);
private:
    std::string love;
};

#endif //_LOVE_H_