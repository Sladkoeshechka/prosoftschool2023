#ifndef HASOPERATORS_H
#define HASOPERATORS_H

#include <utility>
#include <type_traits>

template <typename, typename, typename = std::void_t<>>
struct HasLessT : std::false_type {};

template <typename T1, typename T2>
struct HasLessT <T1, T2,
        std::void_t<decltype(std::declval<T1>() < std::declval<T2>())>>
        : std::true_type {};

template <typename, typename, typename = std::void_t<>>
struct HasGreaterT : std::false_type {};

template <typename T1, typename T2>
struct HasGreaterT <T1, T2,
        std::void_t<decltype(std::declval<T1>() > std::declval<T2>())>>
        : std::true_type {};

#endif // HASOPERATORS_H
