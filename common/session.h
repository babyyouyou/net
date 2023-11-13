#ifndef SESSION_H
#define SESSION_H

#include <string>

#include "net.h"

namespace net {
    class Session : public boost::noncopyable {
    public:
        virtual bool isOpen() = 0;
        virtual void close() = 0;
        virtual std::string addr() = 0;
        virtual uint16_t port() = 0;
        virtual std::string remoteAddr() = 0;
        virtual uint16_t remotePort() = 0;
        virtual ~Session() = default;
    };
}// namespace net

#endif// SESSION_H