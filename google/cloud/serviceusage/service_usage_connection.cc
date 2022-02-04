// Copyright 2022 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/api/serviceusage/v1/serviceusage.proto

#include "google/cloud/serviceusage/service_usage_connection.h"
#include "google/cloud/serviceusage/internal/service_usage_connection_impl.h"
#include "google/cloud/serviceusage/internal/service_usage_option_defaults.h"
#include "google/cloud/serviceusage/internal/service_usage_stub_factory.h"
#include "google/cloud/serviceusage/service_usage_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace serviceusage {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ServiceUsageConnection::~ServiceUsageConnection() = default;

future<StatusOr<google::api::serviceusage::v1::EnableServiceResponse>>
ServiceUsageConnection::EnableService(
    google::api::serviceusage::v1::EnableServiceRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::api::serviceusage::v1::EnableServiceResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::api::serviceusage::v1::DisableServiceResponse>>
ServiceUsageConnection::DisableService(
    google::api::serviceusage::v1::DisableServiceRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::api::serviceusage::v1::DisableServiceResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::api::serviceusage::v1::Service>
ServiceUsageConnection::GetService(
    google::api::serviceusage::v1::GetServiceRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::api::serviceusage::v1::Service>
    ServiceUsageConnection::ListServices(
        google::api::serviceusage::v1::
            ListServicesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::api::serviceusage::v1::Service>>();
}

future<StatusOr<google::api::serviceusage::v1::BatchEnableServicesResponse>>
ServiceUsageConnection::BatchEnableServices(
    google::api::serviceusage::v1::BatchEnableServicesRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::api::serviceusage::v1::BatchEnableServicesResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::api::serviceusage::v1::BatchGetServicesResponse>
ServiceUsageConnection::BatchGetServices(
    google::api::serviceusage::v1::BatchGetServicesRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<ServiceUsageConnection> MakeServiceUsageConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 ServiceUsagePolicyOptionList>(options,
                                                               __func__);
  options =
      serviceusage_internal::ServiceUsageDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = serviceusage_internal::CreateDefaultServiceUsageStub(
      background->cq(), options);
  return std::make_shared<serviceusage_internal::ServiceUsageConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace serviceusage
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace serviceusage_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<serviceusage::ServiceUsageConnection>
MakeServiceUsageConnection(std::shared_ptr<ServiceUsageStub> stub,
                           Options options) {
  options = ServiceUsageDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  return std::make_shared<serviceusage_internal::ServiceUsageConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace serviceusage_internal
}  // namespace cloud
}  // namespace google
