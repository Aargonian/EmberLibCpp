/*
 * Created by Aaron Helton on 7/16/2021.
 */

#ifndef EMBERBROWSER_COMMON_HPP
#define EMBERBROWSER_COMMON_HPP

#include <cstdint>

namespace EmberLib
{
    /*
     * Note: The default uint*_t types are not guaranteed to exist according to
     * the spec, but the least types are. They are not necessarily the correct
     * size, but they are guaranteed to at least hold this size. For this reason
     * any use of these types should not make assumptions about the upper limit
     * of bits these types represent.
     */
    typedef uint_least8_t uint8;
    typedef uint_least16_t uint16;
    typedef uint_least32_t uint32;
    typedef uint_least64_t uint64;
    typedef int_least8_t int8;
    typedef int_least16_t int16;
    typedef int_least32_t int32;
    typedef int_least64_t int64;

    typedef size_t index;
}
#endif //EMBERBROWSER_COMMON_HPP
