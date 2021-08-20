// Copyright 2020 Google LLC
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
// source: google/iam/credentials/v1/iamcredentials.proto

#include "google/cloud/iam/internal/iam_credentials_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/iam/credentials/v1/iamcredentials.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace iam_internal {
inline namespace GOOGLE_CLOUD_CPP_GENERATED_NS {

IAMCredentialsLogging::IAMCredentialsLogging(
    std::shared_ptr<IAMCredentialsStub> child, TracingOptions tracing_options,
    std::set<std::string> components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      components_(std::move(components)) {}

StatusOr<google::iam::credentials::v1::GenerateAccessTokenResponse>
IAMCredentialsLogging::GenerateAccessToken(
    grpc::ClientContext& context,
    google::iam::credentials::v1::GenerateAccessTokenRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::iam::credentials::v1::GenerateAccessTokenRequest const&
                 request) {
        return child_->GenerateAccessToken(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::iam::credentials::v1::GenerateIdTokenResponse>
IAMCredentialsLogging::GenerateIdToken(
    grpc::ClientContext& context,
    google::iam::credentials::v1::GenerateIdTokenRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::iam::credentials::v1::GenerateIdTokenRequest const& request) {
        return child_->GenerateIdToken(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::iam::credentials::v1::SignBlobResponse>
IAMCredentialsLogging::SignBlob(
    grpc::ClientContext& context,
    google::iam::credentials::v1::SignBlobRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::iam::credentials::v1::SignBlobRequest const& request) {
        return child_->SignBlob(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::iam::credentials::v1::SignJwtResponse>
IAMCredentialsLogging::SignJwt(
    grpc::ClientContext& context,
    google::iam::credentials::v1::SignJwtRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::iam::credentials::v1::SignJwtRequest const& request) {
        return child_->SignJwt(context, request);
      },
      context, request, __func__, tracing_options_);
}

}  // namespace GOOGLE_CLOUD_CPP_GENERATED_NS
}  // namespace iam_internal
}  // namespace cloud
}  // namespace google
