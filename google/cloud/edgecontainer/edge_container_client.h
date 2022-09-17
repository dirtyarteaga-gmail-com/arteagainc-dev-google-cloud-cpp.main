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
// source: google/cloud/edgecontainer/v1/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_EDGECONTAINER_EDGE_CONTAINER_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_EDGECONTAINER_EDGE_CONTAINER_CLIENT_H

#include "google/cloud/edgecontainer/edge_container_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <map>
#include <memory>

namespace google {
namespace cloud {
namespace edgecontainer {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// EdgeContainer API provides management of Kubernetes Clusters on Google Edge
/// Cloud deployments.
///
/// @par Equality
///
/// Instances of this class created via copy-construction or copy-assignment
/// always compare equal. Instances created with equal
/// `std::shared_ptr<*Connection>` objects compare equal. Objects that compare
/// equal share the same underlying resources.
///
/// @par Performance
///
/// Creating a new instance of this class is a relatively expensive operation,
/// new objects establish new connections to the service. In contrast,
/// copy-construction, move-construction, and the corresponding assignment
/// operations are relatively efficient as the copies share all underlying
/// resources.
///
/// @par Thread Safety
///
/// Concurrent access to different instances of this class, even if they compare
/// equal, is guaranteed to work. Two or more threads operating on the same
/// instance of this class is not guaranteed to work. Since copy-construction
/// and move-construction is a relatively efficient operation, consider using
/// such a copy when using this class from multiple threads.
///
class EdgeContainerClient {
 public:
  explicit EdgeContainerClient(
      std::shared_ptr<EdgeContainerConnection> connection, Options opts = {});
  ~EdgeContainerClient();

  //@{
  // @name Copy and move support
  EdgeContainerClient(EdgeContainerClient const&) = default;
  EdgeContainerClient& operator=(EdgeContainerClient const&) = default;
  EdgeContainerClient(EdgeContainerClient&&) = default;
  EdgeContainerClient& operator=(EdgeContainerClient&&) = default;
  //@}

