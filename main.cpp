#include "elementary/ElementaryApplication.h"
#include "utils/Logging.h"

int main() {
    Application* app = new ElementaryApplication();
    Logging::debug("Starting my %d application", 1);
    app->run();
    return 0;
}