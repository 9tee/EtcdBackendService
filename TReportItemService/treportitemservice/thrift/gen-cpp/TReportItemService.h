/**
 * Autogenerated by Thrift Compiler (0.11.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef TReportItemService_H
#define TReportItemService_H

#include <thrift/TDispatchProcessor.h>
#include <thrift/async/TConcurrentClientSyncInfo.h>
#include "treportitem_types.h"
#include "TDataService.h"

namespace OpenStars { namespace Platform { namespace MarketPlace {

#ifdef _MSC_VER
  #pragma warning( push )
  #pragma warning (disable : 4250 ) //inheriting methods via dominance 
#endif

class TReportItemServiceIf : virtual public TDataServiceIf {
 public:
  virtual ~TReportItemServiceIf() {}
};

class TReportItemServiceIfFactory : virtual public TDataServiceIfFactory {
 public:
  typedef TReportItemServiceIf Handler;

  virtual ~TReportItemServiceIfFactory() {}

  virtual TReportItemServiceIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler(TDataServiceIf* /* handler */) = 0;
};

class TReportItemServiceIfSingletonFactory : virtual public TReportItemServiceIfFactory {
 public:
  TReportItemServiceIfSingletonFactory(const ::apache::thrift::stdcxx::shared_ptr<TReportItemServiceIf>& iface) : iface_(iface) {}
  virtual ~TReportItemServiceIfSingletonFactory() {}

  virtual TReportItemServiceIf* getHandler(const ::apache::thrift::TConnectionInfo&) {
    return iface_.get();
  }
  virtual void releaseHandler(TDataServiceIf* /* handler */) {}

 protected:
  ::apache::thrift::stdcxx::shared_ptr<TReportItemServiceIf> iface_;
};

class TReportItemServiceNull : virtual public TReportItemServiceIf , virtual public TDataServiceNull {
 public:
  virtual ~TReportItemServiceNull() {}
};

class TReportItemServiceClient : virtual public TReportItemServiceIf, public TDataServiceClient {
 public:
  TReportItemServiceClient(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) :
    TDataServiceClient(prot, prot) {}
  TReportItemServiceClient(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) :    TDataServiceClient(iprot, oprot) {}
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
};

class TReportItemServiceProcessor : public TDataServiceProcessor {
 protected:
  ::apache::thrift::stdcxx::shared_ptr<TReportItemServiceIf> iface_;
  virtual bool dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext);
 private:
  typedef  void (TReportItemServiceProcessor::*ProcessFunction)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*, void*);
  typedef std::map<std::string, ProcessFunction> ProcessMap;
  ProcessMap processMap_;
 public:
  TReportItemServiceProcessor(::apache::thrift::stdcxx::shared_ptr<TReportItemServiceIf> iface) :
    TDataServiceProcessor(iface),
    iface_(iface) {
  }

  virtual ~TReportItemServiceProcessor() {}
};

class TReportItemServiceProcessorFactory : public ::apache::thrift::TProcessorFactory {
 public:
  TReportItemServiceProcessorFactory(const ::apache::thrift::stdcxx::shared_ptr< TReportItemServiceIfFactory >& handlerFactory) :
      handlerFactory_(handlerFactory) {}

  ::apache::thrift::stdcxx::shared_ptr< ::apache::thrift::TProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo);

 protected:
  ::apache::thrift::stdcxx::shared_ptr< TReportItemServiceIfFactory > handlerFactory_;
};

class TReportItemServiceMultiface : virtual public TReportItemServiceIf, public TDataServiceMultiface {
 public:
  TReportItemServiceMultiface(std::vector<apache::thrift::stdcxx::shared_ptr<TReportItemServiceIf> >& ifaces) : ifaces_(ifaces) {
    std::vector<apache::thrift::stdcxx::shared_ptr<TReportItemServiceIf> >::iterator iter;
    for (iter = ifaces.begin(); iter != ifaces.end(); ++iter) {
      TDataServiceMultiface::add(*iter);
    }
  }
  virtual ~TReportItemServiceMultiface() {}
 protected:
  std::vector<apache::thrift::stdcxx::shared_ptr<TReportItemServiceIf> > ifaces_;
  TReportItemServiceMultiface() {}
  void add(::apache::thrift::stdcxx::shared_ptr<TReportItemServiceIf> iface) {
    TDataServiceMultiface::add(iface);
    ifaces_.push_back(iface);
  }
 public:
};

// The 'concurrent' client is a thread safe client that correctly handles
// out of order responses.  It is slower than the regular client, so should
// only be used when you need to share a connection among multiple threads
class TReportItemServiceConcurrentClient : virtual public TReportItemServiceIf, public TDataServiceConcurrentClient {
 public:
  TReportItemServiceConcurrentClient(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) :
    TDataServiceConcurrentClient(prot, prot) {}
  TReportItemServiceConcurrentClient(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) :    TDataServiceConcurrentClient(iprot, oprot) {}
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
};

#ifdef _MSC_VER
  #pragma warning( pop )
#endif

}}} // namespace

#endif
