#include "V8RuntimeFactory.h"

#include "V8Runtime.h"

namespace rnv8 {

std::unique_ptr<facebook::jsi::Runtime> createV8Runtime(
    const V8RuntimeConfig &config) {
  return std::make_unique<V8Runtime>(config);
}

} // namespace rnv8
