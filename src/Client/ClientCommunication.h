#include <string>
#include <windows.h>
#include <vector>

class ClientCommunication 
{
private:
    HANDLE hSerial;
    std::wstring portName;
    
    std::wstring readArduinoCOMPort(const std::wstring& configFile);
public:
    ClientCommunication();
    ~ClientCommunication();

    void sendMessage(const std::string& message);
    std::vector<std::string> receiveMessage();
    HANDLE setupSerial(const std::wstring& portName);

    HANDLE GethSerial();
};
