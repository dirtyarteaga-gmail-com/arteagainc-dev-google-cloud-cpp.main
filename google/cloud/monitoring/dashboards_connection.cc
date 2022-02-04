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
// source: google/monitoring/dashboard/v1/dashboards_service.proto

#include "google/cloud/monitoring/dashboards_connection.h"
#include "google/cloud/monitoring/dashboards_options.h"
#include "google/cloud/monitoring/internal/dashboards_connection_impl.h"
#include "google/cloud/monitoring/internal/dashboards_option_defaults.h"
#include "google/cloud/monitoring/internal/dashboards_stub_factory.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace monitoring {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DashboardsServiceConnection::~DashboardsServiceConnection() = default;

StatusOr<google::monitoring::dashboard::v1::Dashboard>
DashboardsServiceConnection::CreateDashboard(
    google::monitoring::dashboard::v1::CreateDashboardRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::monitoring::dashboard::v1::Dashboard>
    DashboardsServiceConnection::ListDashboards(
        google::monitoring::dashboard::v1::
            ListDashboardsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::monitoring::dashboard::v1::Dashboard>>();
}

StatusOr<google::monitoring::dashboard::v1::Dashboard>
DashboardsServiceConnection::GetDashboard(
    google::monitoring::dashboard::v1::GetDashboardRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status DashboardsServiceConnection::DeleteDashboard(
    google::monitoring::dashboard::v1::DeleteDashboardRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::monitoring::dashboard::v1::Dashboard>
DashboardsServiceConnection::UpdateDashboard(
    google::monitoring::dashboard::v1::UpdateDashboardRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<DashboardsServiceConnection> MakeDashboardsServiceConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 DashboardsServicePolicyOptionList>(options,
                                                                    __func__);
  options =
      monitoring_internal::DashboardsServiceDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = monitoring_internal::CreateDefaultDashboardsServiceStub(
      background->cq(), options);
  return std::make_shared<monitoring_internal::DashboardsServiceConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace monitoring
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace monitoring_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<monitoring::DashboardsServiceConnection>
MakeDashboardsServiceConnection(std::shared_ptr<DashboardsServiceStub> stub,
                                Options options) {
  options = DashboardsServiceDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  return std::make_shared<monitoring_internal::DashboardsServiceConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace monitoring_internal
}  // namespace cloud
}  // namespace google
