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
// source: google/cloud/contentwarehouse/v1/synonymset_service.proto

#include "google/cloud/contentwarehouse/v1/synonym_set_client.h"
#include <memory>

namespace google {
namespace cloud {
namespace contentwarehouse_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

SynonymSetServiceClient::SynonymSetServiceClient(
    std::shared_ptr<SynonymSetServiceConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
SynonymSetServiceClient::~SynonymSetServiceClient() = default;

StatusOr<google::cloud::contentwarehouse::v1::SynonymSet>
SynonymSetServiceClient::CreateSynonymSet(
    std::string const& parent,
    google::cloud::contentwarehouse::v1::SynonymSet const& synonym_set,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::contentwarehouse::v1::CreateSynonymSetRequest request;
  request.set_parent(parent);
  *request.mutable_synonym_set() = synonym_set;
  return connection_->CreateSynonymSet(request);
}

StatusOr<google::cloud::contentwarehouse::v1::SynonymSet>
SynonymSetServiceClient::CreateSynonymSet(
    google::cloud::contentwarehouse::v1::CreateSynonymSetRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateSynonymSet(request);
}

StatusOr<google::cloud::contentwarehouse::v1::SynonymSet>
SynonymSetServiceClient::GetSynonymSet(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::contentwarehouse::v1::GetSynonymSetRequest request;
  request.set_name(name);
  return connection_->GetSynonymSet(request);
}

StatusOr<google::cloud::contentwarehouse::v1::SynonymSet>
SynonymSetServiceClient::GetSynonymSet(
    google::cloud::contentwarehouse::v1::GetSynonymSetRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetSynonymSet(request);
}

StatusOr<google::cloud::contentwarehouse::v1::SynonymSet>
SynonymSetServiceClient::UpdateSynonymSet(
    std::string const& name,
    google::cloud::contentwarehouse::v1::SynonymSet const& synonym_set,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::contentwarehouse::v1::UpdateSynonymSetRequest request;
  request.set_name(name);
  *request.mutable_synonym_set() = synonym_set;
  return connection_->UpdateSynonymSet(request);
}

StatusOr<google::cloud::contentwarehouse::v1::SynonymSet>
SynonymSetServiceClient::UpdateSynonymSet(
    google::cloud::contentwarehouse::v1::UpdateSynonymSetRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateSynonymSet(request);
}

Status SynonymSetServiceClient::DeleteSynonymSet(std::string const& name,
                                                 Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::contentwarehouse::v1::DeleteSynonymSetRequest request;
  request.set_name(name);
  return connection_->DeleteSynonymSet(request);
}

Status SynonymSetServiceClient::DeleteSynonymSet(
    google::cloud::contentwarehouse::v1::DeleteSynonymSetRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteSynonymSet(request);
}

StreamRange<google::cloud::contentwarehouse::v1::SynonymSet>
SynonymSetServiceClient::ListSynonymSets(std::string const& parent,
                                         Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::contentwarehouse::v1::ListSynonymSetsRequest request;
  request.set_parent(parent);
  return connection_->ListSynonymSets(request);
}

StreamRange<google::cloud::contentwarehouse::v1::SynonymSet>
SynonymSetServiceClient::ListSynonymSets(
    google::cloud::contentwarehouse::v1::ListSynonymSetsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListSynonymSets(std::move(request));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace contentwarehouse_v1
}  // namespace cloud
}  // namespace google
