// Licensed to the Apache Software Foundation (ASF) under one
// or more contributor license agreements.  See the NOTICE file
// distributed with this work for additional information
// regarding copyright ownership.  The ASF licenses this file
// to you under the Apache License, Version 2.0 (the
// "License"); you may not use this file except in compliance
// with the License.  You may obtain a copy of the License at
//
//   http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing,
// software distributed under the License is distributed on an
// "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied.  See the License for the
// specific language governing permissions and limitations
// under the License.

#pragma once

#include <string>
#include <odbcabstraction/connection.h>

namespace driver {
namespace odbcabstraction {

using driver::odbcabstraction::Connection;

/// Parse a string value to a boolean.
/// \param value            the value to be parsed.
/// \param default_value    the default value in case the parse fails.
/// \return                 the parsed valued.
bool AsBool(const std::string& value, const bool default_value);

/// Looks up for a value inside the ConnPropertyMap and then try to parse it.
/// In case it does not find or it cannot parse, the default value will be returned.
/// \param default_value      the default value to be parsed.
/// \param connPropertyMap    the map with the connection properties.
/// \param property_name      the name of the property that will be looked up.
/// \return                   the parsed valued.
bool AsBool(const bool default_value, const Connection::ConnPropertyMap& connPropertyMap,
            const std::string& property_name);
} // namespace odbcabstraction
} // namespace driver