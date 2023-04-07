#include <iostream>

#include "Application.h"

void Application::onCreate(const FIX::SessionID& session_id) {
    std::cout << "Create " << session_id << '\n';
}

void Application::onLogon(const FIX::SessionID& session_id) {
    std::cout << "Logon " << session_id << '\n';
}

void Application::onLogout(const FIX::SessionID& session_id) {
    std::cout << "Logout " << session_id << '\n';
}

void Application::toAdmin(FIX::Message& message, const FIX::SessionID& session_id) {
    std::cout << "toAdmin " << session_id << ": " << message << '\n';
}

void Application::toApp(FIX::Message&,
    const FIX::SessionID& session_id) throw(FIX::DoNotSend) {
    std::cout << "toApp " << session_id << '\n';
}

void Application::fromAdmin(const FIX::Message& message, const FIX::SessionID& session_id) throw(
    FIX::FieldNotFound, FIX::IncorrectDataFormat, FIX::IncorrectTagValue,
    FIX::RejectLogon) {
    std::cout << "fromAdmin " << session_id << ": " << message << '\n';
}

void Application::fromApp(const FIX::Message& message, const FIX::SessionID& session_id) throw(
    FIX::FieldNotFound, FIX::IncorrectDataFormat, FIX::IncorrectTagValue,
    FIX::UnsupportedMessageType) {
    std::cout << "fromApp " << session_id << ": " << message << '\n';
}
