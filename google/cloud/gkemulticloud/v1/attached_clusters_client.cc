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
// source: google/cloud/gkemulticloud/v1/attached_service.proto

#include "google/cloud/gkemulticloud/v1/attached_clusters_client.h"
#include <memory>

namespace google {
namespace cloud {
namespace gkemulticloud_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AttachedClustersClient::AttachedClustersClient(
    std::shared_ptr<AttachedClustersConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
AttachedClustersClient::~AttachedClustersClient() = default;

future<StatusOr<google::cloud::gkemulticloud::v1::AttachedCluster>>
AttachedClustersClient::CreateAttachedCluster(
    std::string const& parent,
    google::cloud::gkemulticloud::v1::AttachedCluster const& attached_cluster,
    std::string const& attached_cluster_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::gkemulticloud::v1::CreateAttachedClusterRequest request;
  request.set_parent(parent);
  *request.mutable_attached_cluster() = attached_cluster;
  request.set_attached_cluster_id(attached_cluster_id);
  return connection_->CreateAttachedCluster(request);
}

future<StatusOr<google::cloud::gkemulticloud::v1::AttachedCluster>>
AttachedClustersClient::CreateAttachedCluster(
    google::cloud::gkemulticloud::v1::CreateAttachedClusterRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateAttachedCluster(request);
}

future<StatusOr<google::cloud::gkemulticloud::v1::AttachedCluster>>
AttachedClustersClient::UpdateAttachedCluster(
    google::cloud::gkemulticloud::v1::AttachedCluster const& attached_cluster,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::gkemulticloud::v1::UpdateAttachedClusterRequest request;
  *request.mutable_attached_cluster() = attached_cluster;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateAttachedCluster(request);
}

future<StatusOr<google::cloud::gkemulticloud::v1::AttachedCluster>>
AttachedClustersClient::UpdateAttachedCluster(
    google::cloud::gkemulticloud::v1::UpdateAttachedClusterRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateAttachedCluster(request);
}

future<StatusOr<google::cloud::gkemulticloud::v1::AttachedCluster>>
AttachedClustersClient::ImportAttachedCluster(
    std::string const& parent, std::string const& fleet_membership,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::gkemulticloud::v1::ImportAttachedClusterRequest request;
  request.set_parent(parent);
  request.set_fleet_membership(fleet_membership);
  return connection_->ImportAttachedCluster(request);
}

future<StatusOr<google::cloud::gkemulticloud::v1::AttachedCluster>>
AttachedClustersClient::ImportAttachedCluster(
    google::cloud::gkemulticloud::v1::ImportAttachedClusterRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ImportAttachedCluster(request);
}

StatusOr<google::cloud::gkemulticloud::v1::AttachedCluster>
AttachedClustersClient::GetAttachedCluster(std::string const& name,
                                           Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::gkemulticloud::v1::GetAttachedClusterRequest request;
  request.set_name(name);
  return connection_->GetAttachedCluster(request);
}

StatusOr<google::cloud::gkemulticloud::v1::AttachedCluster>
AttachedClustersClient::GetAttachedCluster(
    google::cloud::gkemulticloud::v1::GetAttachedClusterRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetAttachedCluster(request);
}

StreamRange<google::cloud::gkemulticloud::v1::AttachedCluster>
AttachedClustersClient::ListAttachedClusters(std::string const& parent,
                                             Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::gkemulticloud::v1::ListAttachedClustersRequest request;
  request.set_parent(parent);
  return connection_->ListAttachedClusters(request);
}

StreamRange<google::cloud::gkemulticloud::v1::AttachedCluster>
AttachedClustersClient::ListAttachedClusters(
    google::cloud::gkemulticloud::v1::ListAttachedClustersRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListAttachedClusters(std::move(request));
}

future<StatusOr<google::cloud::gkemulticloud::v1::OperationMetadata>>
AttachedClustersClient::DeleteAttachedCluster(std::string const& name,
                                              Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::gkemulticloud::v1::DeleteAttachedClusterRequest request;
  request.set_name(name);
  return connection_->DeleteAttachedCluster(request);
}

future<StatusOr<google::cloud::gkemulticloud::v1::OperationMetadata>>
AttachedClustersClient::DeleteAttachedCluster(
    google::cloud::gkemulticloud::v1::DeleteAttachedClusterRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteAttachedCluster(request);
}

StatusOr<google::cloud::gkemulticloud::v1::AttachedServerConfig>
AttachedClustersClient::GetAttachedServerConfig(std::string const& name,
                                                Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::gkemulticloud::v1::GetAttachedServerConfigRequest request;
  request.set_name(name);
  return connection_->GetAttachedServerConfig(request);
}

StatusOr<google::cloud::gkemulticloud::v1::AttachedServerConfig>
AttachedClustersClient::GetAttachedServerConfig(
    google::cloud::gkemulticloud::v1::GetAttachedServerConfigRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetAttachedServerConfig(request);
}

StatusOr<google::cloud::gkemulticloud::v1::
             GenerateAttachedClusterInstallManifestResponse>
AttachedClustersClient::GenerateAttachedClusterInstallManifest(
    std::string const& parent, std::string const& attached_cluster_id,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::gkemulticloud::v1::
      GenerateAttachedClusterInstallManifestRequest request;
  request.set_parent(parent);
  request.set_attached_cluster_id(attached_cluster_id);
  return connection_->GenerateAttachedClusterInstallManifest(request);
}

StatusOr<google::cloud::gkemulticloud::v1::
             GenerateAttachedClusterInstallManifestResponse>
AttachedClustersClient::GenerateAttachedClusterInstallManifest(
    google::cloud::gkemulticloud::v1::
        GenerateAttachedClusterInstallManifestRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GenerateAttachedClusterInstallManifest(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gkemulticloud_v1
}  // namespace cloud
}  // namespace google
