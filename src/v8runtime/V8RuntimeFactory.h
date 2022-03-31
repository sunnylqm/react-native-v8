#pragma once

#include <memory.h>
#include "jsi/jsi.h"
#include "jsi/v8runtime/V8RuntimeConfig.h"

namespace rnv8 {

std::unique_ptr<facebook::jsi::Runtime> createV8Runtime(
    const V8RuntimeConfig &config);

} // namespace rnv8
