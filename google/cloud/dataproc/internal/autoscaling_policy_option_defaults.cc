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

#include "google/cloud/dataproc/internal/autoscaling_policy_option_defaults.h"
#include "google/cloud/dataproc/autoscaling_policy_connection.h"
#include "google/cloud/dataproc/autoscaling_policy_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace dataproc_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options AutoscalingPolicyServiceDefaultOptions(std::string const& location,
                                               Options options) {
  options = google::cloud::internal::PopulateCommonOptions(
      std::move(options),
      "GOOGLE_CLOUD_CPP_AUTOSCALING_POLICY_SERVICE_ENDPOINT", "",
      "GOOGLE_CLOUD_CPP_AUTOSCALING_POLICY_SERVICE_AUTHORITY",
      absl::StrCat(location, location.empty() ? "" : "-",
                   "dataproc.googleapis.com"));
  options =
      google::cloud::internal::PopulateGrpcOptions(std::move(options), "");
  if (!options.has<dataproc::AutoscalingPolicyServiceRetryPolicyOption>()) {
    options.set<dataproc::AutoscalingPolicyServiceRetryPolicyOption>(
        dataproc::AutoscalingPolicyServiceLimitedTimeRetryPolicy(
            std::chrono::minutes(30))
            .clone());
  }
  if (!options.has<dataproc::AutoscalingPolicyServiceBackoffPolicyOption>()) {
    options.set<dataproc::AutoscalingPolicyServiceBackoffPolicyOption>(
        ExponentialBackoffPolicy(std::chrono::seconds(1),
                                 std::chrono::minutes(5), kBackoffScaling)
            .clone());
  }
  if (!options.has<
          dataproc::
              AutoscalingPolicyServiceConnectionIdempotencyPolicyOption>()) {
    options.set<
        dataproc::AutoscalingPolicyServiceConnectionIdempotencyPolicyOption>(
        dataproc::
            MakeDefaultAutoscalingPolicyServiceConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataproc_internal
}  // namespace cloud
}  // namespace google
