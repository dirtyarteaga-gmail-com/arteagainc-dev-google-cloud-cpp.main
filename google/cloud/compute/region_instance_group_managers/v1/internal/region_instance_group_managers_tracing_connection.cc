// Copyright 2023 Google LLC
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
// source:
// google/cloud/compute/region_instance_group_managers/v1/region_instance_group_managers.proto

#include "google/cloud/compute/region_instance_group_managers/v1/internal/region_instance_group_managers_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_instance_group_managers_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

RegionInstanceGroupManagersTracingConnection::
    RegionInstanceGroupManagersTracingConnection(
        std::shared_ptr<compute_region_instance_group_managers_v1::
                            RegionInstanceGroupManagersConnection>
            child)
    : child_(std::move(child)) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersTracingConnection::AbandonInstances(
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        AbandonInstancesRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_instance_group_managers_v1::"
      "RegionInstanceGroupManagersConnection::AbandonInstances");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->AbandonInstances(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersTracingConnection::ApplyUpdatesToInstances(
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        ApplyUpdatesToInstancesRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_instance_group_managers_v1::"
      "RegionInstanceGroupManagersConnection::ApplyUpdatesToInstances");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->ApplyUpdatesToInstances(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersTracingConnection::CreateInstances(
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        CreateInstancesRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_instance_group_managers_v1::"
      "RegionInstanceGroupManagersConnection::CreateInstances");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->CreateInstances(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersTracingConnection::DeleteRegionInstanceGroupManagers(
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        DeleteRegionInstanceGroupManagersRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_instance_group_managers_v1::"
      "RegionInstanceGroupManagersConnection::"
      "DeleteRegionInstanceGroupManagers");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteRegionInstanceGroupManagers(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersTracingConnection::DeleteInstances(
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        DeleteInstancesRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_instance_group_managers_v1::"
      "RegionInstanceGroupManagersConnection::DeleteInstances");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteInstances(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersTracingConnection::DeletePerInstanceConfigs(
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        DeletePerInstanceConfigsRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_instance_group_managers_v1::"
      "RegionInstanceGroupManagersConnection::DeletePerInstanceConfigs");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeletePerInstanceConfigs(request));
}

StatusOr<google::cloud::cpp::compute::v1::InstanceGroupManager>
RegionInstanceGroupManagersTracingConnection::GetRegionInstanceGroupManagers(
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        GetRegionInstanceGroupManagersRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_instance_group_managers_v1::"
      "RegionInstanceGroupManagersConnection::GetRegionInstanceGroupManagers");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span,
                           child_->GetRegionInstanceGroupManagers(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersTracingConnection::InsertRegionInstanceGroupManagers(
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        InsertRegionInstanceGroupManagersRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_instance_group_managers_v1::"
      "RegionInstanceGroupManagersConnection::"
      "InsertRegionInstanceGroupManagers");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->InsertRegionInstanceGroupManagers(request));
}

StreamRange<google::cloud::cpp::compute::v1::InstanceGroupManager>
RegionInstanceGroupManagersTracingConnection::ListRegionInstanceGroupManagers(
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        ListRegionInstanceGroupManagersRequest request) {
  auto span = internal::MakeSpan(
      "compute_region_instance_group_managers_v1::"
      "RegionInstanceGroupManagersConnection::ListRegionInstanceGroupManagers");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListRegionInstanceGroupManagers(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::cpp::compute::v1::InstanceGroupManager>(std::move(span),
                                                             std::move(sr));
}

StreamRange<google::cloud::cpp::compute::v1::InstanceManagedByIgmError>
RegionInstanceGroupManagersTracingConnection::ListErrors(
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        ListErrorsRequest request) {
  auto span = internal::MakeSpan(
      "compute_region_instance_group_managers_v1::"
      "RegionInstanceGroupManagersConnection::ListErrors");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListErrors(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::cpp::compute::v1::InstanceManagedByIgmError>(
      std::move(span), std::move(sr));
}

StatusOr<google::cloud::cpp::compute::v1::
             RegionInstanceGroupManagersListInstancesResponse>
RegionInstanceGroupManagersTracingConnection::ListManagedInstances(
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        ListManagedInstancesRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_instance_group_managers_v1::"
      "RegionInstanceGroupManagersConnection::ListManagedInstances");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->ListManagedInstances(request));
}

StreamRange<google::cloud::cpp::compute::v1::PerInstanceConfig>
RegionInstanceGroupManagersTracingConnection::ListPerInstanceConfigs(
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        ListPerInstanceConfigsRequest request) {
  auto span = internal::MakeSpan(
      "compute_region_instance_group_managers_v1::"
      "RegionInstanceGroupManagersConnection::ListPerInstanceConfigs");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListPerInstanceConfigs(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::cpp::compute::v1::PerInstanceConfig>(std::move(span),
                                                          std::move(sr));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersTracingConnection::PatchRegionInstanceGroupManagers(
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        PatchRegionInstanceGroupManagersRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_instance_group_managers_v1::"
      "RegionInstanceGroupManagersConnection::"
      "PatchRegionInstanceGroupManagers");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->PatchRegionInstanceGroupManagers(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersTracingConnection::PatchPerInstanceConfigs(
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        PatchPerInstanceConfigsRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_instance_group_managers_v1::"
      "RegionInstanceGroupManagersConnection::PatchPerInstanceConfigs");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->PatchPerInstanceConfigs(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersTracingConnection::RecreateInstances(
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        RecreateInstancesRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_instance_group_managers_v1::"
      "RegionInstanceGroupManagersConnection::RecreateInstances");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->RecreateInstances(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersTracingConnection::Resize(
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        ResizeRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_instance_group_managers_v1::"
      "RegionInstanceGroupManagersConnection::Resize");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->Resize(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersTracingConnection::SetInstanceTemplate(
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        SetInstanceTemplateRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_instance_group_managers_v1::"
      "RegionInstanceGroupManagersConnection::SetInstanceTemplate");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->SetInstanceTemplate(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersTracingConnection::SetTargetPools(
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        SetTargetPoolsRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_instance_group_managers_v1::"
      "RegionInstanceGroupManagersConnection::SetTargetPools");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->SetTargetPools(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstanceGroupManagersTracingConnection::UpdatePerInstanceConfigs(
    google::cloud::cpp::compute::region_instance_group_managers::v1::
        UpdatePerInstanceConfigsRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_instance_group_managers_v1::"
      "RegionInstanceGroupManagersConnection::UpdatePerInstanceConfigs");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->UpdatePerInstanceConfigs(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<compute_region_instance_group_managers_v1::
                    RegionInstanceGroupManagersConnection>
MakeRegionInstanceGroupManagersTracingConnection(
    std::shared_ptr<compute_region_instance_group_managers_v1::
                        RegionInstanceGroupManagersConnection>
        conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<RegionInstanceGroupManagersTracingConnection>(
        std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_instance_group_managers_v1_internal
}  // namespace cloud
}  // namespace google
