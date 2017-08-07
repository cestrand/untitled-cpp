//
// Created by marcin2 on 07.08.17.
//

#include "Logging.h"
#include <boost/date_time/posix_time/posix_time.hpp>

void Logging::log(const LogLevel &level, const std::string &msg, va_list args) {
    auto copied_msg = std::string(msg);
    auto formatted_msg = new char[256];
    std::vsnprintf(formatted_msg, 256, copied_msg.c_str(), args);
    auto log_message = new char[256];
    std::snprintf(log_message, 256, "%s\t%s\n", timestamp().c_str(), formatted_msg);
    std::cout<<log_message;
}

std::string Logging::timestamp() {
    boost::posix_time::ptime utc_time_now = boost::posix_time::microsec_clock::universal_time();
    return boost::posix_time::to_iso_extended_string(utc_time_now);
}
