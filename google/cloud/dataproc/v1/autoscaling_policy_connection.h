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
// source: google/cloud/dataproc/v1/autoscaling_policies.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_V1_AUTOSCALING_POLICY_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_V1_AUTOSCALING_POLICY_CONNECTION_H

#include "google/cloud/dataproc/v1/autoscaling_policy_connection_idempotency_policy.h"
#include "google/cloud/dataproc/v1/internal/autoscaling_policy_retry_traits.h"
#include "google/cloud/dataproc/v1/internal/autoscaling_policy_stub.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace dataproc_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using AutoscalingPolicyServiceRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        dataproc_v1_internal::AutoscalingPolicyServiceRetryTraits>;

using AutoscalingPolicyServiceLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        dataproc_v1_internal::AutoscalingPolicyServiceRetryTraits>;

using AutoscalingPolicyServiceLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        dataproc_v1_internal::AutoscalingPolicyServiceRetryTraits>;

/**
 * The `AutoscalingPolicyServiceConnection` object for
 * `AutoscalingPolicyServiceClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `AutoscalingPolicyServiceClient`. This allows users to inject custom
 * behavior (e.g., with a Google Mock object) when writing tests that use
 * objects of type `AutoscalingPolicyServiceClient`.
 *
 * To create a concrete instance, see
 * `MakeAutoscalingPolicyServiceConnection()`.
 *
 * For mocking, see `dataproc_v1_mocks::MockAutoscalingPolicyServiceConnection`.
 */
class AutoscalingPolicyServiceConnection {
 public:
  virtual ~AutoscalingPolicyServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::cloud::dataproc::v1::AutoscalingPolicy>
  CreateAutoscalingPolicy(
      google::cloud::dataproc::v1::CreateAutoscalingPolicyRequest const&
          request);

  virtual StatusOr<google::cloud::dataproc::v1::AutoscalingPolicy>
  UpdateAutoscalingPolicy(
      google::cloud::dataproc::v1::UpdateAutoscalingPolicyRequest const&
          request);

  virtual StatusOr<google::cloud::dataproc::v1::AutoscalingPolicy>
  GetAutoscalingPolicy(
      google::cloud::dataproc::v1::GetAutoscalingPolicyRequest const& request);

  virtual StreamRange<google::cloud::dataproc::v1::AutoscalingPolicy>
  ListAutoscalingPolicies(
      google::cloud::dataproc::v1::ListAutoscalingPoliciesRequest request);

  virtual Status DeleteAutoscalingPolicy(
      google::cloud::dataproc::v1::DeleteAutoscalingPolicyRequest const&
          request);
};

/**
 * A factory function to construct an object of type
 * `AutoscalingPolicyServiceConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of
 * AutoscalingPolicyServiceClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `AutoscalingPolicyServiceConnection`. Expected options are any of
 * the types in the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::dataproc_v1::AutoscalingPolicyServicePolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param location Sets the prefix for the default `EndpointOption` value.
 * @param options (optional) Configure the `AutoscalingPolicyServiceConnection`
 * created by this function.
 */
std::shared_ptr<AutoscalingPolicyServiceConnection>
MakeAutoscalingPolicyServiceConnection(std::string const& location,
                                       Options options = {});

/**
 * A backwards-compatible version of the previous factory function.  Unless
 * the service also offers a global endpoint, the default value of the
 * `EndpointOption` may be useless, in which case it must be overridden.
 *
 * @deprecated Please use the `location` overload instead.
 */
std::shared_ptr<AutoscalingPolicyServiceConnection>
MakeAutoscalingPolicyServiceConnection(Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataproc_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_V1_AUTOSCALING_POLICY_CONNECTION_H
