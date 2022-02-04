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
// source: google/cloud/orgpolicy/v2/orgpolicy.proto

#include "google/cloud/orgpolicy/org_policy_connection.h"
#include "google/cloud/orgpolicy/internal/org_policy_connection_impl.h"
#include "google/cloud/orgpolicy/internal/org_policy_option_defaults.h"
#include "google/cloud/orgpolicy/internal/org_policy_stub_factory.h"
#include "google/cloud/orgpolicy/org_policy_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace orgpolicy {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

OrgPolicyConnection::~OrgPolicyConnection() = default;

StreamRange<google::cloud::orgpolicy::v2::Constraint>
    OrgPolicyConnection::ListConstraints(
        google::cloud::orgpolicy::v2::
            ListConstraintsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::orgpolicy::v2::Constraint>>();
}

StreamRange<google::cloud::orgpolicy::v2::Policy>
    OrgPolicyConnection::ListPolicies(
        google::cloud::orgpolicy::v2::
            ListPoliciesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::orgpolicy::v2::Policy>>();
}

StatusOr<google::cloud::orgpolicy::v2::Policy> OrgPolicyConnection::GetPolicy(
    google::cloud::orgpolicy::v2::GetPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::orgpolicy::v2::Policy>
OrgPolicyConnection::GetEffectivePolicy(
    google::cloud::orgpolicy::v2::GetEffectivePolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::orgpolicy::v2::Policy>
OrgPolicyConnection::CreatePolicy(
    google::cloud::orgpolicy::v2::CreatePolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::orgpolicy::v2::Policy>
OrgPolicyConnection::UpdatePolicy(
    google::cloud::orgpolicy::v2::UpdatePolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status OrgPolicyConnection::DeletePolicy(
    google::cloud::orgpolicy::v2::DeletePolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<OrgPolicyConnection> MakeOrgPolicyConnection(Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 OrgPolicyPolicyOptionList>(options, __func__);
  options = orgpolicy_internal::OrgPolicyDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub =
      orgpolicy_internal::CreateDefaultOrgPolicyStub(background->cq(), options);
  return std::make_shared<orgpolicy_internal::OrgPolicyConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace orgpolicy
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace orgpolicy_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<orgpolicy::OrgPolicyConnection> MakeOrgPolicyConnection(
    std::shared_ptr<OrgPolicyStub> stub, Options options) {
  options = OrgPolicyDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  return std::make_shared<orgpolicy_internal::OrgPolicyConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace orgpolicy_internal
}  // namespace cloud
}  // namespace google
