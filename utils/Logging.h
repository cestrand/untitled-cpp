//
// Created by marcin2 on 07.08.17.
//

#ifndef UNTITLED_LOGGING_H
#define UNTITLED_LOGGING_H

#include <string>
#include <cstdarg>

enum LogLevel {
    DEBUG,
    INFO,
    WARNING,
    ERROR
};


class Logging {
public:
    static Logging &getInstance() {
        static Logging instance; // Guaranteed to be destroyed.
        // Instantiated on first use.
        return instance;
    }

private:
    Logging() = default;

    static std::string timestamp();

public:
    Logging(Logging const &) = delete;

    void operator=(Logging const &) = delete;

    void log(const LogLevel &level, const std::string &msg, va_list args);

    static void debug(const std::string msg, ...) {
        va_list args;
        va_start(args, msg);
        getInstance().log(DEBUG, msg, args);
        va_end(args);

    }
};

#endif //UNTITLED_LOGGING_H
