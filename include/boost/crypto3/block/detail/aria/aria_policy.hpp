//---------------------------------------------------------------------------//
// Copyright (c) 2018-2020 Mikhail Komarov <nemo@nil.foundation>
//
// Distributed under the Boost Software License, Version 1.0
// See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt
//---------------------------------------------------------------------------//

#ifndef CRYPTO3_BLOCK_ARIA_POLICY_HPP
#define CRYPTO3_BLOCK_ARIA_POLICY_HPP

#include <array>

#include <boost/crypto3/block/detail/aria/aria_functions.hpp>

namespace boost {
    namespace crypto3 {
        namespace block {
            namespace detail {

                template<std::size_t KeyBits>
                struct aria_policy;

                template<>
                struct aria_policy<128> : public aria_functions<128> {
                    constexpr static const std::size_t rounds = 12;
                };

                template<>
                struct aria_policy<192> : public aria_functions<192> {
                    constexpr static const std::size_t rounds = 14;
                };

                template<>
                struct aria_policy<256> : public aria_functions<256> {
                    constexpr static const std::size_t rounds = 16;
                };
            }    // namespace detail
        }        // namespace block
    }            // namespace crypto3
}    // namespace boost

#endif    // CRYPTO3_BLOCK_ARIA_POLICY_HPP
