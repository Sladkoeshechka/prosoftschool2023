#ifndef OTHERCOMPARISONOPERATORS_H
#define OTHERCOMPARISONOPERATORS_H

template <typename T>
struct OtherComparisonOperators
{
    template <typename U>
    friend bool operator==(const T& first, const U& second)
    {
        return !(first > second) && !(first < second);
    }

    template <typename U>
    friend bool operator!=(const T& first, const U& second)
    {
        return !(first == second);
    }

    template <typename U>
    friend bool operator<=(const T& first, const U& second)
    {
        return !(first > second);
    }

    template <typename U>
    friend bool operator>=(const T& first, const U& second)
    {
        return !(first <= second) || (first == second);
    }
};

#endif // OTHERCOMPARISONOPERATORS_H
