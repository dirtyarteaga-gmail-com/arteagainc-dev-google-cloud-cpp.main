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
// source: google/cloud/baremetalsolution/v2/baremetalsolution.proto

#include "google/cloud/baremetalsolution/v2/bare_metal_solution_client.h"
#include <memory>

namespace google {
namespace cloud {
namespace baremetalsolution_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

BareMetalSolutionClient::BareMetalSolutionClient(
    std::shared_ptr<BareMetalSolutionConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
BareMetalSolutionClient::~BareMetalSolutionClient() = default;

StreamRange<google::cloud::baremetalsolution::v2::Instance>
BareMetalSolutionClient::ListInstances(std::string const& parent,
                                       Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::baremetalsolution::v2::ListInstancesRequest request;
  request.set_parent(parent);
  return connection_->ListInstances(request);
}

StreamRange<google::cloud::baremetalsolution::v2::Instance>
BareMetalSolutionClient::ListInstances(
    google::cloud::baremetalsolution::v2::ListInstancesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListInstances(std::move(request));
}

StatusOr<google::cloud::baremetalsolution::v2::Instance>
BareMetalSolutionClient::GetInstance(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::baremetalsolution::v2::GetInstanceRequest request;
  request.set_name(name);
  return connection_->GetInstance(request);
}

StatusOr<google::cloud::baremetalsolution::v2::Instance>
BareMetalSolutionClient::GetInstance(
    google::cloud::baremetalsolution::v2::GetInstanceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetInstance(request);
}

future<StatusOr<google::cloud::baremetalsolution::v2::Instance>>
BareMetalSolutionClient::UpdateInstance(
    google::cloud::baremetalsolution::v2::Instance const& instance,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::baremetalsolution::v2::UpdateInstanceRequest request;
  *request.mutable_instance() = instance;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateInstance(request);
}

future<StatusOr<google::cloud::baremetalsolution::v2::Instance>>
BareMetalSolutionClient::UpdateInstance(
    google::cloud::baremetalsolution::v2::UpdateInstanceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateInstance(request);
}

StatusOr<google::cloud::baremetalsolution::v2::Instance>
BareMetalSolutionClient::RenameInstance(std::string const& name,
                                        std::string const& new_instance_id,
                                        Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::baremetalsolution::v2::RenameInstanceRequest request;
  request.set_name(name);
  request.set_new_instance_id(new_instance_id);
  return connection_->RenameInstance(request);
}

StatusOr<google::cloud::baremetalsolution::v2::Instance>
BareMetalSolutionClient::RenameInstance(
    google::cloud::baremetalsolution::v2::RenameInstanceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RenameInstance(request);
}

future<StatusOr<google::cloud::baremetalsolution::v2::ResetInstanceResponse>>
BareMetalSolutionClient::ResetInstance(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::baremetalsolution::v2::ResetInstanceRequest request;
  request.set_name(name);
  return connection_->ResetInstance(request);
}

future<StatusOr<google::cloud::baremetalsolution::v2::ResetInstanceResponse>>
BareMetalSolutionClient::ResetInstance(
    google::cloud::baremetalsolution::v2::ResetInstanceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ResetInstance(request);
}

future<StatusOr<google::cloud::baremetalsolution::v2::StartInstanceResponse>>
BareMetalSolutionClient::StartInstance(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::baremetalsolution::v2::StartInstanceRequest request;
  request.set_name(name);
  return connection_->StartInstance(request);
}

future<StatusOr<google::cloud::baremetalsolution::v2::StartInstanceResponse>>
BareMetalSolutionClient::StartInstance(
    google::cloud::baremetalsolution::v2::StartInstanceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->StartInstance(request);
}

future<StatusOr<google::cloud::baremetalsolution::v2::StopInstanceResponse>>
BareMetalSolutionClient::StopInstance(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::baremetalsolution::v2::StopInstanceRequest request;
  request.set_name(name);
  return connection_->StopInstance(request);
}

future<StatusOr<google::cloud::baremetalsolution::v2::StopInstanceResponse>>
BareMetalSolutionClient::StopInstance(
    google::cloud::baremetalsolution::v2::StopInstanceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->StopInstance(request);
}

future<StatusOr<google::cloud::baremetalsolution::v2::
                    EnableInteractiveSerialConsoleResponse>>
BareMetalSolutionClient::EnableInteractiveSerialConsole(std::string const& name,
                                                        Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::baremetalsolution::v2::EnableInteractiveSerialConsoleRequest
      request;
  request.set_name(name);
  return connection_->EnableInteractiveSerialConsole(request);
}

future<StatusOr<google::cloud::baremetalsolution::v2::
                    EnableInteractiveSerialConsoleResponse>>
BareMetalSolutionClient::EnableInteractiveSerialConsole(
    google::cloud::baremetalsolution::v2::
        EnableInteractiveSerialConsoleRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->EnableInteractiveSerialConsole(request);
}

future<StatusOr<google::cloud::baremetalsolution::v2::
                    DisableInteractiveSerialConsoleResponse>>
BareMetalSolutionClient::DisableInteractiveSerialConsole(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::baremetalsolution::v2::DisableInteractiveSerialConsoleRequest
      request;
  request.set_name(name);
  return connection_->DisableInteractiveSerialConsole(request);
}

future<StatusOr<google::cloud::baremetalsolution::v2::
                    DisableInteractiveSerialConsoleResponse>>
BareMetalSolutionClient::DisableInteractiveSerialConsole(
    google::cloud::baremetalsolution::v2::
        DisableInteractiveSerialConsoleRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DisableInteractiveSerialConsole(request);
}

future<StatusOr<google::cloud::baremetalsolution::v2::Instance>>
BareMetalSolutionClient::DetachLun(std::string const& instance,
                                   std::string const& lun, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::baremetalsolution::v2::DetachLunRequest request;
  request.set_instance(instance);
  request.set_lun(lun);
  return connection_->DetachLun(request);
}

future<StatusOr<google::cloud::baremetalsolution::v2::Instance>>
BareMetalSolutionClient::DetachLun(
    google::cloud::baremetalsolution::v2::DetachLunRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DetachLun(request);
}

StreamRange<google::cloud::baremetalsolution::v2::SSHKey>
BareMetalSolutionClient::ListSSHKeys(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::baremetalsolution::v2::ListSSHKeysRequest request;
  request.set_parent(parent);
  return connection_->ListSSHKeys(request);
}

StreamRange<google::cloud::baremetalsolution::v2::SSHKey>
BareMetalSolutionClient::ListSSHKeys(
    google::cloud::baremetalsolution::v2::ListSSHKeysRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListSSHKeys(std::move(request));
}

StatusOr<google::cloud::baremetalsolution::v2::SSHKey>
BareMetalSolutionClient::CreateSSHKey(
    std::string const& parent,
    google::cloud::baremetalsolution::v2::SSHKey const& ssh_key,
    std::string const& ssh_key_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::baremetalsolution::v2::CreateSSHKeyRequest request;
  request.set_parent(parent);
  *request.mutable_ssh_key() = ssh_key;
  request.set_ssh_key_id(ssh_key_id);
  return connection_->CreateSSHKey(request);
}

StatusOr<google::cloud::baremetalsolution::v2::SSHKey>
BareMetalSolutionClient::CreateSSHKey(
    google::cloud::baremetalsolution::v2::CreateSSHKeyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateSSHKey(request);
}

Status BareMetalSolutionClient::DeleteSSHKey(std::string const& name,
                                             Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::baremetalsolution::v2::DeleteSSHKeyRequest request;
  request.set_name(name);
  return connection_->DeleteSSHKey(request);
}

Status BareMetalSolutionClient::DeleteSSHKey(
    google::cloud::baremetalsolution::v2::DeleteSSHKeyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteSSHKey(request);
}

StreamRange<google::cloud::baremetalsolution::v2::Volume>
BareMetalSolutionClient::ListVolumes(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::baremetalsolution::v2::ListVolumesRequest request;
  request.set_parent(parent);
  return connection_->ListVolumes(request);
}

StreamRange<google::cloud::baremetalsolution::v2::Volume>
BareMetalSolutionClient::ListVolumes(
    google::cloud::baremetalsolution::v2::ListVolumesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListVolumes(std::move(request));
}

StatusOr<google::cloud::baremetalsolution::v2::Volume>
BareMetalSolutionClient::GetVolume(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::baremetalsolution::v2::GetVolumeRequest request;
  request.set_name(name);
  return connection_->GetVolume(request);
}

StatusOr<google::cloud::baremetalsolution::v2::Volume>
BareMetalSolutionClient::GetVolume(
    google::cloud::baremetalsolution::v2::GetVolumeRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetVolume(request);
}

future<StatusOr<google::cloud::baremetalsolution::v2::Volume>>
BareMetalSolutionClient::UpdateVolume(
    google::cloud::baremetalsolution::v2::Volume const& volume,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::baremetalsolution::v2::UpdateVolumeRequest request;
  *request.mutable_volume() = volume;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateVolume(request);
}

future<StatusOr<google::cloud::baremetalsolution::v2::Volume>>
BareMetalSolutionClient::UpdateVolume(
    google::cloud::baremetalsolution::v2::UpdateVolumeRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateVolume(request);
}

StatusOr<google::cloud::baremetalsolution::v2::Volume>
BareMetalSolutionClient::RenameVolume(std::string const& name,
                                      std::string const& new_volume_id,
                                      Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::baremetalsolution::v2::RenameVolumeRequest request;
  request.set_name(name);
  request.set_new_volume_id(new_volume_id);
  return connection_->RenameVolume(request);
}

StatusOr<google::cloud::baremetalsolution::v2::Volume>
BareMetalSolutionClient::RenameVolume(
    google::cloud::baremetalsolution::v2::RenameVolumeRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RenameVolume(request);
}

future<StatusOr<google::cloud::baremetalsolution::v2::OperationMetadata>>
BareMetalSolutionClient::EvictVolume(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::baremetalsolution::v2::EvictVolumeRequest request;
  request.set_name(name);
  return connection_->EvictVolume(request);
}

future<StatusOr<google::cloud::baremetalsolution::v2::OperationMetadata>>
BareMetalSolutionClient::EvictVolume(
    google::cloud::baremetalsolution::v2::EvictVolumeRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->EvictVolume(request);
}

future<StatusOr<google::cloud::baremetalsolution::v2::Volume>>
BareMetalSolutionClient::ResizeVolume(std::string const& volume,
                                      std::int64_t size_gib, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::baremetalsolution::v2::ResizeVolumeRequest request;
  request.set_volume(volume);
  request.set_size_gib(size_gib);
  return connection_->ResizeVolume(request);
}

future<StatusOr<google::cloud::baremetalsolution::v2::Volume>>
BareMetalSolutionClient::ResizeVolume(
    google::cloud::baremetalsolution::v2::ResizeVolumeRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ResizeVolume(request);
}

StreamRange<google::cloud::baremetalsolution::v2::Network>
BareMetalSolutionClient::ListNetworks(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::baremetalsolution::v2::ListNetworksRequest request;
  request.set_parent(parent);
  return connection_->ListNetworks(request);
}

StreamRange<google::cloud::baremetalsolution::v2::Network>
BareMetalSolutionClient::ListNetworks(
    google::cloud::baremetalsolution::v2::ListNetworksRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListNetworks(std::move(request));
}

StatusOr<google::cloud::baremetalsolution::v2::ListNetworkUsageResponse>
BareMetalSolutionClient::ListNetworkUsage(std::string const& location,
                                          Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::baremetalsolution::v2::ListNetworkUsageRequest request;
  request.set_location(location);
  return connection_->ListNetworkUsage(request);
}

StatusOr<google::cloud::baremetalsolution::v2::ListNetworkUsageResponse>
BareMetalSolutionClient::ListNetworkUsage(
    google::cloud::baremetalsolution::v2::ListNetworkUsageRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListNetworkUsage(request);
}

StatusOr<google::cloud::baremetalsolution::v2::Network>
BareMetalSolutionClient::GetNetwork(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::baremetalsolution::v2::GetNetworkRequest request;
  request.set_name(name);
  return connection_->GetNetwork(request);
}

StatusOr<google::cloud::baremetalsolution::v2::Network>
BareMetalSolutionClient::GetNetwork(
    google::cloud::baremetalsolution::v2::GetNetworkRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetNetwork(request);
}

future<StatusOr<google::cloud::baremetalsolution::v2::Network>>
BareMetalSolutionClient::UpdateNetwork(
    google::cloud::baremetalsolution::v2::Network const& network,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::baremetalsolution::v2::UpdateNetworkRequest request;
  *request.mutable_network() = network;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateNetwork(request);
}

future<StatusOr<google::cloud::baremetalsolution::v2::Network>>
BareMetalSolutionClient::UpdateNetwork(
    google::cloud::baremetalsolution::v2::UpdateNetworkRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateNetwork(request);
}

StatusOr<google::cloud::baremetalsolution::v2::VolumeSnapshot>
BareMetalSolutionClient::CreateVolumeSnapshot(
    std::string const& parent,
    google::cloud::baremetalsolution::v2::VolumeSnapshot const& volume_snapshot,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::baremetalsolution::v2::CreateVolumeSnapshotRequest request;
  request.set_parent(parent);
  *request.mutable_volume_snapshot() = volume_snapshot;
  return connection_->CreateVolumeSnapshot(request);
}

StatusOr<google::cloud::baremetalsolution::v2::VolumeSnapshot>
BareMetalSolutionClient::CreateVolumeSnapshot(
    google::cloud::baremetalsolution::v2::CreateVolumeSnapshotRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateVolumeSnapshot(request);
}

future<StatusOr<google::cloud::baremetalsolution::v2::VolumeSnapshot>>
BareMetalSolutionClient::RestoreVolumeSnapshot(
    std::string const& volume_snapshot, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::baremetalsolution::v2::RestoreVolumeSnapshotRequest request;
  request.set_volume_snapshot(volume_snapshot);
  return connection_->RestoreVolumeSnapshot(request);
}

future<StatusOr<google::cloud::baremetalsolution::v2::VolumeSnapshot>>
BareMetalSolutionClient::RestoreVolumeSnapshot(
    google::cloud::baremetalsolution::v2::RestoreVolumeSnapshotRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RestoreVolumeSnapshot(request);
}

Status BareMetalSolutionClient::DeleteVolumeSnapshot(std::string const& name,
                                                     Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::baremetalsolution::v2::DeleteVolumeSnapshotRequest request;
  request.set_name(name);
  return connection_->DeleteVolumeSnapshot(request);
}

Status BareMetalSolutionClient::DeleteVolumeSnapshot(
    google::cloud::baremetalsolution::v2::DeleteVolumeSnapshotRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteVolumeSnapshot(request);
}

StatusOr<google::cloud::baremetalsolution::v2::VolumeSnapshot>
BareMetalSolutionClient::GetVolumeSnapshot(std::string const& name,
                                           Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::baremetalsolution::v2::GetVolumeSnapshotRequest request;
  request.set_name(name);
  return connection_->GetVolumeSnapshot(request);
}

StatusOr<google::cloud::baremetalsolution::v2::VolumeSnapshot>
BareMetalSolutionClient::GetVolumeSnapshot(
    google::cloud::baremetalsolution::v2::GetVolumeSnapshotRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetVolumeSnapshot(request);
}

StreamRange<google::cloud::baremetalsolution::v2::VolumeSnapshot>
BareMetalSolutionClient::ListVolumeSnapshots(std::string const& parent,
                                             Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::baremetalsolution::v2::ListVolumeSnapshotsRequest request;
  request.set_parent(parent);
  return connection_->ListVolumeSnapshots(request);
}

StreamRange<google::cloud::baremetalsolution::v2::VolumeSnapshot>
BareMetalSolutionClient::ListVolumeSnapshots(
    google::cloud::baremetalsolution::v2::ListVolumeSnapshotsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListVolumeSnapshots(std::move(request));
}

StatusOr<google::cloud::baremetalsolution::v2::Lun>
BareMetalSolutionClient::GetLun(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::baremetalsolution::v2::GetLunRequest request;
  request.set_name(name);
  return connection_->GetLun(request);
}

StatusOr<google::cloud::baremetalsolution::v2::Lun>
BareMetalSolutionClient::GetLun(
    google::cloud::baremetalsolution::v2::GetLunRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetLun(request);
}

StreamRange<google::cloud::baremetalsolution::v2::Lun>
BareMetalSolutionClient::ListLuns(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::baremetalsolution::v2::ListLunsRequest request;
  request.set_parent(parent);
  return connection_->ListLuns(request);
}

StreamRange<google::cloud::baremetalsolution::v2::Lun>
BareMetalSolutionClient::ListLuns(
    google::cloud::baremetalsolution::v2::ListLunsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListLuns(std::move(request));
}

future<StatusOr<google::cloud::baremetalsolution::v2::OperationMetadata>>
BareMetalSolutionClient::EvictLun(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::baremetalsolution::v2::EvictLunRequest request;
  request.set_name(name);
  return connection_->EvictLun(request);
}

future<StatusOr<google::cloud::baremetalsolution::v2::OperationMetadata>>
BareMetalSolutionClient::EvictLun(
    google::cloud::baremetalsolution::v2::EvictLunRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->EvictLun(request);
}

StatusOr<google::cloud::baremetalsolution::v2::NfsShare>
BareMetalSolutionClient::GetNfsShare(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::baremetalsolution::v2::GetNfsShareRequest request;
  request.set_name(name);
  return connection_->GetNfsShare(request);
}

StatusOr<google::cloud::baremetalsolution::v2::NfsShare>
BareMetalSolutionClient::GetNfsShare(
    google::cloud::baremetalsolution::v2::GetNfsShareRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetNfsShare(request);
}

StreamRange<google::cloud::baremetalsolution::v2::NfsShare>
BareMetalSolutionClient::ListNfsShares(std::string const& parent,
                                       Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::baremetalsolution::v2::ListNfsSharesRequest request;
  request.set_parent(parent);
  return connection_->ListNfsShares(request);
}

StreamRange<google::cloud::baremetalsolution::v2::NfsShare>
BareMetalSolutionClient::ListNfsShares(
    google::cloud::baremetalsolution::v2::ListNfsSharesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListNfsShares(std::move(request));
}

future<StatusOr<google::cloud::baremetalsolution::v2::NfsShare>>
BareMetalSolutionClient::UpdateNfsShare(
    google::cloud::baremetalsolution::v2::NfsShare const& nfs_share,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::baremetalsolution::v2::UpdateNfsShareRequest request;
  *request.mutable_nfs_share() = nfs_share;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateNfsShare(request);
}

future<StatusOr<google::cloud::baremetalsolution::v2::NfsShare>>
BareMetalSolutionClient::UpdateNfsShare(
    google::cloud::baremetalsolution::v2::UpdateNfsShareRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateNfsShare(request);
}

future<StatusOr<google::cloud::baremetalsolution::v2::NfsShare>>
BareMetalSolutionClient::CreateNfsShare(
    std::string const& parent,
    google::cloud::baremetalsolution::v2::NfsShare const& nfs_share,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::baremetalsolution::v2::CreateNfsShareRequest request;
  request.set_parent(parent);
  *request.mutable_nfs_share() = nfs_share;
  return connection_->CreateNfsShare(request);
}

future<StatusOr<google::cloud::baremetalsolution::v2::NfsShare>>
BareMetalSolutionClient::CreateNfsShare(
    google::cloud::baremetalsolution::v2::CreateNfsShareRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateNfsShare(request);
}

StatusOr<google::cloud::baremetalsolution::v2::NfsShare>
BareMetalSolutionClient::RenameNfsShare(std::string const& name,
                                        std::string const& new_nfsshare_id,
                                        Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::baremetalsolution::v2::RenameNfsShareRequest request;
  request.set_name(name);
  request.set_new_nfsshare_id(new_nfsshare_id);
  return connection_->RenameNfsShare(request);
}

StatusOr<google::cloud::baremetalsolution::v2::NfsShare>
BareMetalSolutionClient::RenameNfsShare(
    google::cloud::baremetalsolution::v2::RenameNfsShareRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RenameNfsShare(request);
}

future<StatusOr<google::cloud::baremetalsolution::v2::OperationMetadata>>
BareMetalSolutionClient::DeleteNfsShare(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::baremetalsolution::v2::DeleteNfsShareRequest request;
  request.set_name(name);
  return connection_->DeleteNfsShare(request);
}

future<StatusOr<google::cloud::baremetalsolution::v2::OperationMetadata>>
BareMetalSolutionClient::DeleteNfsShare(
    google::cloud::baremetalsolution::v2::DeleteNfsShareRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteNfsShare(request);
}

StreamRange<google::cloud::baremetalsolution::v2::ProvisioningQuota>
BareMetalSolutionClient::ListProvisioningQuotas(std::string const& parent,
                                                Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::baremetalsolution::v2::ListProvisioningQuotasRequest request;
  request.set_parent(parent);
  return connection_->ListProvisioningQuotas(request);
}

StreamRange<google::cloud::baremetalsolution::v2::ProvisioningQuota>
BareMetalSolutionClient::ListProvisioningQuotas(
    google::cloud::baremetalsolution::v2::ListProvisioningQuotasRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListProvisioningQuotas(std::move(request));
}

StatusOr<google::cloud::baremetalsolution::v2::SubmitProvisioningConfigResponse>
BareMetalSolutionClient::SubmitProvisioningConfig(
    std::string const& parent,
    google::cloud::baremetalsolution::v2::ProvisioningConfig const&
        provisioning_config,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::baremetalsolution::v2::SubmitProvisioningConfigRequest request;
  request.set_parent(parent);
  *request.mutable_provisioning_config() = provisioning_config;
  return connection_->SubmitProvisioningConfig(request);
}

StatusOr<google::cloud::baremetalsolution::v2::SubmitProvisioningConfigResponse>
BareMetalSolutionClient::SubmitProvisioningConfig(
    google::cloud::baremetalsolution::v2::SubmitProvisioningConfigRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SubmitProvisioningConfig(request);
}

StatusOr<google::cloud::baremetalsolution::v2::ProvisioningConfig>
BareMetalSolutionClient::GetProvisioningConfig(std::string const& name,
                                               Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::baremetalsolution::v2::GetProvisioningConfigRequest request;
  request.set_name(name);
  return connection_->GetProvisioningConfig(request);
}

StatusOr<google::cloud::baremetalsolution::v2::ProvisioningConfig>
BareMetalSolutionClient::GetProvisioningConfig(
    google::cloud::baremetalsolution::v2::GetProvisioningConfigRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetProvisioningConfig(request);
}

StatusOr<google::cloud::baremetalsolution::v2::ProvisioningConfig>
BareMetalSolutionClient::CreateProvisioningConfig(
    std::string const& parent,
    google::cloud::baremetalsolution::v2::ProvisioningConfig const&
        provisioning_config,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::baremetalsolution::v2::CreateProvisioningConfigRequest request;
  request.set_parent(parent);
  *request.mutable_provisioning_config() = provisioning_config;
  return connection_->CreateProvisioningConfig(request);
}

StatusOr<google::cloud::baremetalsolution::v2::ProvisioningConfig>
BareMetalSolutionClient::CreateProvisioningConfig(
    google::cloud::baremetalsolution::v2::CreateProvisioningConfigRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateProvisioningConfig(request);
}

StatusOr<google::cloud::baremetalsolution::v2::ProvisioningConfig>
BareMetalSolutionClient::UpdateProvisioningConfig(
    google::cloud::baremetalsolution::v2::ProvisioningConfig const&
        provisioning_config,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::baremetalsolution::v2::UpdateProvisioningConfigRequest request;
  *request.mutable_provisioning_config() = provisioning_config;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateProvisioningConfig(request);
}

StatusOr<google::cloud::baremetalsolution::v2::ProvisioningConfig>
BareMetalSolutionClient::UpdateProvisioningConfig(
    google::cloud::baremetalsolution::v2::UpdateProvisioningConfigRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateProvisioningConfig(request);
}

StatusOr<google::cloud::baremetalsolution::v2::Network>
BareMetalSolutionClient::RenameNetwork(std::string const& name,
                                       std::string const& new_network_id,
                                       Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::baremetalsolution::v2::RenameNetworkRequest request;
  request.set_name(name);
  request.set_new_network_id(new_network_id);
  return connection_->RenameNetwork(request);
}

StatusOr<google::cloud::baremetalsolution::v2::Network>
BareMetalSolutionClient::RenameNetwork(
    google::cloud::baremetalsolution::v2::RenameNetworkRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RenameNetwork(request);
}

StreamRange<google::cloud::baremetalsolution::v2::OSImage>
BareMetalSolutionClient::ListOSImages(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::baremetalsolution::v2::ListOSImagesRequest request;
  request.set_parent(parent);
  return connection_->ListOSImages(request);
}

StreamRange<google::cloud::baremetalsolution::v2::OSImage>
BareMetalSolutionClient::ListOSImages(
    google::cloud::baremetalsolution::v2::ListOSImagesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListOSImages(std::move(request));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace baremetalsolution_v2
}  // namespace cloud
}  // namespace google
