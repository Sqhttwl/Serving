// Copyright (c) 2019 PaddlePaddle Authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "kvdb/kvdb_impl.h"

void ParamDictMgr::UpdateAll() {
    for(auto it = this->ParamDictMap.begin(); it!= this->ParamDictMap.end(); ++it) {
        it->second->UpdateBaseModel();
    }

}

void ParamDictMgr::InsertParamDict(std::string key, AbsParamDictPtr value) {
    this->ParamDictMap.insert(std::make_pair(key, value));
}

AbstractKVDB::~AbstractKVDB() {}
AbstractDictReader::~AbstractDictReader() {}
AbstractParamDict::~AbstractParamDict() {}
