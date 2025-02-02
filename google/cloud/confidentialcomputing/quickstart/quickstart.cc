// Copyright 2023 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

//! [all]
#include "google/cloud/confidentialcomputing/v1/confidential_computing_client.h"
#include "google/cloud/project.h"
#include <iostream>

int main(int argc, char* argv[]) try {
  if (argc != 3) {
    std::cerr << "Usage: " << argv[0] << " project-id location-id\n";
    return 1;
  }

  namespace confidentialcomputing = ::google::cloud::confidentialcomputing_v1;
  auto client = confidentialcomputing::ConfidentialComputingClient(
      confidentialcomputing::MakeConfidentialComputingConnection());

  //  auto const project = google::cloud::Project(argv[1]);
  auto const parent =
      std::string{"projects/"} + argv[1] + "/locations/" + argv[2];
  auto result = client.CreateChallenge(parent, {});
  if (!result) throw std::move(result).status();
  std::cout << result->DebugString() << "\n";

  return 0;
} catch (google::cloud::Status const& status) {
  std::cerr << "google::cloud::Status thrown: " << status << "\n";
  return 1;
}
//! [all]
