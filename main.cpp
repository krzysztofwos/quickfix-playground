#include <iostream>

#include <quickfix/Application.h>
#include <quickfix/FileLog.h>
#include <quickfix/FileStore.h>
#include <quickfix/Session.h>
#include <quickfix/SessionSettings.h>
#include <quickfix/SocketInitiator.h>

#include "Application.h"

int main(int argc, char** argv) {
    try {
        if (argc < 2) {
            std::cout << "Usage: " << argv[0] << " <CONFIG_FILE_PATH>" << '\n';
            return 1;
        }
        std::string config_file_path = argv[1];
        FIX::SessionSettings settings(config_file_path);
        Application application;
        FIX::FileStoreFactory store_factory(settings);
        FIX::FileLogFactory log_factory(settings);
        FIX::SocketInitiator initiator(application, store_factory, settings,
            log_factory);
        initiator.start();
        while (true) {
            // do something
        }
        initiator.stop();
        return 0;
    } catch (FIX::ConfigError& e) {
        std::cout << e.what() << '\n';
        return 1;
    }
}
