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
// source: google/cloud/aiplatform/v1/prediction_service.proto

#include "google/cloud/aiplatform/v1/prediction_client.h"
#include <memory>

namespace google {
namespace cloud {
namespace aiplatform_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

PredictionServiceClient::PredictionServiceClient(
    std::shared_ptr<PredictionServiceConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
PredictionServiceClient::~PredictionServiceClient() = default;

StatusOr<google::cloud::aiplatform::v1::PredictResponse>
PredictionServiceClient::Predict(
    std::string const& endpoint,
    std::vector<google::protobuf::Value> const& instances,
    google::protobuf::Value const& parameters, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::PredictRequest request;
  request.set_endpoint(endpoint);
  *request.mutable_instances() = {instances.begin(), instances.end()};
  *request.mutable_parameters() = parameters;
  return connection_->Predict(request);
}

StatusOr<google::cloud::aiplatform::v1::PredictResponse>
PredictionServiceClient::Predict(
    google::cloud::aiplatform::v1::PredictRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->Predict(request);
}

StatusOr<google::api::HttpBody> PredictionServiceClient::RawPredict(
    std::string const& endpoint, google::api::HttpBody const& http_body,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::RawPredictRequest request;
  request.set_endpoint(endpoint);
  *request.mutable_http_body() = http_body;
  return connection_->RawPredict(request);
}

StatusOr<google::api::HttpBody> PredictionServiceClient::RawPredict(
    google::cloud::aiplatform::v1::RawPredictRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RawPredict(request);
}

StreamRange<google::cloud::aiplatform::v1::StreamingPredictResponse>
PredictionServiceClient::ServerStreamingPredict(
    google::cloud::aiplatform::v1::StreamingPredictRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ServerStreamingPredict(request);
}

StatusOr<google::cloud::aiplatform::v1::ExplainResponse>
PredictionServiceClient::Explain(
    std::string const& endpoint,
    std::vector<google::protobuf::Value> const& instances,
    google::protobuf::Value const& parameters,
    std::string const& deployed_model_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::aiplatform::v1::ExplainRequest request;
  request.set_endpoint(endpoint);
  *request.mutable_instances() = {instances.begin(), instances.end()};
  *request.mutable_parameters() = parameters;
  request.set_deployed_model_id(deployed_model_id);
  return connection_->Explain(request);
}

StatusOr<google::cloud::aiplatform::v1::ExplainResponse>
PredictionServiceClient::Explain(
    google::cloud::aiplatform::v1::ExplainRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->Explain(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1
}  // namespace cloud
}  // namespace google
