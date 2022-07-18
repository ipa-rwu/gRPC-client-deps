// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: IDeviceInfoService.proto

#include "IDeviceInfoService.pb.h"
#include "IDeviceInfoService.grpc.pb.h"

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
namespace Device {
namespace Interface {
namespace Services {
namespace Grpc {

static const char* IDeviceInfoService_method_names[] = {
  "/Arp.Device.Interface.Services.Grpc.IDeviceInfoService/GetItem",
  "/Arp.Device.Interface.Services.Grpc.IDeviceInfoService/GetItems",
};

std::unique_ptr< IDeviceInfoService::Stub> IDeviceInfoService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< IDeviceInfoService::Stub> stub(new IDeviceInfoService::Stub(channel));
  return stub;
}

IDeviceInfoService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_GetItem_(IDeviceInfoService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetItems_(IDeviceInfoService_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status IDeviceInfoService::Stub::GetItem(::grpc::ClientContext* context, const ::Arp::Device::Interface::Services::Grpc::IDeviceInfoServiceGetItemRequest& request, ::Arp::Device::Interface::Services::Grpc::IDeviceInfoServiceGetItemResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::Arp::Device::Interface::Services::Grpc::IDeviceInfoServiceGetItemRequest, ::Arp::Device::Interface::Services::Grpc::IDeviceInfoServiceGetItemResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_GetItem_, context, request, response);
}

void IDeviceInfoService::Stub::experimental_async::GetItem(::grpc::ClientContext* context, const ::Arp::Device::Interface::Services::Grpc::IDeviceInfoServiceGetItemRequest* request, ::Arp::Device::Interface::Services::Grpc::IDeviceInfoServiceGetItemResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::Arp::Device::Interface::Services::Grpc::IDeviceInfoServiceGetItemRequest, ::Arp::Device::Interface::Services::Grpc::IDeviceInfoServiceGetItemResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetItem_, context, request, response, std::move(f));
}

void IDeviceInfoService::Stub::experimental_async::GetItem(::grpc::ClientContext* context, const ::Arp::Device::Interface::Services::Grpc::IDeviceInfoServiceGetItemRequest* request, ::Arp::Device::Interface::Services::Grpc::IDeviceInfoServiceGetItemResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetItem_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::Arp::Device::Interface::Services::Grpc::IDeviceInfoServiceGetItemResponse>* IDeviceInfoService::Stub::PrepareAsyncGetItemRaw(::grpc::ClientContext* context, const ::Arp::Device::Interface::Services::Grpc::IDeviceInfoServiceGetItemRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::Arp::Device::Interface::Services::Grpc::IDeviceInfoServiceGetItemResponse, ::Arp::Device::Interface::Services::Grpc::IDeviceInfoServiceGetItemRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_GetItem_, context, request);
}

::grpc::ClientAsyncResponseReader< ::Arp::Device::Interface::Services::Grpc::IDeviceInfoServiceGetItemResponse>* IDeviceInfoService::Stub::AsyncGetItemRaw(::grpc::ClientContext* context, const ::Arp::Device::Interface::Services::Grpc::IDeviceInfoServiceGetItemRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncGetItemRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status IDeviceInfoService::Stub::GetItems(::grpc::ClientContext* context, const ::Arp::Device::Interface::Services::Grpc::IDeviceInfoServiceGetItemsRequest& request, ::Arp::Device::Interface::Services::Grpc::IDeviceInfoServiceGetItemsResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::Arp::Device::Interface::Services::Grpc::IDeviceInfoServiceGetItemsRequest, ::Arp::Device::Interface::Services::Grpc::IDeviceInfoServiceGetItemsResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_GetItems_, context, request, response);
}

void IDeviceInfoService::Stub::experimental_async::GetItems(::grpc::ClientContext* context, const ::Arp::Device::Interface::Services::Grpc::IDeviceInfoServiceGetItemsRequest* request, ::Arp::Device::Interface::Services::Grpc::IDeviceInfoServiceGetItemsResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::Arp::Device::Interface::Services::Grpc::IDeviceInfoServiceGetItemsRequest, ::Arp::Device::Interface::Services::Grpc::IDeviceInfoServiceGetItemsResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetItems_, context, request, response, std::move(f));
}

void IDeviceInfoService::Stub::experimental_async::GetItems(::grpc::ClientContext* context, const ::Arp::Device::Interface::Services::Grpc::IDeviceInfoServiceGetItemsRequest* request, ::Arp::Device::Interface::Services::Grpc::IDeviceInfoServiceGetItemsResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetItems_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::Arp::Device::Interface::Services::Grpc::IDeviceInfoServiceGetItemsResponse>* IDeviceInfoService::Stub::PrepareAsyncGetItemsRaw(::grpc::ClientContext* context, const ::Arp::Device::Interface::Services::Grpc::IDeviceInfoServiceGetItemsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::Arp::Device::Interface::Services::Grpc::IDeviceInfoServiceGetItemsResponse, ::Arp::Device::Interface::Services::Grpc::IDeviceInfoServiceGetItemsRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_GetItems_, context, request);
}

::grpc::ClientAsyncResponseReader< ::Arp::Device::Interface::Services::Grpc::IDeviceInfoServiceGetItemsResponse>* IDeviceInfoService::Stub::AsyncGetItemsRaw(::grpc::ClientContext* context, const ::Arp::Device::Interface::Services::Grpc::IDeviceInfoServiceGetItemsRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncGetItemsRaw(context, request, cq);
  result->StartCall();
  return result;
}

IDeviceInfoService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      IDeviceInfoService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< IDeviceInfoService::Service, ::Arp::Device::Interface::Services::Grpc::IDeviceInfoServiceGetItemRequest, ::Arp::Device::Interface::Services::Grpc::IDeviceInfoServiceGetItemResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](IDeviceInfoService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::Arp::Device::Interface::Services::Grpc::IDeviceInfoServiceGetItemRequest* req,
             ::Arp::Device::Interface::Services::Grpc::IDeviceInfoServiceGetItemResponse* resp) {
               return service->GetItem(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      IDeviceInfoService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< IDeviceInfoService::Service, ::Arp::Device::Interface::Services::Grpc::IDeviceInfoServiceGetItemsRequest, ::Arp::Device::Interface::Services::Grpc::IDeviceInfoServiceGetItemsResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](IDeviceInfoService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::Arp::Device::Interface::Services::Grpc::IDeviceInfoServiceGetItemsRequest* req,
             ::Arp::Device::Interface::Services::Grpc::IDeviceInfoServiceGetItemsResponse* resp) {
               return service->GetItems(ctx, req, resp);
             }, this)));
}

IDeviceInfoService::Service::~Service() {
}

::grpc::Status IDeviceInfoService::Service::GetItem(::grpc::ServerContext* context, const ::Arp::Device::Interface::Services::Grpc::IDeviceInfoServiceGetItemRequest* request, ::Arp::Device::Interface::Services::Grpc::IDeviceInfoServiceGetItemResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status IDeviceInfoService::Service::GetItems(::grpc::ServerContext* context, const ::Arp::Device::Interface::Services::Grpc::IDeviceInfoServiceGetItemsRequest* request, ::Arp::Device::Interface::Services::Grpc::IDeviceInfoServiceGetItemsResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace Arp
}  // namespace Device
}  // namespace Interface
}  // namespace Services
}  // namespace Grpc

