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
// source: grafeas/v1/grafeas.proto

#include "google/cloud/containeranalysis/grafeas_connection.h"
#include "google/cloud/containeranalysis/grafeas_options.h"
#include "google/cloud/containeranalysis/internal/grafeas_connection_impl.h"
#include "google/cloud/containeranalysis/internal/grafeas_option_defaults.h"
#include "google/cloud/containeranalysis/internal/grafeas_stub_factory.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace containeranalysis {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

GrafeasConnection::~GrafeasConnection() = default;

StatusOr<grafeas::v1::Occurrence> GrafeasConnection::GetOccurrence(
    grafeas::v1::GetOccurrenceRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<grafeas::v1::Occurrence> GrafeasConnection::ListOccurrences(
    grafeas::v1::
        ListOccurrencesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<grafeas::v1::Occurrence>>();
}

Status GrafeasConnection::DeleteOccurrence(
    grafeas::v1::DeleteOccurrenceRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<grafeas::v1::Occurrence> GrafeasConnection::CreateOccurrence(
    grafeas::v1::CreateOccurrenceRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<grafeas::v1::BatchCreateOccurrencesResponse>
GrafeasConnection::BatchCreateOccurrences(
    grafeas::v1::BatchCreateOccurrencesRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<grafeas::v1::Occurrence> GrafeasConnection::UpdateOccurrence(
    grafeas::v1::UpdateOccurrenceRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<grafeas::v1::Note> GrafeasConnection::GetOccurrenceNote(
    grafeas::v1::GetOccurrenceNoteRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<grafeas::v1::Note> GrafeasConnection::GetNote(
    grafeas::v1::GetNoteRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<grafeas::v1::Note> GrafeasConnection::ListNotes(
    grafeas::v1::
        ListNotesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<grafeas::v1::Note>>();
}

Status GrafeasConnection::DeleteNote(grafeas::v1::DeleteNoteRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<grafeas::v1::Note> GrafeasConnection::CreateNote(
    grafeas::v1::CreateNoteRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<grafeas::v1::BatchCreateNotesResponse>
GrafeasConnection::BatchCreateNotes(
    grafeas::v1::BatchCreateNotesRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<grafeas::v1::Note> GrafeasConnection::UpdateNote(
    grafeas::v1::UpdateNoteRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<grafeas::v1::Occurrence> GrafeasConnection::ListNoteOccurrences(
    grafeas::v1::
        ListNoteOccurrencesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<grafeas::v1::Occurrence>>();
}

std::shared_ptr<GrafeasConnection> MakeGrafeasConnection(Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 GrafeasPolicyOptionList>(options, __func__);
  options =
      containeranalysis_internal::GrafeasDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = containeranalysis_internal::CreateDefaultGrafeasStub(
      background->cq(), options);
  return std::make_shared<containeranalysis_internal::GrafeasConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace containeranalysis
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace containeranalysis_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<containeranalysis::GrafeasConnection> MakeGrafeasConnection(
    std::shared_ptr<GrafeasStub> stub, Options options) {
  options = GrafeasDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  return std::make_shared<containeranalysis_internal::GrafeasConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace containeranalysis_internal
}  // namespace cloud
}  // namespace google
