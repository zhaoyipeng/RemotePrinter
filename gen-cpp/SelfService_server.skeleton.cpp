// This autogenerated skeleton file illustrates how to build a server.
// You should copy it to another filename to avoid overwriting it.

#include "SelfService.h"
#include <thrift/protocol/TBinaryProtocol.h>
#include <thrift/server/TSimpleServer.h>
#include <thrift/transport/TServerSocket.h>
#include <thrift/transport/TBufferTransports.h>

using namespace ::apache::thrift;
using namespace ::apache::thrift::protocol;
using namespace ::apache::thrift::transport;
using namespace ::apache::thrift::server;

using boost::shared_ptr;

using namespace  ::userdefined;

class SelfServiceHandler : virtual public SelfServiceIf {
 public:
  SelfServiceHandler() {
    // Your initialization goes here
  }

  void OpenPrinterA(std::map<std::string, int64_t> & _return, const std::string& pPrinterName, const bool pDefaultExist, const std::string& pDatatype, const std::string& pDevMode, const int32_t DesiredAccess) {
    // Your implementation goes here
    printf("OpenPrinterA\n");
  }

  void OpenPrinterW(std::map<std::string, int64_t> & _return, const std::string& pPrinterName, const bool pDefaultExist, const std::string& pDatatype, const std::string& pDevMode, const int32_t DesiredAccess) {
    // Your implementation goes here
    printf("OpenPrinterW\n");
  }

  bool StartPagePrinter(const int64_t hPrinter) {
    // Your implementation goes here
    printf("StartPagePrinter\n");
  }

  int32_t StartDocPrinterW(const int64_t hPrinter, const int32_t Level, const std::string& pDocName, const std::string& pOutputFile, const std::string& pDatatype) {
    // Your implementation goes here
    printf("StartDocPrinterW\n");
  }

  void WritePrinter(std::map<std::string, int32_t> & _return, const int64_t hPrinter, const std::string& pBuf, const int32_t cbBuf) {
    // Your implementation goes here
    printf("WritePrinter\n");
  }

  bool EndPagePrinter(const int64_t hPrinter) {
    // Your implementation goes here
    printf("EndPagePrinter\n");
  }

  bool EndDocPrinter(const int64_t hPrinter) {
    // Your implementation goes here
    printf("EndDocPrinter\n");
  }

  bool ClosePrinter(const int64_t hPrinter) {
    // Your implementation goes here
    printf("ClosePrinter\n");
  }

  bool CloseSpoolFileHandle(const int64_t hPrinter, const int64_t hSpoolFile) {
    // Your implementation goes here
    printf("CloseSpoolFileHandle\n");
  }

  int64_t CommitSpoolData(const int64_t hPrinter, const int64_t hSpoolFile, const int32_t cbCommit) {
    // Your implementation goes here
    printf("CommitSpoolData\n");
  }

  void DocumentEvent(std::map<std::string, std::string> & _return, const int64_t hPrinter, const int64_t hdc, const int32_t iEsc, const int32_t cbIn, const std::string& pvIn, const int32_t cbOut, const std::string& pvOut) {
    // Your implementation goes here
    printf("DocumentEvent\n");
  }

  void DocumentPropertiesW(std::map<std::string, std::string> & _return, const int64_t hWnd, const int64_t hPrinter, const std::string& pDeviceName, const std::string& pDevModeInput, const int32_t fMode) {
    // Your implementation goes here
    printf("DocumentPropertiesW\n");
  }

  void EnumFormsW(std::map<std::string, std::string> & _return, const int64_t hPrinter, const int32_t Level, const int32_t cbBuf) {
    // Your implementation goes here
    printf("EnumFormsW\n");
  }

  void EnumPrintersW(std::map<std::string, std::string> & _return, const int32_t Flags, const std::string& Name, const int32_t Level, const int32_t cbBuf) {
    // Your implementation goes here
    printf("EnumPrintersW\n");
  }

  bool FindClosePrinterChangeNotification(const int64_t hChange) {
    // Your implementation goes here
    printf("FindClosePrinterChangeNotification\n");
  }

  int64_t FindFirstPrinterChangeNotification(const int64_t hPrinter, const int32_t fdwFilter, const int32_t fdwOptions, const std::string& pPrinterNotifyOptions) {
    // Your implementation goes here
    printf("FindFirstPrinterChangeNotification\n");
  }