  //@{
  // @name Equality
  friend bool operator==(EdgeContainerClient const& a,
                         EdgeContainerClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(EdgeContainerClient const& a,
                         EdgeContainerClient const& b) {
    return !(a == b);
  }
  //@}

  ///
  /// Lists Clusters in a given project and location.
  ///
  /// @param parent  Required. The parent location, which owns this collection
  /// of clusters.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::edgecontainer::v1::Cluster,google/cloud/edgecontainer/v1/resources.proto#L52}
  ///
  /// [google.cloud.edgecontainer.v1.ListClustersRequest]:
  /// @googleapis_reference_link{google/cloud/edgecontainer/v1/service.proto#L241}
  /// [google.cloud.edgecontainer.v1.Cluster]:
  /// @googleapis_reference_link{google/cloud/edgecontainer/v1/resources.proto#L52}
  ///
  StreamRange<google::cloud::edgecontainer::v1::Cluster> ListClusters(
      std::string const& parent, Options opts = {});

  ///
  /// Lists Clusters in a given project and location.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::edgecontainer::v1::ListClustersRequest,google/cloud/edgecontainer/v1/service.proto#L241}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::edgecontainer::v1::Cluster,google/cloud/edgecontainer/v1/resources.proto#L52}
  ///
  /// [google.cloud.edgecontainer.v1.ListClustersRequest]:
  /// @googleapis_reference_link{google/cloud/edgecontainer/v1/service.proto#L241}
  /// [google.cloud.edgecontainer.v1.Cluster]:
  /// @googleapis_reference_link{google/cloud/edgecontainer/v1/resources.proto#L52}
  ///
  StreamRange<google::cloud::edgecontainer::v1::Cluster> ListClusters(
      google::cloud::edgecontainer::v1::ListClustersRequest request,
      Options opts = {});

  ///
  /// Gets details of a single Cluster.
  ///
  /// @param name  Required. The resource name of the cluster.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::edgecontainer::v1::Cluster,google/cloud/edgecontainer/v1/resources.proto#L52}
  ///
  /// [google.cloud.edgecontainer.v1.GetClusterRequest]:
  /// @googleapis_reference_link{google/cloud/edgecontainer/v1/service.proto#L277}
  /// [google.cloud.edgecontainer.v1.Cluster]:
  /// @googleapis_reference_link{google/cloud/edgecontainer/v1/resources.proto#L52}
  ///
  StatusOr<google::cloud::edgecontainer::v1::Cluster> GetCluster(
      std::string const& name, Options opts = {});

  ///
  /// Gets details of a single Cluster.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::edgecontainer::v1::GetClusterRequest,google/cloud/edgecontainer/v1/service.proto#L277}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::edgecontainer::v1::Cluster,google/cloud/edgecontainer/v1/resources.proto#L52}
  ///
  /// [google.cloud.edgecontainer.v1.GetClusterRequest]:
  /// @googleapis_reference_link{google/cloud/edgecontainer/v1/service.proto#L277}
  /// [google.cloud.edgecontainer.v1.Cluster]:
  /// @googleapis_reference_link{google/cloud/edgecontainer/v1/resources.proto#L52}
  ///
  StatusOr<google::cloud::edgecontainer::v1::Cluster> GetCluster(
      google::cloud::edgecontainer::v1::GetClusterRequest const& request,
      Options opts = {});

  ///
  /// Creates a new Cluster in a given project and location.
  ///
  /// @param parent  Required. The parent location where this cluster will be
  /// created.
  /// @param cluster  Required. The cluster to create.
  /// @param cluster_id  Required. A client-specified unique identifier for the
  /// cluster.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::edgecontainer::v1::Cluster,google/cloud/edgecontainer/v1/resources.proto#L52}
  ///
  /// [google.cloud.edgecontainer.v1.CreateClusterRequest]:
  /// @googleapis_reference_link{google/cloud/edgecontainer/v1/service.proto#L288}
  /// [google.cloud.edgecontainer.v1.Cluster]:
  /// @googleapis_reference_link{google/cloud/edgecontainer/v1/resources.proto#L52}
  ///
  future<StatusOr<google::cloud::edgecontainer::v1::Cluster>> CreateCluster(
      std::string const& parent,
      google::cloud::edgecontainer::v1::Cluster const& cluster,
      std::string const& cluster_id, Options opts = {});

  ///
  /// Creates a new Cluster in a given project and location.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::edgecontainer::v1::CreateClusterRequest,google/cloud/edgecontainer/v1/service.proto#L288}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::edgecontainer::v1::Cluster,google/cloud/edgecontainer/v1/resources.proto#L52}
  ///
  /// [google.cloud.edgecontainer.v1.CreateClusterRequest]:
  /// @googleapis_reference_link{google/cloud/edgecontainer/v1/service.proto#L288}
  /// [google.cloud.edgecontainer.v1.Cluster]:
  /// @googleapis_reference_link{google/cloud/edgecontainer/v1/resources.proto#L52}
  ///
  future<StatusOr<google::cloud::edgecontainer::v1::Cluster>> CreateCluster(
      google::cloud::edgecontainer::v1::CreateClusterRequest const& request,
      Options opts = {});

  ///
  /// Updates the parameters of a single Cluster.
  ///
  /// @param cluster  The updated cluster.
  /// @param update_mask  Field mask is used to specify the fields to be
  /// overwritten in the
  ///  Cluster resource by the update.
  ///  The fields specified in the update_mask are relative to the resource, not
  ///  the full request. A field will be overwritten if it is in the mask. If
  ///  the user does not provide a mask then all fields will be overwritten.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::edgecontainer::v1::Cluster,google/cloud/edgecontainer/v1/resources.proto#L52}
  ///
  /// [google.cloud.edgecontainer.v1.UpdateClusterRequest]:
  /// @googleapis_reference_link{google/cloud/edgecontainer/v1/service.proto#L310}
  /// [google.cloud.edgecontainer.v1.Cluster]:
  /// @googleapis_reference_link{google/cloud/edgecontainer/v1/resources.proto#L52}
  ///
  future<StatusOr<google::cloud::edgecontainer::v1::Cluster>> UpdateCluster(
      google::cloud::edgecontainer::v1::Cluster const& cluster,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  ///
  /// Updates the parameters of a single Cluster.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::edgecontainer::v1::UpdateClusterRequest,google/cloud/edgecontainer/v1/service.proto#L310}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::edgecontainer::v1::Cluster,google/cloud/edgecontainer/v1/resources.proto#L52}
  ///
  /// [google.cloud.edgecontainer.v1.UpdateClusterRequest]:
  /// @googleapis_reference_link{google/cloud/edgecontainer/v1/service.proto#L310}
  /// [google.cloud.edgecontainer.v1.Cluster]:
  /// @googleapis_reference_link{google/cloud/edgecontainer/v1/resources.proto#L52}
  ///
  future<StatusOr<google::cloud::edgecontainer::v1::Cluster>> UpdateCluster(
      google::cloud::edgecontainer::v1::UpdateClusterRequest const& request,
      Options opts = {});

  ///
  /// Deletes a single Cluster.
  ///
  /// @param name  Required. The resource name of the cluster.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::edgecontainer::v1::OperationMetadata,google/cloud/edgecontainer/v1/service.proto#L214}
  ///
  /// [google.cloud.edgecontainer.v1.DeleteClusterRequest]:
  /// @googleapis_reference_link{google/cloud/edgecontainer/v1/service.proto#L328}
  /// [google.cloud.edgecontainer.v1.OperationMetadata]:
  /// @googleapis_reference_link{google/cloud/edgecontainer/v1/service.proto#L214}
  ///
  future<StatusOr<google::cloud::edgecontainer::v1::OperationMetadata>>
  DeleteCluster(std::string const& name, Options opts = {});

  ///
  /// Deletes a single Cluster.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::edgecontainer::v1::DeleteClusterRequest,google/cloud/edgecontainer/v1/service.proto#L328}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::edgecontainer::v1::OperationMetadata,google/cloud/edgecontainer/v1/service.proto#L214}
  ///
  /// [google.cloud.edgecontainer.v1.DeleteClusterRequest]:
  /// @googleapis_reference_link{google/cloud/edgecontainer/v1/service.proto#L328}
  /// [google.cloud.edgecontainer.v1.OperationMetadata]:
  /// @googleapis_reference_link{google/cloud/edgecontainer/v1/service.proto#L214}
  ///
  future<StatusOr<google::cloud::edgecontainer::v1::OperationMetadata>>
  DeleteCluster(
      google::cloud::edgecontainer::v1::DeleteClusterRequest const& request,
      Options opts = {});

  ///
  /// Generates an access token for a Cluster.
  ///
  /// @param cluster  Required. The resource name of the cluster.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::edgecontainer::v1::GenerateAccessTokenResponse,google/cloud/edgecontainer/v1/service.proto#L355}
  ///
  /// [google.cloud.edgecontainer.v1.GenerateAccessTokenRequest]:
  /// @googleapis_reference_link{google/cloud/edgecontainer/v1/service.proto#L344}
  /// [google.cloud.edgecontainer.v1.GenerateAccessTokenResponse]:
  /// @googleapis_reference_link{google/cloud/edgecontainer/v1/service.proto#L355}
  ///
  StatusOr<google::cloud::edgecontainer::v1::GenerateAccessTokenResponse>
  GenerateAccessToken(std::string const& cluster, Options opts = {});

  ///
  /// Generates an access token for a Cluster.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::edgecontainer::v1::GenerateAccessTokenRequest,google/cloud/edgecontainer/v1/service.proto#L344}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::edgecontainer::v1::GenerateAccessTokenResponse,google/cloud/edgecontainer/v1/service.proto#L355}
  ///
  /// [google.cloud.edgecontainer.v1.GenerateAccessTokenRequest]:
  /// @googleapis_reference_link{google/cloud/edgecontainer/v1/service.proto#L344}
  /// [google.cloud.edgecontainer.v1.GenerateAccessTokenResponse]:
  /// @googleapis_reference_link{google/cloud/edgecontainer/v1/service.proto#L355}
  ///
  StatusOr<google::cloud::edgecontainer::v1::GenerateAccessTokenResponse>
  GenerateAccessToken(
      google::cloud::edgecontainer::v1::GenerateAccessTokenRequest const&
          request,
      Options opts = {});

  ///
  /// Lists NodePools in a given project and location.
  ///
  /// @param parent  Required. The parent cluster, which owns this collection of
  /// node pools.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::edgecontainer::v1::NodePool,google/cloud/edgecontainer/v1/resources.proto#L157}
  ///
  /// [google.cloud.edgecontainer.v1.ListNodePoolsRequest]:
  /// @googleapis_reference_link{google/cloud/edgecontainer/v1/service.proto#L364}
  /// [google.cloud.edgecontainer.v1.NodePool]:
  /// @googleapis_reference_link{google/cloud/edgecontainer/v1/resources.proto#L157}
  ///
  StreamRange<google::cloud::edgecontainer::v1::NodePool> ListNodePools(
      std::string const& parent, Options opts = {});

  ///
  /// Lists NodePools in a given project and location.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::edgecontainer::v1::ListNodePoolsRequest,google/cloud/edgecontainer/v1/service.proto#L364}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::edgecontainer::v1::NodePool,google/cloud/edgecontainer/v1/resources.proto#L157}
  ///
  /// [google.cloud.edgecontainer.v1.ListNodePoolsRequest]:
  /// @googleapis_reference_link{google/cloud/edgecontainer/v1/service.proto#L364}
  /// [google.cloud.edgecontainer.v1.NodePool]:
  /// @googleapis_reference_link{google/cloud/edgecontainer/v1/resources.proto#L157}
  ///
  StreamRange<google::cloud::edgecontainer::v1::NodePool> ListNodePools(
      google::cloud::edgecontainer::v1::ListNodePoolsRequest request,
      Options opts = {});

  ///
  /// Gets details of a single NodePool.
  ///
  /// @param name  Required. The resource name of the node pool.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::edgecontainer::v1::NodePool,google/cloud/edgecontainer/v1/resources.proto#L157}
  ///
  /// [google.cloud.edgecontainer.v1.GetNodePoolRequest]:
  /// @googleapis_reference_link{google/cloud/edgecontainer/v1/service.proto#L399}
  /// [google.cloud.edgecontainer.v1.NodePool]:
  /// @googleapis_reference_link{google/cloud/edgecontainer/v1/resources.proto#L157}
  ///
  StatusOr<google::cloud::edgecontainer::v1::NodePool> GetNodePool(
      std::string const& name, Options opts = {});

  ///
  /// Gets details of a single NodePool.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::edgecontainer::v1::GetNodePoolRequest,google/cloud/edgecontainer/v1/service.proto#L399}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::edgecontainer::v1::NodePool,google/cloud/edgecontainer/v1/resources.proto#L157}
  ///
  /// [google.cloud.edgecontainer.v1.GetNodePoolRequest]:
  /// @googleapis_reference_link{google/cloud/edgecontainer/v1/service.proto#L399}
  /// [google.cloud.edgecontainer.v1.NodePool]:
  /// @googleapis_reference_link{google/cloud/edgecontainer/v1/resources.proto#L157}
  ///
  StatusOr<google::cloud::edgecontainer::v1::NodePool> GetNodePool(
      google::cloud::edgecontainer::v1::GetNodePoolRequest const& request,
      Options opts = {});

  ///
  /// Creates a new NodePool in a given project and location.
  ///
  /// @param parent  Required. The parent cluster where this node pool will be
  /// created.
  /// @param node_pool  Required. The node pool to create.
  /// @param node_pool_id  Required. A client-specified unique identifier for
  /// the node pool.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::edgecontainer::v1::NodePool,google/cloud/edgecontainer/v1/resources.proto#L157}
  ///
  /// [google.cloud.edgecontainer.v1.CreateNodePoolRequest]:
  /// @googleapis_reference_link{google/cloud/edgecontainer/v1/service.proto#L410}
  /// [google.cloud.edgecontainer.v1.NodePool]:
  /// @googleapis_reference_link{google/cloud/edgecontainer/v1/resources.proto#L157}
  ///
  future<StatusOr<google::cloud::edgecontainer::v1::NodePool>> CreateNodePool(
      std::string const& parent,
      google::cloud::edgecontainer::v1::NodePool const& node_pool,
      std::string const& node_pool_id, Options opts = {});

  ///
  /// Creates a new NodePool in a given project and location.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::edgecontainer::v1::CreateNodePoolRequest,google/cloud/edgecontainer/v1/service.proto#L410}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::edgecontainer::v1::NodePool,google/cloud/edgecontainer/v1/resources.proto#L157}
  ///
  /// [google.cloud.edgecontainer.v1.CreateNodePoolRequest]:
  /// @googleapis_reference_link{google/cloud/edgecontainer/v1/service.proto#L410}
  /// [google.cloud.edgecontainer.v1.NodePool]:
  /// @googleapis_reference_link{google/cloud/edgecontainer/v1/resources.proto#L157}
  ///
  future<StatusOr<google::cloud::edgecontainer::v1::NodePool>> CreateNodePool(
      google::cloud::edgecontainer::v1::CreateNodePoolRequest const& request,
      Options opts = {});

  ///
  /// Updates the parameters of a single NodePool.
  ///
  /// @param node_pool  The updated node pool.
  /// @param update_mask  Field mask is used to specify the fields to be
  /// overwritten in the
  ///  NodePool resource by the update.
  ///  The fields specified in the update_mask are relative to the resource, not
  ///  the full request. A field will be overwritten if it is in the mask. If
  ///  the user does not provide a mask then all fields will be overwritten.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::edgecontainer::v1::NodePool,google/cloud/edgecontainer/v1/resources.proto#L157}
  ///
  /// [google.cloud.edgecontainer.v1.UpdateNodePoolRequest]:
  /// @googleapis_reference_link{google/cloud/edgecontainer/v1/service.proto#L432}
  /// [google.cloud.edgecontainer.v1.NodePool]:
  /// @googleapis_reference_link{google/cloud/edgecontainer/v1/resources.proto#L157}
  ///
  future<StatusOr<google::cloud::edgecontainer::v1::NodePool>> UpdateNodePool(
      google::cloud::edgecontainer::v1::NodePool const& node_pool,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  ///
  /// Updates the parameters of a single NodePool.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::edgecontainer::v1::UpdateNodePoolRequest,google/cloud/edgecontainer/v1/service.proto#L432}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::edgecontainer::v1::NodePool,google/cloud/edgecontainer/v1/resources.proto#L157}
  ///
  /// [google.cloud.edgecontainer.v1.UpdateNodePoolRequest]:
  /// @googleapis_reference_link{google/cloud/edgecontainer/v1/service.proto#L432}
  /// [google.cloud.edgecontainer.v1.NodePool]:
  /// @googleapis_reference_link{google/cloud/edgecontainer/v1/resources.proto#L157}
  ///
  future<StatusOr<google::cloud::edgecontainer::v1::NodePool>> UpdateNodePool(
      google::cloud::edgecontainer::v1::UpdateNodePoolRequest const& request,
      Options opts = {});

  ///
  /// Deletes a single NodePool.
  ///
  /// @param name  Required. The resource name of the node pool.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::edgecontainer::v1::OperationMetadata,google/cloud/edgecontainer/v1/service.proto#L214}
  ///
  /// [google.cloud.edgecontainer.v1.DeleteNodePoolRequest]:
  /// @googleapis_reference_link{google/cloud/edgecontainer/v1/service.proto#L450}
  /// [google.cloud.edgecontainer.v1.OperationMetadata]:
  /// @googleapis_reference_link{google/cloud/edgecontainer/v1/service.proto#L214}
  ///
  future<StatusOr<google::cloud::edgecontainer::v1::OperationMetadata>>
  DeleteNodePool(std::string const& name, Options opts = {});

  ///
  /// Deletes a single NodePool.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::edgecontainer::v1::DeleteNodePoolRequest,google/cloud/edgecontainer/v1/service.proto#L450}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::edgecontainer::v1::OperationMetadata,google/cloud/edgecontainer/v1/service.proto#L214}
  ///
  /// [google.cloud.edgecontainer.v1.DeleteNodePoolRequest]:
  /// @googleapis_reference_link{google/cloud/edgecontainer/v1/service.proto#L450}
  /// [google.cloud.edgecontainer.v1.OperationMetadata]:
  /// @googleapis_reference_link{google/cloud/edgecontainer/v1/service.proto#L214}
  ///
  future<StatusOr<google::cloud::edgecontainer::v1::OperationMetadata>>
  DeleteNodePool(
      google::cloud::edgecontainer::v1::DeleteNodePoolRequest const& request,
      Options opts = {});

  ///
  /// Lists Machines in a given project and location.
  ///
  /// @param parent  Required. The parent site, which owns this collection of
  /// machines.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::edgecontainer::v1::Machine,google/cloud/edgecontainer/v1/resources.proto#L236}
  ///
  /// [google.cloud.edgecontainer.v1.ListMachinesRequest]:
  /// @googleapis_reference_link{google/cloud/edgecontainer/v1/service.proto#L466}
  /// [google.cloud.edgecontainer.v1.Machine]:
  /// @googleapis_reference_link{google/cloud/edgecontainer/v1/resources.proto#L236}
  ///
  StreamRange<google::cloud::edgecontainer::v1::Machine> ListMachines(
      std::string const& parent, Options opts = {});

  ///
  /// Lists Machines in a given project and location.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::edgecontainer::v1::ListMachinesRequest,google/cloud/edgecontainer/v1/service.proto#L466}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::edgecontainer::v1::Machine,google/cloud/edgecontainer/v1/resources.proto#L236}
  ///
  /// [google.cloud.edgecontainer.v1.ListMachinesRequest]:
  /// @googleapis_reference_link{google/cloud/edgecontainer/v1/service.proto#L466}
  /// [google.cloud.edgecontainer.v1.Machine]:
  /// @googleapis_reference_link{google/cloud/edgecontainer/v1/resources.proto#L236}
  ///
  StreamRange<google::cloud::edgecontainer::v1::Machine> ListMachines(
      google::cloud::edgecontainer::v1::ListMachinesRequest request,
      Options opts = {});

  ///
  /// Gets details of a single Machine.
  ///
  /// @param name  Required. The resource name of the machine.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::edgecontainer::v1::Machine,google/cloud/edgecontainer/v1/resources.proto#L236}
  ///
  /// [google.cloud.edgecontainer.v1.GetMachineRequest]:
  /// @googleapis_reference_link{google/cloud/edgecontainer/v1/service.proto#L501}
  /// [google.cloud.edgecontainer.v1.Machine]:
  /// @googleapis_reference_link{google/cloud/edgecontainer/v1/resources.proto#L236}
  ///
  StatusOr<google::cloud::edgecontainer::v1::Machine> GetMachine(
      std::string const& name, Options opts = {});

  ///
  /// Gets details of a single Machine.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::edgecontainer::v1::GetMachineRequest,google/cloud/edgecontainer/v1/service.proto#L501}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::edgecontainer::v1::Machine,google/cloud/edgecontainer/v1/resources.proto#L236}
  ///
  /// [google.cloud.edgecontainer.v1.GetMachineRequest]:
  /// @googleapis_reference_link{google/cloud/edgecontainer/v1/service.proto#L501}
  /// [google.cloud.edgecontainer.v1.Machine]:
  /// @googleapis_reference_link{google/cloud/edgecontainer/v1/resources.proto#L236}
  ///
  StatusOr<google::cloud::edgecontainer::v1::Machine> GetMachine(
      google::cloud::edgecontainer::v1::GetMachineRequest const& request,
      Options opts = {});

  ///
  /// Lists VPN connections in a given project and location.
  ///
  /// @param parent  Required. The parent location, which owns this collection
  /// of VPN connections.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::edgecontainer::v1::VpnConnection,google/cloud/edgecontainer/v1/resources.proto#L273}
  ///
  /// [google.cloud.edgecontainer.v1.ListVpnConnectionsRequest]:
  /// @googleapis_reference_link{google/cloud/edgecontainer/v1/service.proto#L512}
  /// [google.cloud.edgecontainer.v1.VpnConnection]:
  /// @googleapis_reference_link{google/cloud/edgecontainer/v1/resources.proto#L273}
  ///
  StreamRange<google::cloud::edgecontainer::v1::VpnConnection>
  ListVpnConnections(std::string const& parent, Options opts = {});

  ///
  /// Lists VPN connections in a given project and location.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::edgecontainer::v1::ListVpnConnectionsRequest,google/cloud/edgecontainer/v1/service.proto#L512}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::edgecontainer::v1::VpnConnection,google/cloud/edgecontainer/v1/resources.proto#L273}
  ///
  /// [google.cloud.edgecontainer.v1.ListVpnConnectionsRequest]:
  /// @googleapis_reference_link{google/cloud/edgecontainer/v1/service.proto#L512}
  /// [google.cloud.edgecontainer.v1.VpnConnection]:
  /// @googleapis_reference_link{google/cloud/edgecontainer/v1/resources.proto#L273}
  ///
  StreamRange<google::cloud::edgecontainer::v1::VpnConnection>
  ListVpnConnections(
      google::cloud::edgecontainer::v1::ListVpnConnectionsRequest request,
      Options opts = {});

  ///
  /// Gets details of a single VPN connection.
  ///
  /// @param name  Required. The resource name of the vpn connection.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::edgecontainer::v1::VpnConnection,google/cloud/edgecontainer/v1/resources.proto#L273}
  ///
  /// [google.cloud.edgecontainer.v1.GetVpnConnectionRequest]:
  /// @googleapis_reference_link{google/cloud/edgecontainer/v1/service.proto#L547}
  /// [google.cloud.edgecontainer.v1.VpnConnection]:
  /// @googleapis_reference_link{google/cloud/edgecontainer/v1/resources.proto#L273}
  ///
  StatusOr<google::cloud::edgecontainer::v1::VpnConnection> GetVpnConnection(
      std::string const& name, Options opts = {});

  ///
  /// Gets details of a single VPN connection.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::edgecontainer::v1::GetVpnConnectionRequest,google/cloud/edgecontainer/v1/service.proto#L547}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::edgecontainer::v1::VpnConnection,google/cloud/edgecontainer/v1/resources.proto#L273}
  ///
  /// [google.cloud.edgecontainer.v1.GetVpnConnectionRequest]:
  /// @googleapis_reference_link{google/cloud/edgecontainer/v1/service.proto#L547}
  /// [google.cloud.edgecontainer.v1.VpnConnection]:
  /// @googleapis_reference_link{google/cloud/edgecontainer/v1/resources.proto#L273}
  ///
  StatusOr<google::cloud::edgecontainer::v1::VpnConnection> GetVpnConnection(
      google::cloud::edgecontainer::v1::GetVpnConnectionRequest const& request,
      Options opts = {});

  ///
  /// Creates a new VPN connection in a given project and location.
  ///
  /// @param parent  Required. The parent location where this vpn connection
  /// will be created.
  /// @param vpn_connection  Required. The VPN connection to create.
  /// @param vpn_connection_id  Required. The VPN connection identifier.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::edgecontainer::v1::VpnConnection,google/cloud/edgecontainer/v1/resources.proto#L273}
  ///
  /// [google.cloud.edgecontainer.v1.CreateVpnConnectionRequest]:
  /// @googleapis_reference_link{google/cloud/edgecontainer/v1/service.proto#L558}
  /// [google.cloud.edgecontainer.v1.VpnConnection]:
  /// @googleapis_reference_link{google/cloud/edgecontainer/v1/resources.proto#L273}
  ///
  future<StatusOr<google::cloud::edgecontainer::v1::VpnConnection>>
  CreateVpnConnection(
      std::string const& parent,
      google::cloud::edgecontainer::v1::VpnConnection const& vpn_connection,
      std::string const& vpn_connection_id, Options opts = {});

  ///
  /// Creates a new VPN connection in a given project and location.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::edgecontainer::v1::CreateVpnConnectionRequest,google/cloud/edgecontainer/v1/service.proto#L558}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::edgecontainer::v1::VpnConnection,google/cloud/edgecontainer/v1/resources.proto#L273}
  ///
  /// [google.cloud.edgecontainer.v1.CreateVpnConnectionRequest]:
  /// @googleapis_reference_link{google/cloud/edgecontainer/v1/service.proto#L558}
  /// [google.cloud.edgecontainer.v1.VpnConnection]:
  /// @googleapis_reference_link{google/cloud/edgecontainer/v1/resources.proto#L273}
  ///
  future<StatusOr<google::cloud::edgecontainer::v1::VpnConnection>>
  CreateVpnConnection(
      google::cloud::edgecontainer::v1::CreateVpnConnectionRequest const&
          request,
      Options opts = {});

  ///
  /// Deletes a single VPN connection.
  ///
  /// @param name  Required. The resource name of the vpn connection.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::edgecontainer::v1::OperationMetadata,google/cloud/edgecontainer/v1/service.proto#L214}
  ///
  /// [google.cloud.edgecontainer.v1.DeleteVpnConnectionRequest]:
  /// @googleapis_reference_link{google/cloud/edgecontainer/v1/service.proto#L580}
  /// [google.cloud.edgecontainer.v1.OperationMetadata]:
  /// @googleapis_reference_link{google/cloud/edgecontainer/v1/service.proto#L214}
  ///
  future<StatusOr<google::cloud::edgecontainer::v1::OperationMetadata>>
  DeleteVpnConnection(std::string const& name, Options opts = {});

  ///
  /// Deletes a single VPN connection.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::edgecontainer::v1::DeleteVpnConnectionRequest,google/cloud/edgecontainer/v1/service.proto#L580}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::edgecontainer::v1::OperationMetadata,google/cloud/edgecontainer/v1/service.proto#L214}
  ///
  /// [google.cloud.edgecontainer.v1.DeleteVpnConnectionRequest]:
  /// @googleapis_reference_link{google/cloud/edgecontainer/v1/service.proto#L580}
  /// [google.cloud.edgecontainer.v1.OperationMetadata]:
  /// @googleapis_reference_link{google/cloud/edgecontainer/v1/service.proto#L214}
  ///
  future<StatusOr<google::cloud::edgecontainer::v1::OperationMetadata>>
  DeleteVpnConnection(
      google::cloud::edgecontainer::v1::DeleteVpnConnectionRequest const&
          request,
      Options opts = {});

 private:
  std::shared_ptr<EdgeContainerConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace edgecontainer
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_EDGECONTAINER_EDGE_CONTAINER_CLIENT_H
