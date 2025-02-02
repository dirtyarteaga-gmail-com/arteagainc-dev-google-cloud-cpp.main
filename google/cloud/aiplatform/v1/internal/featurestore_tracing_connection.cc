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
// source: google/cloud/aiplatform/v1/featurestore_service.proto

#include "google/cloud/aiplatform/v1/internal/featurestore_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

FeaturestoreServiceTracingConnection::FeaturestoreServiceTracingConnection(
    std::shared_ptr<aiplatform_v1::FeaturestoreServiceConnection> child)
    : child_(std::move(child)) {}

future<StatusOr<google::cloud::aiplatform::v1::Featurestore>>
FeaturestoreServiceTracingConnection::CreateFeaturestore(
    google::cloud::aiplatform::v1::CreateFeaturestoreRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeaturestoreServiceConnection::CreateFeaturestore");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->CreateFeaturestore(request));
}

StatusOr<google::cloud::aiplatform::v1::Featurestore>
FeaturestoreServiceTracingConnection::GetFeaturestore(
    google::cloud::aiplatform::v1::GetFeaturestoreRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeaturestoreServiceConnection::GetFeaturestore");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetFeaturestore(request));
}

StreamRange<google::cloud::aiplatform::v1::Featurestore>
FeaturestoreServiceTracingConnection::ListFeaturestores(
    google::cloud::aiplatform::v1::ListFeaturestoresRequest request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeaturestoreServiceConnection::ListFeaturestores");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListFeaturestores(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::aiplatform::v1::Featurestore>(std::move(span),
                                                   std::move(sr));
}

future<StatusOr<google::cloud::aiplatform::v1::Featurestore>>
FeaturestoreServiceTracingConnection::UpdateFeaturestore(
    google::cloud::aiplatform::v1::UpdateFeaturestoreRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeaturestoreServiceConnection::UpdateFeaturestore");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->UpdateFeaturestore(request));
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
FeaturestoreServiceTracingConnection::DeleteFeaturestore(
    google::cloud::aiplatform::v1::DeleteFeaturestoreRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeaturestoreServiceConnection::DeleteFeaturestore");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteFeaturestore(request));
}

future<StatusOr<google::cloud::aiplatform::v1::EntityType>>
FeaturestoreServiceTracingConnection::CreateEntityType(
    google::cloud::aiplatform::v1::CreateEntityTypeRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeaturestoreServiceConnection::CreateEntityType");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->CreateEntityType(request));
}

StatusOr<google::cloud::aiplatform::v1::EntityType>
FeaturestoreServiceTracingConnection::GetEntityType(
    google::cloud::aiplatform::v1::GetEntityTypeRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeaturestoreServiceConnection::GetEntityType");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetEntityType(request));
}

StreamRange<google::cloud::aiplatform::v1::EntityType>
FeaturestoreServiceTracingConnection::ListEntityTypes(
    google::cloud::aiplatform::v1::ListEntityTypesRequest request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeaturestoreServiceConnection::ListEntityTypes");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListEntityTypes(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::aiplatform::v1::EntityType>(std::move(span),
                                                 std::move(sr));
}

StatusOr<google::cloud::aiplatform::v1::EntityType>
FeaturestoreServiceTracingConnection::UpdateEntityType(
    google::cloud::aiplatform::v1::UpdateEntityTypeRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeaturestoreServiceConnection::UpdateEntityType");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateEntityType(request));
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
FeaturestoreServiceTracingConnection::DeleteEntityType(
    google::cloud::aiplatform::v1::DeleteEntityTypeRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeaturestoreServiceConnection::DeleteEntityType");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteEntityType(request));
}

future<StatusOr<google::cloud::aiplatform::v1::Feature>>
FeaturestoreServiceTracingConnection::CreateFeature(
    google::cloud::aiplatform::v1::CreateFeatureRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeaturestoreServiceConnection::CreateFeature");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->CreateFeature(request));
}

future<StatusOr<google::cloud::aiplatform::v1::BatchCreateFeaturesResponse>>
FeaturestoreServiceTracingConnection::BatchCreateFeatures(
    google::cloud::aiplatform::v1::BatchCreateFeaturesRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeaturestoreServiceConnection::BatchCreateFeatures");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->BatchCreateFeatures(request));
}

StatusOr<google::cloud::aiplatform::v1::Feature>
FeaturestoreServiceTracingConnection::GetFeature(
    google::cloud::aiplatform::v1::GetFeatureRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeaturestoreServiceConnection::GetFeature");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetFeature(request));
}

StreamRange<google::cloud::aiplatform::v1::Feature>
FeaturestoreServiceTracingConnection::ListFeatures(
    google::cloud::aiplatform::v1::ListFeaturesRequest request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeaturestoreServiceConnection::ListFeatures");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListFeatures(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::aiplatform::v1::Feature>(std::move(span), std::move(sr));
}

StatusOr<google::cloud::aiplatform::v1::Feature>
FeaturestoreServiceTracingConnection::UpdateFeature(
    google::cloud::aiplatform::v1::UpdateFeatureRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeaturestoreServiceConnection::UpdateFeature");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateFeature(request));
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
FeaturestoreServiceTracingConnection::DeleteFeature(
    google::cloud::aiplatform::v1::DeleteFeatureRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeaturestoreServiceConnection::DeleteFeature");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteFeature(request));
}

future<StatusOr<google::cloud::aiplatform::v1::ImportFeatureValuesResponse>>
FeaturestoreServiceTracingConnection::ImportFeatureValues(
    google::cloud::aiplatform::v1::ImportFeatureValuesRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeaturestoreServiceConnection::ImportFeatureValues");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->ImportFeatureValues(request));
}

future<StatusOr<google::cloud::aiplatform::v1::BatchReadFeatureValuesResponse>>
FeaturestoreServiceTracingConnection::BatchReadFeatureValues(
    google::cloud::aiplatform::v1::BatchReadFeatureValuesRequest const&
        request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeaturestoreServiceConnection::BatchReadFeatureValues");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->BatchReadFeatureValues(request));
}

future<StatusOr<google::cloud::aiplatform::v1::ExportFeatureValuesResponse>>
FeaturestoreServiceTracingConnection::ExportFeatureValues(
    google::cloud::aiplatform::v1::ExportFeatureValuesRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeaturestoreServiceConnection::ExportFeatureValues");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->ExportFeatureValues(request));
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteFeatureValuesResponse>>
FeaturestoreServiceTracingConnection::DeleteFeatureValues(
    google::cloud::aiplatform::v1::DeleteFeatureValuesRequest const& request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeaturestoreServiceConnection::DeleteFeatureValues");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteFeatureValues(request));
}

StreamRange<google::cloud::aiplatform::v1::Feature>
FeaturestoreServiceTracingConnection::SearchFeatures(
    google::cloud::aiplatform::v1::SearchFeaturesRequest request) {
  auto span = internal::MakeSpan(
      "aiplatform_v1::FeaturestoreServiceConnection::SearchFeatures");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->SearchFeatures(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::aiplatform::v1::Feature>(std::move(span), std::move(sr));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<aiplatform_v1::FeaturestoreServiceConnection>
MakeFeaturestoreServiceTracingConnection(
    std::shared_ptr<aiplatform_v1::FeaturestoreServiceConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn =
        std::make_shared<FeaturestoreServiceTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google
