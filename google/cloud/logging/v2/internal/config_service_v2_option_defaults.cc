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
// source: google/logging/v2/logging_config.proto

#include "google/cloud/logging/v2/internal/config_service_v2_option_defaults.h"
#include "google/cloud/logging/v2/config_service_v2_connection.h"
#include "google/cloud/logging/v2/config_service_v2_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace logging_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options ConfigServiceV2DefaultOptions(Options options) {
  options = google::cloud::internal::PopulateCommonOptions(
      std::move(options), "GOOGLE_CLOUD_CPP_CONFIG_SERVICE_V2_ENDPOINT", "",
      "GOOGLE_CLOUD_CPP_CONFIG_SERVICE_V2_AUTHORITY", "logging.googleapis.com");
  options =
      google::cloud::internal::PopulateGrpcOptions(std::move(options), "");
  if (!options.has<logging_v2::ConfigServiceV2RetryPolicyOption>()) {
    options.set<logging_v2::ConfigServiceV2RetryPolicyOption>(
        logging_v2::ConfigServiceV2LimitedTimeRetryPolicy(
            std::chrono::minutes(30))
            .clone());
  }
  if (!options.has<logging_v2::ConfigServiceV2BackoffPolicyOption>()) {
    options.set<logging_v2::ConfigServiceV2BackoffPolicyOption>(
        ExponentialBackoffPolicy(
            std::chrono::seconds(0), std::chrono::seconds(1),
            std::chrono::minutes(5), kBackoffScaling, kBackoffScaling)
            .clone());
  }
  if (!options.has<logging_v2::ConfigServiceV2PollingPolicyOption>()) {
    options.set<logging_v2::ConfigServiceV2PollingPolicyOption>(
        GenericPollingPolicy<
            logging_v2::ConfigServiceV2RetryPolicyOption::Type,
            logging_v2::ConfigServiceV2BackoffPolicyOption::Type>(
            options.get<logging_v2::ConfigServiceV2RetryPolicyOption>()
                ->clone(),
            ExponentialBackoffPolicy(std::chrono::seconds(1),
                                     std::chrono::minutes(5), kBackoffScaling)
                .clone())
            .clone());
  }
  if (!options.has<
          logging_v2::ConfigServiceV2ConnectionIdempotencyPolicyOption>()) {
    options.set<logging_v2::ConfigServiceV2ConnectionIdempotencyPolicyOption>(
        logging_v2::MakeDefaultConfigServiceV2ConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace logging_v2_internal
}  // namespace cloud
}  // namespace google
