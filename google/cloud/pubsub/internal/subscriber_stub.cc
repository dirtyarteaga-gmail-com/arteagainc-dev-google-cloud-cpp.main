// Copyright 2020 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "google/cloud/pubsub/internal/subscriber_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/internal/async_read_write_stream_impl.h"
#include <google/pubsub/v1/pubsub.grpc.pb.h>

namespace google {
namespace cloud {
namespace pubsub_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

StatusOr<google::pubsub::v1::Subscription>
DefaultSubscriberStub::CreateSubscription(
    grpc::ClientContext& context,
    google::pubsub::v1::Subscription const& request) {
  google::pubsub::v1::Subscription response;
  auto status = grpc_stub_->CreateSubscription(&context, request, &response);
  if (!status.ok()) return google::cloud::MakeStatusFromRpcError(status);
  return response;
}

StatusOr<google::pubsub::v1::Subscription>
DefaultSubscriberStub::GetSubscription(
    grpc::ClientContext& context,
    google::pubsub::v1::GetSubscriptionRequest const& request) {
  google::pubsub::v1::Subscription response;
  auto status = grpc_stub_->GetSubscription(&context, request, &response);
  if (!status.ok()) return google::cloud::MakeStatusFromRpcError(status);
  return response;
}

StatusOr<google::pubsub::v1::Subscription>
DefaultSubscriberStub::UpdateSubscription(
    grpc::ClientContext& context,
    google::pubsub::v1::UpdateSubscriptionRequest const& request) {
  google::pubsub::v1::Subscription response;
  auto status = grpc_stub_->UpdateSubscription(&context, request, &response);
  if (!status.ok()) return google::cloud::MakeStatusFromRpcError(status);
  return response;
}

StatusOr<google::pubsub::v1::ListSubscriptionsResponse>
DefaultSubscriberStub::ListSubscriptions(
    grpc::ClientContext& context,
    google::pubsub::v1::ListSubscriptionsRequest const& request) {
  google::pubsub::v1::ListSubscriptionsResponse response;
  auto status = grpc_stub_->ListSubscriptions(&context, request, &response);
  if (!status.ok()) return google::cloud::MakeStatusFromRpcError(status);
  return response;
}

Status DefaultSubscriberStub::DeleteSubscription(
    grpc::ClientContext& context,
    google::pubsub::v1::DeleteSubscriptionRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteSubscription(&context, request, &response);
  if (!status.ok()) return google::cloud::MakeStatusFromRpcError(status);
  return {};
}

std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
    google::pubsub::v1::StreamingPullRequest,
    google::pubsub::v1::StreamingPullResponse>>
DefaultSubscriberStub::AsyncStreamingPull(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::pubsub::v1::StreamingPullRequest const&) {
  return google::cloud::internal::MakeStreamingReadWriteRpc<
      google::pubsub::v1::StreamingPullRequest,
      google::pubsub::v1::StreamingPullResponse>(
      cq, std::move(context),
      [this](grpc::ClientContext* context, grpc::CompletionQueue* cq) {
        return grpc_stub_->PrepareAsyncStreamingPull(context, cq);
      });
}

Status DefaultSubscriberStub::ModifyPushConfig(
    grpc::ClientContext& context,
    google::pubsub::v1::ModifyPushConfigRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->ModifyPushConfig(&context, request, &response);
  if (!status.ok()) return google::cloud::MakeStatusFromRpcError(status);
  return {};
}

StatusOr<google::pubsub::v1::Snapshot> DefaultSubscriberStub::GetSnapshot(
    grpc::ClientContext& context,
    google::pubsub::v1::GetSnapshotRequest const& request) {
  google::pubsub::v1::Snapshot response;
  auto status = grpc_stub_->GetSnapshot(&context, request, &response);
  if (!status.ok()) return google::cloud::MakeStatusFromRpcError(status);
  return response;
}

StatusOr<google::pubsub::v1::ListSnapshotsResponse>
DefaultSubscriberStub::ListSnapshots(
    grpc::ClientContext& context,
    google::pubsub::v1::ListSnapshotsRequest const& request) {
  google::pubsub::v1::ListSnapshotsResponse response;
  auto status = grpc_stub_->ListSnapshots(&context, request, &response);
  if (!status.ok()) return google::cloud::MakeStatusFromRpcError(status);
  return response;
}

StatusOr<google::pubsub::v1::Snapshot> DefaultSubscriberStub::CreateSnapshot(
    grpc::ClientContext& context,
    google::pubsub::v1::CreateSnapshotRequest const& request) {
  google::pubsub::v1::Snapshot response;
  auto status = grpc_stub_->CreateSnapshot(&context, request, &response);
  if (!status.ok()) return google::cloud::MakeStatusFromRpcError(status);
  return response;
}

StatusOr<google::pubsub::v1::Snapshot> DefaultSubscriberStub::UpdateSnapshot(
    grpc::ClientContext& context,
    google::pubsub::v1::UpdateSnapshotRequest const& request) {
  google::pubsub::v1::Snapshot response;
  auto status = grpc_stub_->UpdateSnapshot(&context, request, &response);
  if (!status.ok()) return google::cloud::MakeStatusFromRpcError(status);
  return response;
}

Status DefaultSubscriberStub::DeleteSnapshot(
    grpc::ClientContext& context,
    google::pubsub::v1::DeleteSnapshotRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteSnapshot(&context, request, &response);
  if (!status.ok()) return google::cloud::MakeStatusFromRpcError(status);
  return {};
}

StatusOr<google::pubsub::v1::SeekResponse> DefaultSubscriberStub::Seek(
    grpc::ClientContext& context,
    google::pubsub::v1::SeekRequest const& request) {
  google::pubsub::v1::SeekResponse response;
  auto status = grpc_stub_->Seek(&context, request, &response);
  if (!status.ok()) return google::cloud::MakeStatusFromRpcError(status);
  return response;
}

future<Status> DefaultSubscriberStub::AsyncModifyAckDeadline(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::pubsub::v1::ModifyAckDeadlineRequest const& request) {
  return cq
      .MakeUnaryRpc(
          [this](grpc::ClientContext* context,
                 google::pubsub::v1::ModifyAckDeadlineRequest const& request,
                 grpc::CompletionQueue* cq) {
            return grpc_stub_->AsyncModifyAckDeadline(context, request, cq);
          },
          request, std::move(context))
      .then([](future<StatusOr<google::protobuf::Empty>> f) {
        auto result = f.get();
        if (!result) return std::move(result).status();
        return Status{};
      });
}

future<Status> DefaultSubscriberStub::AsyncAcknowledge(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::pubsub::v1::AcknowledgeRequest const& request) {
  return cq
      .MakeUnaryRpc(
          [this](grpc::ClientContext* context,
                 google::pubsub::v1::AcknowledgeRequest const& request,
                 grpc::CompletionQueue* cq) {
            return grpc_stub_->AsyncAcknowledge(context, request, cq);
          },
          request, std::move(context))
      .then([](future<StatusOr<google::protobuf::Empty>> f) {
        auto result = f.get();
        if (!result) return std::move(result).status();
        return Status{};
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace pubsub_internal
}  // namespace cloud
}  // namespace google
