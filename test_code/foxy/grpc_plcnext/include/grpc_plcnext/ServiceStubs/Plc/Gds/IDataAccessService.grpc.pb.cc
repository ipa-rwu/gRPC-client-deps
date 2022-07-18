// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: IDataAccessService.proto

#include "IDataAccessService.pb.h"
#include "IDataAccessService.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace Arp {
namespace Plc {
namespace Gds {
namespace Services {
namespace Grpc {

static const char* IDataAccessService_method_names[] = {
  "/Arp.Plc.Gds.Services.Grpc.IDataAccessService/ReadSingle",
  "/Arp.Plc.Gds.Services.Grpc.IDataAccessService/Read",
  "/Arp.Plc.Gds.Services.Grpc.IDataAccessService/WriteSingle",
  "/Arp.Plc.Gds.Services.Grpc.IDataAccessService/Write",
};

std::unique_ptr< IDataAccessService::Stub> IDataAccessService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< IDataAccessService::Stub> stub(new IDataAccessService::Stub(channel));
  return stub;
}

IDataAccessService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_ReadSingle_(IDataAccessService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Read_(IDataAccessService_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_WriteSingle_(IDataAccessService_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Write_(IDataAccessService_method_names[3], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status IDataAccessService::Stub::ReadSingle(::grpc::ClientContext* context, const ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceReadSingleRequest& request, ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceReadSingleResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceReadSingleRequest, ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceReadSingleResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_ReadSingle_, context, request, response);
}

void IDataAccessService::Stub::experimental_async::ReadSingle(::grpc::ClientContext* context, const ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceReadSingleRequest* request, ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceReadSingleResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceReadSingleRequest, ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceReadSingleResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_ReadSingle_, context, request, response, std::move(f));
}

void IDataAccessService::Stub::experimental_async::ReadSingle(::grpc::ClientContext* context, const ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceReadSingleRequest* request, ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceReadSingleResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_ReadSingle_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceReadSingleResponse>* IDataAccessService::Stub::PrepareAsyncReadSingleRaw(::grpc::ClientContext* context, const ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceReadSingleRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceReadSingleResponse, ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceReadSingleRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_ReadSingle_, context, request);
}

::grpc::ClientAsyncResponseReader< ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceReadSingleResponse>* IDataAccessService::Stub::AsyncReadSingleRaw(::grpc::ClientContext* context, const ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceReadSingleRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncReadSingleRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status IDataAccessService::Stub::Read(::grpc::ClientContext* context, const ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceReadRequest& request, ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceReadResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceReadRequest, ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceReadResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_Read_, context, request, response);
}

void IDataAccessService::Stub::experimental_async::Read(::grpc::ClientContext* context, const ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceReadRequest* request, ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceReadResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceReadRequest, ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceReadResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Read_, context, request, response, std::move(f));
}

void IDataAccessService::Stub::experimental_async::Read(::grpc::ClientContext* context, const ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceReadRequest* request, ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceReadResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Read_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceReadResponse>* IDataAccessService::Stub::PrepareAsyncReadRaw(::grpc::ClientContext* context, const ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceReadRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceReadResponse, ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceReadRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_Read_, context, request);
}

::grpc::ClientAsyncResponseReader< ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceReadResponse>* IDataAccessService::Stub::AsyncReadRaw(::grpc::ClientContext* context, const ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceReadRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncReadRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status IDataAccessService::Stub::WriteSingle(::grpc::ClientContext* context, const ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceWriteSingleRequest& request, ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceWriteSingleResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceWriteSingleRequest, ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceWriteSingleResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_WriteSingle_, context, request, response);
}

void IDataAccessService::Stub::experimental_async::WriteSingle(::grpc::ClientContext* context, const ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceWriteSingleRequest* request, ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceWriteSingleResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceWriteSingleRequest, ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceWriteSingleResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_WriteSingle_, context, request, response, std::move(f));
}

void IDataAccessService::Stub::experimental_async::WriteSingle(::grpc::ClientContext* context, const ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceWriteSingleRequest* request, ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceWriteSingleResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_WriteSingle_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceWriteSingleResponse>* IDataAccessService::Stub::PrepareAsyncWriteSingleRaw(::grpc::ClientContext* context, const ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceWriteSingleRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceWriteSingleResponse, ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceWriteSingleRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_WriteSingle_, context, request);
}

::grpc::ClientAsyncResponseReader< ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceWriteSingleResponse>* IDataAccessService::Stub::AsyncWriteSingleRaw(::grpc::ClientContext* context, const ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceWriteSingleRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncWriteSingleRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status IDataAccessService::Stub::Write(::grpc::ClientContext* context, const ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceWriteRequest& request, ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceWriteResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceWriteRequest, ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceWriteResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_Write_, context, request, response);
}

void IDataAccessService::Stub::experimental_async::Write(::grpc::ClientContext* context, const ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceWriteRequest* request, ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceWriteResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceWriteRequest, ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceWriteResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Write_, context, request, response, std::move(f));
}

void IDataAccessService::Stub::experimental_async::Write(::grpc::ClientContext* context, const ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceWriteRequest* request, ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceWriteResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Write_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceWriteResponse>* IDataAccessService::Stub::PrepareAsyncWriteRaw(::grpc::ClientContext* context, const ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceWriteRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceWriteResponse, ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceWriteRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_Write_, context, request);
}

::grpc::ClientAsyncResponseReader< ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceWriteResponse>* IDataAccessService::Stub::AsyncWriteRaw(::grpc::ClientContext* context, const ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceWriteRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncWriteRaw(context, request, cq);
  result->StartCall();
  return result;
}

IDataAccessService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      IDataAccessService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< IDataAccessService::Service, ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceReadSingleRequest, ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceReadSingleResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](IDataAccessService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceReadSingleRequest* req,
             ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceReadSingleResponse* resp) {
               return service->ReadSingle(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      IDataAccessService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< IDataAccessService::Service, ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceReadRequest, ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceReadResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](IDataAccessService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceReadRequest* req,
             ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceReadResponse* resp) {
               return service->Read(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      IDataAccessService_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< IDataAccessService::Service, ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceWriteSingleRequest, ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceWriteSingleResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](IDataAccessService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceWriteSingleRequest* req,
             ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceWriteSingleResponse* resp) {
               return service->WriteSingle(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      IDataAccessService_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< IDataAccessService::Service, ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceWriteRequest, ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceWriteResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](IDataAccessService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceWriteRequest* req,
             ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceWriteResponse* resp) {
               return service->Write(ctx, req, resp);
             }, this)));
}

IDataAccessService::Service::~Service() {
}

::grpc::Status IDataAccessService::Service::ReadSingle(::grpc::ServerContext* context, const ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceReadSingleRequest* request, ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceReadSingleResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status IDataAccessService::Service::Read(::grpc::ServerContext* context, const ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceReadRequest* request, ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceReadResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status IDataAccessService::Service::WriteSingle(::grpc::ServerContext* context, const ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceWriteSingleRequest* request, ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceWriteSingleResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status IDataAccessService::Service::Write(::grpc::ServerContext* context, const ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceWriteRequest* request, ::Arp::Plc::Gds::Services::Grpc::IDataAccessServiceWriteResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace Arp
}  // namespace Plc
}  // namespace Gds
}  // namespace Services
}  // namespace Grpc

