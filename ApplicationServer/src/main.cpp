#include <iostream>
#include <signal.h>
#include <zconf.h>
#include "controllers/HelloWorldController.h"
#include "../lib/mongoose/Server.h"
#include "../lib/mongoose/WebController.h"

using namespace std;
using namespace Mongoose;

int main() {
    HelloWorldController myController;
    Server server(8080);
    server.registerController(&myController);

    server.start();

    while (1) {
        sleep(10);
    }
}