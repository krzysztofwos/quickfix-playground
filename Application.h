#include <quickfix/Application.h>
#include <quickfix/Exceptions.h>
#include <quickfix/Message.h>
#include <quickfix/Session.h>

class Application : public FIX::Application {
public:
  ~Application(){};
  void onCreate(const FIX::SessionID &) override;
  void onLogon(const FIX::SessionID &) override;
  void onLogout(const FIX::SessionID &) override;
  void toAdmin(FIX::Message &, const FIX::SessionID &) override;
  void toApp(FIX::Message &,
             const FIX::SessionID &) throw(FIX::DoNotSend) override;
  void fromAdmin(const FIX::Message &,
                 const FIX::SessionID &) throw(FIX::FieldNotFound,
                                               FIX::IncorrectDataFormat,
                                               FIX::IncorrectTagValue,
                                               FIX::RejectLogon) override;
  void fromApp(const FIX::Message &, const FIX::SessionID &) throw(
      FIX::FieldNotFound, FIX::IncorrectDataFormat, FIX::IncorrectTagValue,
      FIX::UnsupportedMessageType) override;
};