  void FindNextPrinterChangeNotification(std::map<std::string, std::string> & _return, const int64_t hChange, const std::string& pPrinterNotifyOptions) {
    // Your implementation goes here
    printf("FindNextPrinterChangeNotification\n");
  }

  bool FreePrinterNotifyInfo(const std::string& pPrinterNotifyInfo) {
    // Your implementation goes here
    printf("FreePrinterNotifyInfo\n");
  }

  void GetDefaultPrinterW(ArgGetDefaultPrinterW& _return, const ArgGetDefaultPrinterW& arg) {
    // Your implementation goes here
    printf("GetDefaultPrinterW\n");
  }

  void GetPrinterDataW(std::map<std::string, std::string> & _return, const int64_t hPrinter, const std::string& pValueName, const int32_t nSize) {
    // Your implementation goes here
    printf("GetPrinterDataW\n");
  }

  void GetPrinterDataExW(std::map<std::string, std::string> & _return, const int64_t hPrinter, const std::string& pKeyName, const std::string& pValueName, const int32_t nSize) {
    // Your implementation goes here
    printf("GetPrinterDataExW\n");
  }

  void GetPrinterW(std::map<std::string, std::string> & _return, const int64_t hPrinter, const int32_t Level, const int32_t cbBuf) {
    // Your implementation goes here
    printf("GetPrinterW\n");
  }

  int64_t GetSpoolFileHandle(const int64_t hPrinter) {
    // Your implementation goes here
    printf("GetSpoolFileHandle\n");
  }

  bool IsValidDevmodeW(const std::string& pDevmode, const int32_t DevmodeSize) {
    // Your implementation goes here
    printf("IsValidDevmodeW\n");
  }

  void OpenPrinter2W(std::map<std::string, int64_t> & _return, const std::string& pPrinterName, const bool pDefaultExist, const std::string& pDatatype, const std::string& pDevMode, const int32_t DesiredAccess, const std::string& pOptions) {
    // Your implementation goes here
    printf("OpenPrinter2W\n");
  }

  void OpenPrinter2A(std::map<std::string, int64_t> & _return, const std::string& pPrinterName, const bool pDefaultExist, const std::string& pDatatype, const std::string& pDevMode, const int32_t DesiredAccess, const std::string& pOptions) {
    // Your implementation goes here
    printf("OpenPrinter2A\n");
  }

  int32_t OpenUsbPort(const int32_t dwModel) {
    // Your implementation goes here
    printf("OpenUsbPort\n");
  }

  int32_t CloseUsbPort() {
    // Your implementation goes here
    printf("CloseUsbPort\n");
  }

  int32_t WriteUSB(const std::string& pBuffer, const int32_t nNumberOfBytesToWrite) {
    // Your implementation goes here
    printf("WriteUSB\n");
  }

  int32_t ReadUSB(const std::string& pBuffer, const int32_t nNumberOfByteToRead) {
    // Your implementation goes here
    printf("ReadUSB\n");
  }

  int32_t PrintBitmap(const std::string& pbmpDir, const std::string& data) {
    // Your implementation goes here
    printf("PrintBitmap\n");
  }

  int32_t Print1DBarcode(const int32_t nCodeType, const int32_t nWidth, const int32_t nHeight, const int32_t nHRI, const std::string& pBuffer) {
    // Your implementation goes here
    printf("Print1DBarcode\n");
  }

  int32_t PrintPDF417(const int32_t nColumns, const int32_t nRows, const int32_t nWidth, const int32_t nHeight, const int32_t nECLevel, const int32_t nModule, const std::string& pBuffer, const std::string& data) {
    // Your implementation goes here
    printf("PrintPDF417\n");
  }

  int32_t PrintQRCode(const int32_t nModule, const int32_t nSize, const int32_t nECLevel, const std::string& pBuffer) {
    // Your implementation goes here
    printf("PrintQRCode\n");
  }

};

int main(int argc, char **argv) {
  int port = 9090;
  shared_ptr<SelfServiceHandler> handler(new SelfServiceHandler());
  shared_ptr<TProcessor> processor(new SelfServiceProcessor(handler));
  shared_ptr<TServerTransport> serverTransport(new TServerSocket(port));
  shared_ptr<TTransportFactory> transportFactory(new TBufferedTransportFactory());
  shared_ptr<TProtocolFactory> protocolFactory(new TBinaryProtocolFactory());

  TSimpleServer server(processor, serverTransport, transportFactory, protocolFactory);
  server.serve();
  return 0;
}

