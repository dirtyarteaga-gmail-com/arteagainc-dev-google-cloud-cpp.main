// Copyright 2021 Google LLC
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
// source: google/cloud/secretmanager/v1/service.proto

#include "google/cloud/secretmanager/secret_manager_connection.h"
#include "google/cloud/secretmanager/internal/secret_manager_connection_impl.h"
#include "google/cloud/secretmanager/internal/secret_manager_option_defaults.h"
#include "google/cloud/secretmanager/internal/secret_manager_stub_factory.h"
#include "google/cloud/secretmanager/secret_manager_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace secretmanager {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

SecretManagerServiceConnection::~SecretManagerServiceConnection() = default;

StreamRange<google::cloud::secretmanager::v1::Secret>
    SecretManagerServiceConnection::ListSecrets(
        google::cloud::secretmanager::v1::
            ListSecretsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::secretmanager::v1::Secret>>();
}

StatusOr<google::cloud::secretmanager::v1::Secret>
SecretManagerServiceConnection::CreateSecret(
    google::cloud::secretmanager::v1::CreateSecretRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::secretmanager::v1::SecretVersion>
SecretManagerServiceConnection::AddSecretVersion(
    google::cloud::secretmanager::v1::AddSecretVersionRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::secretmanager::v1::Secret>
SecretManagerServiceConnection::GetSecret(
    google::cloud::secretmanager::v1::GetSecretRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::secretmanager::v1::Secret>
SecretManagerServiceConnection::UpdateSecret(
    google::cloud::secretmanager::v1::UpdateSecretRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status SecretManagerServiceConnection::DeleteSecret(
    google::cloud::secretmanager::v1::DeleteSecretRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::secretmanager::v1::SecretVersion>
    SecretManagerServiceConnection::ListSecretVersions(
        google::cloud::secretmanager::v1::
            ListSecretVersionsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::secretmanager::v1::SecretVersion>>();
}

StatusOr<google::cloud::secretmanager::v1::SecretVersion>
SecretManagerServiceConnection::GetSecretVersion(
    google::cloud::secretmanager::v1::GetSecretVersionRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::secretmanager::v1::AccessSecretVersionResponse>
SecretManagerServiceConnection::AccessSecretVersion(
    google::cloud::secretmanager::v1::AccessSecretVersionRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::secretmanager::v1::SecretVersion>
SecretManagerServiceConnection::DisableSecretVersion(
    google::cloud::secretmanager::v1::DisableSecretVersionRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::secretmanager::v1::SecretVersion>
SecretManagerServiceConnection::EnableSecretVersion(
    google::cloud::secretmanager::v1::EnableSecretVersionRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::secretmanager::v1::SecretVersion>
SecretManagerServiceConnection::DestroySecretVersion(
    google::cloud::secretmanager::v1::DestroySecretVersionRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::v1::Policy> SecretManagerServiceConnection::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::v1::Policy> SecretManagerServiceConnection::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
SecretManagerServiceConnection::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<SecretManagerServiceConnection>
MakeSecretManagerServiceConnection(Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 SecretManagerServicePolicyOptionList>(
      options, __func__);
  options = secretmanager_internal::SecretManagerServiceDefaultOptions(
      std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = secretmanager_internal::CreateDefaultSecretManagerServiceStub(
      background->cq(), options);
  return std::make_shared<
      secretmanager_internal::SecretManagerServiceConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace secretmanager
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace secretmanager_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<secretmanager::SecretManagerServiceConnection>
MakeSecretManagerServiceConnection(
    std::shared_ptr<SecretManagerServiceStub> stub, Options options) {
  options = SecretManagerServiceDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  return std::make_shared<
      secretmanager_internal::SecretManagerServiceConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace secretmanager_internal
}  // namespace cloud
}  // namespace google
