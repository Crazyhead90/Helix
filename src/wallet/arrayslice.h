/**
 * Copyright (c) 2011-2019 libbitcoin developers (see AUTHORS)
 *
 * This file is part of libbitcoin.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

<<<<<<< HEAD
#ifndef HELIX_ARRAYSLICE_H
#define HELIX_ARRAYSLICE_H
=======
#ifndef PHORE_ARRAYSLICE_H
#define PHORE_ARRAYSLICE_H
>>>>>>> cf2783ef2175bdf3ee6686987d30125c4cc4d5b9

#include <array>

template <typename Iterable>
class array_slice
{
public:
    template <typename Container>
    array_slice(const Container& container) : begin_(container.data()), end_(container.data() + container.size()) {}

    array_slice(const Iterable* begin, const Iterable* end) : begin_(begin), end_(end) {}

    const Iterable* begin() const { return begin_; }
    const Iterable* end() const { return end_; }
    const Iterable* data() const { return begin_; }
    std::size_t size() const { return end_ - begin_; }
    bool empty() const { return end_ == begin_; }

private:
    const Iterable* begin_;
    const Iterable* end_;
};

<<<<<<< HEAD
#endif //HELIX_ARRAYSLICE_H
=======
#endif //PHORE_ARRAYSLICE_H
>>>>>>> cf2783ef2175bdf3ee6686987d30125c4cc4d5b9
