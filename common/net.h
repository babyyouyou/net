#ifndef NET_H
#define NET_H

#include <boost/asio/connect.hpp>
#include <boost/asio/io_context.hpp>
#include <boost/asio/ip/tcp.hpp>
#include <boost/beast/core.hpp>
#include <boost/beast/http.hpp>
#include <boost/beast/version.hpp>
#include <boost/beast/websocket.hpp>
#include <boost/system/error_code.hpp>
#include <iostream>

namespace net {
    using io_context = boost::asio::io_context;
    using error_code = boost::system::error_code;
    using tcp = boost::asio::ip::tcp;
    namespace bs_http = boost::beast::http;
    namespace bs_ws = boost::beast::websocket;
}// namespace net

#endif// NET_H